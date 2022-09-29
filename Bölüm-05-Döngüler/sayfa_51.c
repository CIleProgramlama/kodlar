#include <stdio.h>

int main()
{
  int sayi;
  long int sayi_faktoriyel;
  printf("Bir tamsayı giriniz: ");
  scanf("%d",&sayi);
  sayi_faktoriyel = 1;
  while (sayi > 0)
  {
    sayi_faktoriyel = sayi_faktoriyel*sayi;
    printf("Anlık hesaplanan faktöriyel=%ld, anlık çarpım sayısı:=%d\n",sayi_faktoriyel,sayi);
    sayi--;
  }
  printf("Hesaplan faktöriyel = %ld", sayi_faktoriyel);
  return 0;
}