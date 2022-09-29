#include <stdio.h>
#include <string.h>

union ogreci {
  char adi[50];
  int numarasi;
  float ortalamasi;
  
} og;

int main(void)
{
  strcpy(og.adi,"Murat");
  og.numarasi=123;
  og.ortalamasi=3.6;
  printf("%s %d %.2f\n", og.adi, og.numarasi, og.ortalamasi);
  
  strcpy(og.adi,"Murat");
  og.ortalamasi=3.6;
  og.numarasi=123;
  printf("%s %d %.2f\n", og.adi, og.numarasi, og.ortalamasi);
  
  og.numarasi=123;
  og.ortalamasi=3.6;
  strcpy(og.adi,"Murat");
  printf("%s %d %.2f\n", og.adi, og.numarasi, og.ortalamasi);

  return 0;
}
