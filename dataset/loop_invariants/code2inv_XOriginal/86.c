int main()
{
  int x;
  int y;
  int g0 = 7;
  int g1 = 3;
  int g2 = 9;
  int g3 = 9;
  int g4 = 6;
  //skip 
  x = -50;
  
  while(((x) < (0)))
  {
    //tb 
    x = ((x) + (y)) + (((g0 + g3)*(g0 + g3)) + -1*g0*g3 + -2*g0*g3) - ((g0*g0 + g3*g3) + -1*g0*g3);
    g4 = g4 + x - y;
    y = ((y) + (1)) + (((g2 + g3 + g4)*(g2 + g3 + g4)) + 1*g2*g3 + -1*g2*g4 + -2*g2*g4 + -1*g3*g4 + -2*g3*g4) - ((g2*g2 + g3*g3 + g4*g4) + 1*g2*g3 + 1*g2*g3 + -1*g2*g3 + 2*g2*g3 + -1*g2*g4 + -1*g3*g4);
    g2 = g2 + x - y;
  }
    //fb 
  assert ((y) > (0));
  //skip 


}
