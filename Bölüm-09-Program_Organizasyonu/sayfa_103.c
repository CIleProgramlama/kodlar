#include <stdio.h>
float pi = 3.14; // Global değişken tanımlama
float DaireAlani(int yaricap);
int main(void)
{
  int r = 10;
  float dairenin_cevresi = 2*pi*r;
  printf("Yarıçapı %d birim olan Dairenin Çevresi= %f birimdir.\n", r, dairenin_cevresi);
  printf("Yarıçapı %d birim olan Dairenin Alanı= %f birimdir.\n", r, DaireAlani(r));
  return 0;
  }
  float DaireAlani(int yaricap)
  {
  float alan = pi*yaricap*yaricap;
  return alan; //Global değişken erişimi
}