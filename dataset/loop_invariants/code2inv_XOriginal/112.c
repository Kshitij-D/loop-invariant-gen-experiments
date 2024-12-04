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
    i = ((i) + (1)) + ((g1*g1 + g2*g2) + 1*g1*g2 + 2*g1*g2) - (((g1 + g2)*(g1 + g2)) + 1*g1*g2);
    g4 = g3 + sn - n;
    sn = ((sn) + (1)) + ((g2*g2 + g4*g4 + g1*g1) + 1*g2*g4 + 2*g2*g4 + -1*g2*g1 + 1*g4*g1 + 2*g4*g1) - (((g2 + g4 + g1)*(g2 + g4 + g1)) + 1*g2*g4 + -1*g2*g1 + -2*g2*g1 + 1*g4*g1);
    g2 = 639 + sn - i;
  }
    //fb 
  if(((sn) != (n))) {
    //tb 
    assert ((sn) == (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
