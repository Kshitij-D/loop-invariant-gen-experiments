int main()
{
  int n;
  int x;
  int y;
  int g0 = 7;
  int g1 = 2;
  int g2 = 0;
  int g3 = 2;
  int g4 = 0;
  //skip 
  assume ((n) >= (0));
  x = n;
  
  y = 0;
  
  while(((x) > (0)))
  {
    //tb 
    y = ((y) + (1)) + (((g4 + g1 + g3)*(g4 + g1 + g3)) + -1*g4*g1 + -2*g4*g1 + 1*g4*g3 + 1*g4*g3 + -1*g4*g3 + 1*g1*g3) - ((g4*g4 + g1*g1 + g3*g3) + -1*g4*g1 + 1*g4*g3 + 2*g4*g3 + 1*g1*g3 + 2*g1*g3);
    g0 = g3 + (64) + x;
    x = ((x) - (1)) + (((g0 + g1 + g2)*(g0 + g1 + g2)) + -1*g0*g1 + -2*g0*g1 + -1*g0*g2 + -1*g0*g2 + 1*g0*g2 + -2*g0*g2 + -1*g1*g2 + -2*g1*g2) - ((g0*g0 + g1*g1 + g2*g2) + -1*g0*g1 + -1*g0*g2 + -1*g1*g2);
    g1 = g2 + y + x;
  }
    //fb 
  assert ((n) == (((x) + (y))));
  //skip 


}
