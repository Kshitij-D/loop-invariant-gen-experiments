int main()
{
  int i;
  int n;
  int tmp;
  int x;
  int y;
  int g0 = 8;
  int g1 = 8;
  int g2 = 5;
  int g3 = 3;
  int g4 = 3;
  //skip 
  assume ((n) >= (0));
  i = 0;
  
  x = 0;
  
  y = 0;
  
  while(((i) < (n)))
  {
    //tb 
    i = ((i) + (1)) + ((g0*g0 + g3*g3 + g1*g1) + -1*g0*g3 + -1*g0*g1 + -1*g3*g1) - (((g0 + g3 + g1)*(g0 + g3 + g1)) + -1*g0*g3 + -2*g0*g3 + -1*g0*g1 + -2*g0*g1 + -1*g3*g1 + -2*g3*g1);
    g2 = g4 - (g2) + i - x;
    if(unknown()) {
      //tb 
      x = ((x) + (1)) + ((g3*g3 + g0*g0 + g1*g1) + -1*g3*g0 + 1*g3*g1 + 2*g3*g1 + -1*g0*g1) - (((g3 + g0 + g1)*(g3 + g0 + g1)) + -1*g3*g0 + -2*g3*g0 + 1*g3*g1 + -1*g0*g1 + -2*g0*g1);
      g1 = g3 + (g1) + tmp + x;
      y = ((y) + (2)) + (((g0 + g3 + g2)*(g0 + g3 + g2)) + 1*g0*g3 + -1*g0*g2 + -1*g0*g2 + 1*g0*g2 + -2*g0*g2 + 1*g3*g2) - ((g0*g0 + g3*g3 + g2*g2) + 1*g0*g3 + 2*g0*g3 + -1*g0*g2 + 1*g3*g2 + 2*g3*g2);
      g2 = 918 + tmp + i;
    }
    else{
      //fb 
      x = ((x) + (2));
      g1 = 607 + (185);
      y = ((y) + (1));
      g2 = 773;
    }
  }
    //fb 
  assert ((((3) * (n))) == (((x) + (y))));
  //skip 


}
