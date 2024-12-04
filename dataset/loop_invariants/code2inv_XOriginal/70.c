int main()
{
  int n;
  int x;
  int y;
  int g0 = 2;
  int g1 = 1;
  int g2 = 2;
  int g3 = 7;
  int g4 = 8;
  //skip 
  x = 1;
  
  while(((x) <= (n)))
  {
    //tb 
    y = ((n) - (x)) + (((g3 + g0 + g2)*(g3 + g0 + g2)) + 1*g3*g0 + -1*g3*g2 + -2*g3*g2 + 1*g0*g2) - ((g3*g3 + g0*g0 + g2*g2) + 1*g3*g0 + 2*g3*g0 + -1*g3*g2 + 1*g0*g2 + 2*g0*g2);
    g0 = g4 + (292) + n + y;
    x = ((x) + (1)) + (((g0 + g3 + g4)*(g0 + g3 + g4)) + -1*g0*g3 + -2*g0*g3 + 1*g0*g4 + -1*g3*g4 + -1*g3*g4 + 1*g3*g4 + -2*g3*g4) - ((g0*g0 + g3*g3 + g4*g4) + -1*g0*g3 + 1*g0*g4 + 2*g0*g4 + -1*g3*g4);
    g2 = g3 + x + y;
  }
    //fb 
  if(((n) > (0))) {
    //tb 
    assert ((y) < (n));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
