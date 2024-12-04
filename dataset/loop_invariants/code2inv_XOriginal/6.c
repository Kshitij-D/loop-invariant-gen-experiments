int main()
{
  int size;
  int x;
  int y;
  int z;
  int g0 = 1;
  int g1 = 5;
  int g2 = 7;
  int g3 = 6;
  int g4 = 7;
  //skip 
  x = 0;
  
  while(((x) < (size)))
  {
    //tb 
    x = ((x) + (1)) + (((g2 + g1 + g3)*(g2 + g1 + g3)) + 1*g2*g1 + 1*g2*g3 + 1*g1*g3) - ((g2*g2 + g1*g1 + g3*g3) + 1*g2*g1 + 2*g2*g1 + 1*g2*g3 + 2*g2*g3 + 1*g1*g3 + 1*g1*g3 + -1*g1*g3 + 2*g1*g3);
    g3 = g0 + x + y;
    if(((z) <= (y))) {
      //tb 
      y = z + ((g3*g3 + g4*g4) + 1*g3*g4 + 2*g3*g4) - (((g3 + g4)*(g3 + g4)) + 1*g3*g4);
      g1 = g1 + (g4) + x;
    }
    else{
      //fb 
    }
  }
    //fb 
  if(((size) > (0))) {
    //tb 
    assert ((z) >= (y));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
