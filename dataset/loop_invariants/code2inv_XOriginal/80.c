int main()
{
  int i;
  int tmp;
  int x;
  int y;
  int g0 = 1;
  int g1 = 6;
  int g2 = 5;
  int g3 = 1;
  int g4 = 2;
  //skip 
  i = 0;
  
  assume ((x) >= (0));
  assume ((y) >= (0));
  assume ((x) >= (y));
  while(unknown())
  {
    //tb 
    if(((i) < (y))) {
      //tb 
      i  + (g0 + g2 + g1)^2 + ( -1*g0*g2 + -2*g0*g2 + -1*g0*g1 + -2*g0*g1 + -1*g2*g1 + -2*g2*g1) = ((i) + (1)) + ((g0*g0 + g2*g2 + g1*g1) + -1*g0*g2 + -1*g0*g2 + 1*g0*g2 + -1*g0*g1 + -1*g2*g1);
      g1 = g2 - (g4) + tmp - y;
    }
    else{
      //fb 
    }
  }
    //fb 
  if(((i) < (y))) {
    //tb 
    assert ((i) < (x));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
