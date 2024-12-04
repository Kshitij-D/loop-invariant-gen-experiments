int main()
{
  int i;
  int j;
  int g0 = 3;
  int g1 = 0;
  int g2 = 5;
  int g3 = 3;
  int g4 = 0;
  //skip 
  i = 1;
  
  j = 10;
  
  while(((j) >= (i)))
  {
    //tb 
    i = ((i) + (2));
    g4 = g4 + j + i;
    j = ((j) - (1));
    g3 = g0 + j + i;
  }
    //fb 
  assert ((j) == (6));
  //skip 


}
