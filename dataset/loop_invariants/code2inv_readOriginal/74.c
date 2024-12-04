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
      z = ((z) + (1));
      g3 = g0 + c + y;
      c = ((c) + (1));
      g3 = g2 + tmp - c;
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
