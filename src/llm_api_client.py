import tempfile
from pathlib import Path, PurePath
import re
import time
from typing import Any, List

import openai
import tiktoken
from azure.identity import (
    AuthenticationRecord,
    InteractiveBrowserCredential,
    TokenCachePersistenceOptions,
)
from llm_utils import Logger, Settings
from llm import LLMClient


class LLMAPIClient(LLMClient):
    """The LLM API client."""

    def __init__(self, settings: Settings):
        """Configure this LLM client."""
        self.settings = settings
        Logger.verbose = settings.verbose
        Logger.debug = settings.debug

        # Values for implementing cool-down and retry logic.
        self._interval = 60 / settings.prompts_per_minute
        self._last_call_time = None
        self._max_retries: int = 10

    def chat(self, messages: list[dict[str, str]]) -> tuple[bool, List[str]]:
        """Send the chat completion prompt and get the response from the model."""

        api_client = None
        if self.settings.provider == "azure-openai":
            api_client = AzureOpenAI(
                self.settings.get_api_key(),
                self.settings.get_api_base(),
                self.settings.get_api_version(),
            )
        else:
            raise Exception(f"Provider '{self.settings.provider}' is not supported.")
        api_client.enforce_token_limit(messages, self.settings.model)

        # Enforce a cool-down for rate-limiting.
        current_time = time.time()
        if (
            self._last_call_time is not None
            and (current_time - self._last_call_time) < self._interval
        ):
            time.sleep(self._interval)

        attempt = 0
        while attempt < self._max_retries:
            try:
                # Make the request to the remote LLM API with retries.
                Logger.log_model_request(
                    self.settings.model,
                    messages,
                )
                self._last_call_time = current_time

                response: Any = api_client.get_completion(
                    model=self.settings.model,
                    messages=messages,
                    max_tokens=self.settings.max_tokens,
                    temperature=self.settings.temperature,
                    num_completions=self.settings.num_completions,
                    top_p=self.settings.top_p,
                    frequency_penalty=self.settings.frequency_penalty,
                    presence_penalty=self.settings.presence_penalty,
                )

                completions = []
                for completion in response.choices:
                    completions.append(completion.message.content)

                Logger.log_model_response(
                    self.settings.model,
                    completions,
                )

                return True, completions
            except Exception as e:
                attempt += 1
                Logger.log_error(
                    f"Failed to send LLM prompt (attempt #{attempt}): {repr(e)}"
                )
                seconds = re.search(r"Try again in (\d+) seconds", str(e))
                if seconds is None:
                    seconds = re.search(r"retry after (\d+) seconds", str(e))
                if seconds:
                    time.sleep(int(seconds.group(1)))
                else:
                    time.sleep(2 * attempt)
                continue
        return False, ["Failed to prompt the LLM."]


class Provider:
    def __init__(self, name, api_key, base_url, version):
        self.name = name
        self.api_key = api_key
        self.api_base = base_url
        self.api_version = version

    def get_completion(self, **kwargs):
        raise NotImplementedError

    def enforce_token_limit(self, prompt: list[dict[str, str]], model: str):
        raise NotImplementedError


def getOpenAIClient1() -> openai.OpenAI:
    base_url = "http://localhost:8000/v1"
    return openai.OpenAI(base_url=base_url, api_key="EMPTY")


def getOpenAIClient() -> openai.OpenAI:
    base_url = "https://trapi.research.microsoft.com/msri/"
    api_url = "azure"
    api_version = "2024-10-21"
    api_key = get_auth_token("api://trapi/.default")

    if api_key is None:
        raise Exception("API KEY NOT AVAILABLE")

    return openai.AzureOpenAI(
        azure_endpoint=base_url, api_key=api_key, api_version=api_version
    )


def read_file(file_path: str) -> str:
    encodings = ["utf-8-sig", "utf-16"]
    try:
        for encoding in encodings:
            try:
                with open(file_path, "r", encoding=encoding) as file_handle:
                    return file_handle.read()
            except UnicodeError:
                continue
    except Exception as exc:
        error_msg = f"Error while reading file '{file_path}': {exc}"
        print(error_msg)
        raise
    return ""


