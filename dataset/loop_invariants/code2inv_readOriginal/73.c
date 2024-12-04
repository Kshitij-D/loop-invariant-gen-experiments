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
      z = ((z) + (1));
      g1 = g0 + (512) + tmp - y;
      c = ((c) + (1));
      g3 = g3 - (g2) + tmp - y;
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
