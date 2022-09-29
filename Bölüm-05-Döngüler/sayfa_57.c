#include <stdio.h>

int main(void)
{
  int sayi, x;
  int asalmi=0;
  int j;
  printf("Asal sayıların bulunması için bir sayı giriniz?\n");
  scanf("%d",&sayi);
  for (x=2; x <=sayi;x++)
  {
    asalmi=0;
    for (j=2; j < x;j++)
    {
      if (x%j==0)
      {
        asalmi=1;
      }
    }
    if (asalmi==0)
    {
      printf("%d sayısı asal sayıdır.\n",x);
    }
    else
    {
      printf("%d sayısı asal sayı değildir.\n",x);
    }
  }
  return 0;
}