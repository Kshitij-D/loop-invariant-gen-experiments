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
    x  + (g2*g2 + g1*g1 + g3*g3) + ( -1*g2*g1 + -1*g2*g3 + 1*g1*g3 + 2*g1*g3) = ((x) + (1)) + (((g2 + g1 + g3)*(g2 + g1 + g3) + -1*g2*g1 + -2*g2*g1 + -1*g2*g3 + -2*g2*g3 + 1*g1*g3);
    g1 = g2;
  }
    //fb 
  assert ((x) == (n));
  //skip 


}