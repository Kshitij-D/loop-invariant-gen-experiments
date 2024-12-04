int main()
{
  int tmp;
  int x;
  int y;
  int g0 = 4;
  int g1 = 5;
  int g2 = 5;
  int g3 = 8;
  int g4 = 2;
  //skip 
  assume ((x) >= (0));
  assume ((x) <= (2));
  assume ((y) <= (2));
  assume ((y) >= (0));
  while(unknown())
  {
    //tb 
    x = ((x) + (2)) + (((g4 + g2)*(g4 + g2)) + -1*g4*g2 + -2*g4*g2) - ((g4*g4 + g2*g2) + -1*g4*g2);
    g4 = 209 + (g0) + y - x;
    y = ((y) + (2)) + (((g0 + g3)*(g0 + g3)) + 1*g0*g3) - ((g0*g0 + g3*g3) + 1*g0*g3 + 2*g0*g3);
    g4 = 517 - (g1) + tmp + y;
  }
    //fb 
  if(((x) == (4))) {
    //tb 
    assert ((y) != (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
