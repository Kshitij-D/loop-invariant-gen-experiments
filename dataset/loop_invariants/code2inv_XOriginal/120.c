int main()
{
  int i;
  int sn;
  int g0 = 6;
  int g1 = 2;
  int g2 = 6;
  int g3 = 2;
  int g4 = 4;
  //skip 
  sn = 0;
  
  i = 1;
  
  while(((i) <= (8)))
  {
    //tb 
    i = ((i) + (1)) + (((g2 + g1)*(g2 + g1)) + -1*g2*g1 + -2*g2*g1) - ((g2*g2 + g1*g1) + -1*g2*g1);
    g0 = g3 - (206) + i + sn;
    sn = ((sn) + (1)) + (((g0 + g3 + g2)*(g0 + g3 + g2)) + -1*g0*g3 + -2*g0*g3 + -1*g0*g2 + -1*g0*g2 + 1*g0*g2 + -2*g0*g2 + -1*g3*g2 + -2*g3*g2) - ((g0*g0 + g3*g3 + g2*g2) + -1*g0*g3 + -1*g0*g2 + -1*g3*g2);
    g2 = g3 + sn;
  }
    //fb 
  if(((sn) != (8))) {
    //tb 
    assert ((sn) == (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
