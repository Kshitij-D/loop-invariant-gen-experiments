import re
import random
import os


def generate_polynomial_identity(junk_vars):
    num_vars = random.randint(
        2, 3
    )  # Choose between 2 and 5 junk variables for the identity
    chosen_vars = random.sample(junk_vars, num_vars)

    sum_vars = " + ".join(chosen_vars)
    terms = [f"{var}*{var}" for var in chosen_vars]
    cross_terms = [
        f"{chosen_vars[i]}*{chosen_vars[j]}"
        for i in range(len(chosen_vars))
        for j in range(i + 1, len(chosen_vars))
    ]

    lhs_cross_terms = []
    rhs_cross_terms = []

    # Randomize which side the sum terms (a + b)^2 go to
    square_term_assignment = random.choice(["lhs", "rhs"])

    # Split the cross terms and distribute them
    for term in cross_terms:
        coefficient = 2
        # Randomly assign the split coefficients to LHS or RHS and randomize the sign
        # Handle the square terms and assign to the appropriate side
        if square_term_assignment == "lhs":
            lhs_identity = "(" + " + ".join(terms) + ") + "
            rhs_identity = "((" + sum_vars + ")*(" + sum_vars + ")" " + "
            lhs_coeffs, rhs_coeffs = split_coefficient(coefficient)
        else:
            rhs_identity = "(" + " + ".join(terms) + ") + "
            lhs_identity = "(" + sum_vars + ")^2 + "
            rhs_coeffs, lhs_coeffs = split_coefficient(coefficient)

        # Distribute terms with appropriate signs
        for lhs_coeff in lhs_coeffs:
            lhs_cross_terms.append(f"{lhs_coeff}*{term}")
        for rhs_coeff in rhs_coeffs:
            rhs_cross_terms.append(f"{rhs_coeff}*{term}")

    # Add the cross terms to the appropriate sides
    lhs_identity += "( " + " + ".join(lhs_cross_terms)
    rhs_identity += " + ".join(rhs_cross_terms)

    return lhs_identity, rhs_identity


def split_coefficient(x):
    n = random.randint(2, 4)

    # Randomly divide n into n1 and n2, ensuring both are at least 1
    n1 = random.randint(1, n - 1)
    n2 = n - n1

    # Randomly divide x into x1 and x2, ensuring both are non-zero
    x1 = random.randint(1, x - 1)
    x2 = x - x1

    # Generate two lists of random integers such that their sum equals x
    L1 = [random.randint(1, x1) for _ in range(n1)]
    L2 = [random.randint(1, x2) for _ in range(n2)]

    # Adjust the sum to be exactly x
    sum_L1 = sum(L1)
    sum_L2 = sum(L2)

    diff_L1 = x1 - sum_L1
    diff_L2 = x2 - sum_L2

    # Adjust the last element in each list to match the desired sum
    if diff_L1 != 0:
        L1[-1] += diff_L1
    if diff_L2 != 0:
        L2[-1] += diff_L2

    L1.append(x)
    L1 = [num for num in L1 if num != 0]
    L2 = [num for num in L2 if num != 0]

    neg_assignment = random.choice(["p", "n"])

    if neg_assignment == "n":
        L1 = [-num for num in L1]
        L2 = [-num for num in L2]
        return L2, L1

    return L1, L2


def changerToOriginalWrite(code: str) -> str:
    all_vars = set(re.findall(r"\bint (\w+)(?:\s*=\s*[^;]*)?;", code))
    non_junk_vars = {var for var in all_vars if not var.startswith("g")}
    non_junk_pattern = r"\b(?:" + "|".join(map(re.escape, non_junk_vars)) + r")\b"
    junk_vars = {var for var in all_vars if var.startswith("g")}

    while_loop_pattern = r"while\s*\((.*?)\)\s*\{(.*?)\}"
    while_loops = re.findall(while_loop_pattern, code, re.DOTALL)
    updated_code = code
    for while_condition, while_body in while_loops:
        body_lines = while_body.splitlines()
        updated_body_lines = []

        for line in body_lines:
            if re.search(non_junk_pattern, line):
                # print(line)
                lhs, rhs = generate_polynomial_identity(list(junk_vars))
                updated_line = line.replace(";", f" + ({rhs});", 1)
                updated_line = updated_line.replace("=", f" + {lhs}) =", 1)
                updated_body_lines.append(updated_line)
                # print(updated_line)
            else:
                updated_body_lines.append(line)

        updated_body = "\n".join(updated_body_lines)

        updated_code = updated_code.replace(while_body, updated_body)

    return updated_code


def changerToOriginalRead(code: str) -> str:
    non_junk_vars = set(re.findall(r"\bint (\w+);", code))
    non_junk_vars = {var for var in non_junk_vars if not var.startswith("g")}

    operators = ["+", "-"]

    def create_random_expression():
        vars_list = list(non_junk_vars)
        random.shuffle(vars_list)
        num_vars = random.randint(1, len(vars_list))
        chosen_vars = vars_list[:num_vars]

        if num_vars == 1:
            return chosen_vars[0]
        else:
            op = random.choice(operators)
            return f"{chosen_vars[0]} {op} {chosen_vars[1]}"

    while_loop_pattern = r"while\s*\((.*?)\)\s*\{(.*?)\}"
    while_loops = re.findall(while_loop_pattern, code, re.DOTALL)
    updated_code = code
    for while_condition, while_body in while_loops:
        body_lines = while_body.splitlines()
        updated_body_lines = []

        for line in body_lines:
            # print(line)
            if re.search(r"\s*g\d+ = ", line):
                random_expr = create_random_expression()
                # print(random_expr)
                updated_line = line.replace(";", f" + {random_expr};", 1)
                updated_body_lines.append(updated_line)
            else:
                updated_body_lines.append(line)

        updated_body = "\n".join(updated_body_lines)

        updated_code = updated_code.replace(while_body, updated_body)

    return updated_code


def copy_files_to_new_folder(src_folder, dest_folder):
    count = 0
    fail_c = []
    for filename in os.listdir(src_folder):
        src_file_path = os.path.join(src_folder, filename)
        dest_file_path = os.path.join(dest_folder, filename)

        if os.path.isfile(src_file_path):
            try:
                with open(src_file_path, "r") as src_file:
                    content = src_file.read()

                content = changerToOriginalRead(content)

                with open(dest_file_path, "w") as dest_file:
                    dest_file.write(content)

                print(f"Copied: {filename}")
                count = count + 1
            except Exception as e:
                print(f"Failed to process {filename}: {e}")
                fail_c.append(str(filename))
        else:
            print(f"Skipping {filename}, as it's not a file.")
            fail_c.append(str(filename))

    print(f"\n\n\n\nSUCCESS: {count}\nFAILURE: {str(fail_c)}")
    print(f"SAVED AT {dest}")


if __name__ == "__main__":
    src = "/home/t-ksdubey/changerdata2"
    dest = "/home/t-ksdubey/changerdata3"
    copy_files_to_new_folder(src, dest)