def write_file(file_path: str, file_data, file_encoding: str = "utf-8-sig"):
    try:
        Path(file_path).parent.mkdir(parents=True, exist_ok=True)
        with open(file_path, "w", encoding=file_encoding) as file_handle:
            file_handle.write(file_data)
    except Exception as exc:
        error_msg = f"Error while writing to file '{file_path}': {exc}"
        print(error_msg)
        raise


def exists(path: str) -> bool:
    try:
        return Path(path).exists()
    except Exception:
        return False


def get_auth_token(scope: str) -> str:
    deserialized_auth_record = None

    auth_token_cache_file_path = str(
        PurePath(tempfile.gettempdir(), "auth_token_cache.json")
    )
    if exists(auth_token_cache_file_path):
        auth_record_json = read_file(auth_token_cache_file_path)
        deserialized_auth_record = AuthenticationRecord.deserialize(auth_record_json)

    token_cache_persistence_options = TokenCachePersistenceOptions(
        allow_unencrypted_storage=True
    )

    credential = InteractiveBrowserCredential(
        cache_persistence_options=token_cache_persistence_options,
        authentication_record=deserialized_auth_record,
    )

    auth_token = credential.get_token(scope).token
    auth_record = credential.authenticate(scopes=[scope])
    auth_record_json = AuthenticationRecord.serialize(auth_record)

    write_file(auth_token_cache_file_path, auth_record_json)

    return auth_token


class AzureOpenAI(Provider):
    def __init__(self, api_key, api_base, api_version):
        super().__init__("azure-openai", api_key, api_base, api_version)
        self.api_type = "azure"
        self.client = getOpenAIClient()

    def get_completion(self, **kwargs):
        # openai.api_key = self.api_key
        # openai.api_base = self.api_base
        # openai.api_type = self.api_type
        # openai.api_version = self.api_version
        #
        model = kwargs.get("model") + "_" + "2024-08-06"
        print(model)
        messages = kwargs.get("messages")
        max_completion_tokens = 10000
        # max_completion_tokens = kwargs.get("max_tokens")
        temperature = kwargs.get("temperature")
        num_completions = 1
        top_p = kwargs.get("top_p")
        frequency_penalty = kwargs.get("frequency_penalty")
        presence_penalty = kwargs.get("presence_penalty")

        # model = "hugging-quants/Meta-Llama-3.1-70B-Instruct-AWQ-INT4"
        time.sleep(30)
        response = self.client.chat.completions.create(
            model=model,
            messages=messages,
            max_tokens=max_completion_tokens,
            # temperature=temperature,
            n=num_completions,
            # top_p=top_p,
            frequency_penalty=frequency_penalty,
            presence_penalty=presence_penalty,
        )

        print(response.usage)
        return response

    def enforce_token_limit(self, prompt: list[dict[str, str]], model: str):
        """Enforces the token limit on the prompt for the specified model."""

        _prompt = self._messages_to_string(prompt)

        tokens_count: int = self._count_token_size(_prompt, model)
        threshold = 10000
        if model == "text-davinci-003":
            threshold = 2500
        elif model == "gpt-3.5-turbo":
            threshold = 2500
        elif model == "gpt-4":
            threshold = 6000
        elif model == "gpt-4o":
            threshold = 6000
        elif model == "gpt-4-32k":
            threshold = 30000
        if tokens_count > threshold:
            raise Exception(
                f"Tokens size '{tokens_count}' exceeded the '{threshold}' limit."
            )

    def _count_token_size(self, prompt: str, model: str) -> int:
        """Return the number of tokens in the prompt."""
        encoding = tiktoken.encoding_for_model(model)
        num_tokens = len(encoding.encode(prompt))
        return num_tokens

    def _messages_to_string(self, messages: list[dict[str, str]]) -> str:
        """Concatenates the list of messages to a string."""
        prompt = ""
        for message in messages:
            prompt += message["content"]
        return prompt
