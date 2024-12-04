int main()
{
  int lock;
  int tmp;
  int x;
  int y;
  int g0 = 8;
  int g1 = 3;
  int g2 = 2;
  int g3 = 7;
  int g4 = 5;
  //skip 
  x = y;
  
  lock = 1;
  
  while(((x) != (y)))
  {
    //tb 
    if(unknown()) {
      //tb 
      lock = 1;
      g3 = 445 + (35);
      x = y;
      g1 = g4 - (303);
    }
    else{
      //fb 
      lock = 0;
      g0 = g3 - (403);
      x = y;
      g0 = 73;
      y = ((y) + (1));
      g4 = 587 + (g3);
    }
  }
    //fb 
  assert ((lock) == (1));
  //skip 


}
