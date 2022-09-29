#include <stdio.h>
unsigned long long int FaktoriyelHesapla(int sayi);
int main() {
  int n;
  unsigned long long int faktoriyel;
  printf("Faktöriyeli hesaplanacak sayı giriniz: ");
  scanf("%d", &n);
  faktoriyel = FaktoriyelHesapla(n);
  printf("%d sayısının faktöriyeli = %llu", n, faktoriyel);
  return 0;
}

unsigned long long FaktoriyelHesapla(int sayi) {
   if (sayi <= 1) {
     return 1;
   }
   else {
     return (sayi * FaktoriyelHesapla(sayi - 1)); //özyinelemenin yapıldığı kısım
   }
}