float DaireAlani(int yaricap);
int main(void)
{
  int r = 10;
  float dairenin_cevresi = 2*PI*r;
  YAZDIR("Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\
  n", r, dairenin_cevresi);
  YAZDIR("Yarıçapı %d birim olan Dairenin Alanı= %f birimdir.\n",
  r, DaireAlani(r));
  return 0;
}

float DaireAlani(int yaricap)
{
  float alan = PI*yaricap*yaricap;
  return alan; //Global değişken erişimi
}