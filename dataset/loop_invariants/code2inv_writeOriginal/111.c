int main()
{
  int i;
  int n;
  int sn;
  int g0 = 3;
  int g1 = 2;
  int g2 = 3;
  int g3 = 2;
  int g4 = 6;
  //skip 
  sn = 0;
  
  i = 1;
  
  while(((i) <= (n)))
  {
    //tb 
    i = ((i) + (1)) + (((g3 + g0)*(g3 + g0)) + -1*g3*g0 + -2*g3*g0) - ((g3*g3 + g0*g0) + -1*g3*g0 + -1*g3*g0 + 1*g3*g0);
    g4 = g3;
    sn = ((sn) + (1)) + ((g2*g2 + g4*g4) + -1*g2*g4) - (((g2 + g4)*(g2 + g4)) + -1*g2*g4 + -2*g2*g4);
    g2 = 639;
  }
    //fb 
  if(((sn) != (0))) {
    //tb 
    assert ((sn) == (n));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
