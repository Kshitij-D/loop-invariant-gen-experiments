int main()
{
  int tmp;
  int x;
  int y;
  int g0 = 3;
  int g1 = 3;
  int g2 = 3;
  int g3 = 9;
  int g4 = 3;
  //skip 
  assume ((x) >= (0));
  assume ((x) <= (10));
  assume ((y) <= (10));
  assume ((y) >= (0));
  while(unknown())
  {
    //tb 
    x = ((x) + (10));
    g3 = 588 + tmp - x;
    y = ((y) + (10));
    g2 = 353 + x - tmp;
  }
    //fb 
  if(((x) == (20))) {
    //tb 
    assert ((y) != (0));
  }
  else{
    //fb 
  }
  //skip 
  //skip 


}
