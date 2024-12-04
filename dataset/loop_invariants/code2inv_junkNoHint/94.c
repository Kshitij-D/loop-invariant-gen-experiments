int main()
{
  int i;
  int j;
  int k;
  int n;
  int g0 = 3;
  int g1 = 2;
  int g2 = 0;
  int g3 = 6;
  int g4 = 9;
  //skip 
  assume ((k) >= (0));
  assume ((n) >= (0));
  i = 0;
  
  j = 0;
  
  while(((i) <= (n)))
  {
    //tb 
    i = ((i) + (1));
    g0 = 205 + (g0);
    j = ((j) + (i));
    g0 = 797;
  }
    //fb 
  assert ((((i) + (((j) + (k))))) > (((2) * (n))));
  //skip 


}
