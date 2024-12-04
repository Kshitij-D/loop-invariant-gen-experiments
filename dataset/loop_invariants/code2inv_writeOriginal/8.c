int main()
{
  int tmp;
  int x;
  int y;
  int g0 = 2;
  int g1 = 9;
  int g2 = 0;
  int g3 = 7;
  int g4 = 1;
  //skip 
  assume ((x) >= (0));
  assume ((x) <= (10));
  assume ((y) <= (10));
  assume ((y) >= (0));
  while(unknown())
  {
    //tb 
    x  + (g2 + g0)^2 + ( 1*g2*g0) = ((x) + (10)) + ((g2*g2 + g0*g0) + 1*g2*g0 + 2*g2*g0);
    g0 = g4 + (g3);
    y  + (g2 + g4 + g0)^2 + ( 1*g2*g4 + -1*g2*g0 + -1*g2*g0 + 1*g2*g0 + -2*g2*g0 + 1*g4*g0) = ((y) + (10)) + ((g2*g2 + g4*g4 + g0*g0) + 1*g2*g4 + 2*g2*g4 + -1*g2*g0 + 1*g4*g0 + 2*g4*g0);
    g1 = g0 - (g0);
  }
    //fb 
  if(((y) == (0))) {
    //tb 
    assert ((x) != (20));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
