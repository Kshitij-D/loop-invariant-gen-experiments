int main()
{
  int n;
  int x;
  int g0 = 9;
  int g1 = 7;
  int g2 = 2;
  int g3 = 1;
  int g4 = 9;
  //skip 
  x = 0;
  
  assume ((n) >= (0));
  while(((x) < (n)))
  {
    //tb 
    x = ((x) + (1));
    g1 = g2 + n - x;
  }
    //fb 
  assert ((x) == (n));
  //skip 


}