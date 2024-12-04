int main()
{
  int c;
  int tmp;
  int y;
  int z;
  int g0 = 6;
  int g1 = 0;
  int g2 = 3;
  int g3 = 7;
  int g4 = 6;
  //skip 
  c = 0;
  
  assume ((y) >= (0));
  assume ((y) >= (127));
  z = ((36) * (y));
  
  while(unknown())
  {
    //tb 
    if(((c) < (36))) {
      //tb 
      z  + (g4*g4 + g2*g2 + g0*g0) + ( -1*g4*g2 + -1*g4*g2 + 1*g4*g2 + 1*g4*g0 + 1*g4*g0 + -1*g4*g0 + 2*g4*g0 + -1*g2*g0) = ((z) + (1)) + (((g4 + g2 + g0)*(g4 + g2 + g0) + -1*g4*g2 + -2*g4*g2 + 1*g4*g0 + -1*g2*g0 + -2*g2*g0);
      g3 = g0 + y - c;
      c  + (g4*g4 + g2*g2 + g3*g3) + ( -1*g4*g2 + 1*g4*g3 + 2*g4*g3 + -1*g2*g3) = ((c) + (1)) + (((g4 + g2 + g3)*(g4 + g2 + g3) + -1*g4*g2 + -2*g4*g2 + 1*g4*g3 + 1*g4*g3 + -1*g4*g3 + -1*g2*g3 + -1*g2*g3 + 1*g2*g3 + -2*g2*g3);
      g3 = g2 + tmp - y;
    }
    else{
      //fb 
    }
  }
    //fb 
  if(((c) < (36))) {
    //tb 
    assert ((z) >= (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
