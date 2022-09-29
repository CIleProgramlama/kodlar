#include <math.h>
#include <stdio.h>
void UsHesapla(int Xtaban, int Xkuvvet);
int main() {
  int taban, kuvvet;
  printf("Taban Giriniz: ");
  scanf("%d", &taban);
  printf("Kuvvet Giriniz: ");
  scanf("%d", &kuvvet);
  UsHesapla(taban, kuvvet);
  printf("İşlem Tamamlandı!");
  return 0;
}

UsHesapla(int Xtaban, int Xkuvvet){
  int Xsonuc = pow(Xtaban, Xkuvvet); //ÜS ALMA İŞLEMİ GERÇEKLEŞTİRİLİYOR
  printf("%d üzeri %d = %d \n", Xtaban, Xkuvvet,Xsonuc); //SONUÇ EKRANA YAZDIRILIYOR.
}