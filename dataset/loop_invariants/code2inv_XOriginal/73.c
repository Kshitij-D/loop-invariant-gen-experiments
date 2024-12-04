int main()
{
  int c;
  int tmp;
  int y;
  int z;
  int g0 = 4;
  int g1 = 7;
  int g2 = 6;
  int g3 = 5;
  int g4 = 3;
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
      z = ((z) + (1)) + ((g0*g0 + g4*g4) + 1*g0*g4 + 1*g0*g4 + -1*g0*g4 + 2*g0*g4) - (((g0 + g4)*(g0 + g4)) + 1*g0*g4);
      g1 = g0 + (512) + z;
      c = ((c) + (1)) + ((g4*g4 + g1*g1 + g2*g2) + -1*g4*g1 + -1*g4*g2 + -1*g4*g2 + 1*g4*g2 + 1*g1*g2 + 2*g1*g2) - (((g4 + g1 + g2)*(g4 + g1 + g2)) + -1*g4*g1 + -2*g4*g1 + -1*g4*g2 + -2*g4*g2 + 1*g1*g2);
      g3 = g3 - (g2) + c + y;
    }
    else{
      //fb 
    }
  }
    //fb 
  if(((z) < (0))) {
    //tb 
    if(((z) >= (4608))) {
      //tb 
      assert ((c) >= (36));
    }
    else{
      //fb 
    }
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
