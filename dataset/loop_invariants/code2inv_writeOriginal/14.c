int main()
{
  int tmp;
  int x;
  int y;
  int g0 = 6;
  int g1 = 3;
  int g2 = 4;
  int g3 = 8;
  int g4 = 3;
  //skip 
  assume ((x) >= (0));
  assume ((x) <= (2));
  assume ((y) <= (2));
  assume ((y) >= (0));
  while(unknown())
  {
    //tb 
    x  + (g4*g4 + g3*g3 + g1*g1) + ( -1*g4*g3 + -1*g4*g1 + -1*g3*g1) = ((x) + (2)) + (((g4 + g3 + g1)*(g4 + g3 + g1) + -1*g4*g3 + -2*g4*g3 + -1*g4*g1 + -2*g4*g1 + -1*g3*g1 + -2*g3*g1);
    g2 = 520 - (69);
    y  + (g1*g1 + g0*g0) + ( 1*g1*g0 + 2*g1*g0) = ((y) + (2)) + (((g1 + g0)*(g1 + g0) + 1*g1*g0);
    g1 = g0 - (g2);
  }
    //fb 
  if(((y) == (0))) {
    //tb 
    assert ((x) != (4));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}