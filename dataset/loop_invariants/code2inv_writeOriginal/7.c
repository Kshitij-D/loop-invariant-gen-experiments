int main()
{
  int tmp;
  int x;
  int y;
  int g0 = 3;
  int g1 = 3;
  int g2 = 3;
  int g3 = 9;
  int g4 = 3;
  //skip 
  assume ((x) >= (0));
  assume ((x) <= (10));
  assume ((y) <= (10));
  assume ((y) >= (0));
  while(unknown())
  {
    //tb 
    x  + (g3 + g2)^2 + ( 1*g3*g2) = ((x) + (10)) + ((g3*g3 + g2*g2) + 1*g3*g2 + 2*g3*g2);
    g3 = 588;
    y  + (g4 + g1)^2 + ( -1*g4*g1 + -2*g4*g1) = ((y) + (10)) + ((g4*g4 + g1*g1) + -1*g4*g1);
    g2 = 353;
  }
    //fb 
  if(((x) == (20))) {
    //tb 
    assert ((y) != (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
