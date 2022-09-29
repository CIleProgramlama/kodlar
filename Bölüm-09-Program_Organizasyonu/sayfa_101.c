#include <math.h>
#include <stdio.h>
UsHesapla(int Xtaban, int Xkuvvet);
int main() {
  int taban, kuvvet; // Bu değişkenlere sadece main() fonksiyonu içerisinde erişilebilir.
  printf("Taban Giriniz: ");
  scanf("%d", &taban);
  printf("Kuvvet Giriniz: ");
  scanf("%d", &kuvvet);
  UsHesapla(taban, kuvvet);
  printf("İşlem Tamamlandı!");
  return 0;
}
UsHesapla(int Xtaban, int Xkuvvet){
  int Xsonuc; //Bu değişkene sadece UsHesapla() fonksiyonu içerisinde erişilebilir.
  Xsonuc = pow(Xtaban, Xkuvvet);
  printf("%d üzeri %d = %d \n", Xtaban, Xkuvvet, Xsonuc);
}