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
    x  + (g3*g3 + g1*g1 + g2*g2) + ( -1*g3*g1 + 1*g3*g2 + 2*g3*g2 + 1*g1*g2 + 1*g1*g2 + -1*g1*g2 + 2*g1*g2) = ((x) + (2)) + (((g3 + g1 + g2)*(g3 + g1 + g2) + -1*g3*g1 + -2*g3*g1 + 1*g3*g2 + 1*g1*g2);
    g4 = 209 + (g0) + x + tmp;
    y  + (g1*g1 + g0*g0) + ( 1*g1*g0 + 2*g1*g0) = ((y) + (2)) + (((g1 + g0)*(g1 + g0) + 1*g1*g0);
    g4 = 517 - (g1) + tmp + x;
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