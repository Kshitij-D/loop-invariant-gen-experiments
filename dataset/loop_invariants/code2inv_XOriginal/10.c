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
    x = ((x) + (2)) + (((g2 + g4 + g3)*(g2 + g4 + g3)) + -1*g2*g4 + -2*g2*g4 + 1*g2*g3 + 1*g2*g3 + -1*g2*g3 + -1*g4*g3 + -2*g4*g3) - ((g2*g2 + g4*g4 + g3*g3) + -1*g2*g4 + 1*g2*g3 + 2*g2*g3 + -1*g4*g3);
    g2 = 520 - (69) + y + x;
    y = ((y) + (2)) + ((g2*g2 + g3*g3 + g4*g4) + 1*g2*g3 + 2*g2*g3 + -1*g2*g4 + 1*g3*g4 + 2*g3*g4) - (((g2 + g3 + g4)*(g2 + g3 + g4)) + 1*g2*g3 + -1*g2*g4 + -2*g2*g4 + 1*g3*g4);
    g1 = g0 - (g2) + x - y;
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
