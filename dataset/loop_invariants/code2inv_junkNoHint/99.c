int main()
{
  int n;
  int x;
  int y;
  int g0 = 7;
  int g1 = 2;
  int g2 = 0;
  int g3 = 2;
  int g4 = 0;
  //skip 
  assume ((n) >= (0));
  x = n;
  
  y = 0;
  
  while(((x) > (0)))
  {
    //tb 
    y = ((y) + (1));
    g0 = g3 + (64);
    x = ((x) - (1));
    g1 = g2;
  }
    //fb 
  assert ((n) == (((x) + (y))));
  //skip 


}
