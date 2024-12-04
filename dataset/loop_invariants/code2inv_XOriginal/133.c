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
    x  + (g2 + g0)^2 + ( 1*g2*g0) = ((x) + (1)) + ((g2*g2 + g0*g0) + 1*g2*g0 + 2*g2*g0);
    g1 = g2 + x;
  }
    //fb 
  assert ((x) == (n));
  //skip 


}
