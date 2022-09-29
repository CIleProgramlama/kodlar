#include <math.h>
#include <stdio.h>
int UsHesapla(int Xtaban, int Xkuvvet);

int main() {
  int taban, kuvvet, sonuc;
  printf("Taban Giriniz: ");
  scanf("%d", &taban);
  printf("Kuvvet Giriniz: ");
  scanf("%d", &kuvvet);
  sonuc = UsHesapla(taban, kuvvet);
  printf("%d üzeri %d = %d \n", taban, kuvvet, sonuc); //SONUÇ EKRANA YAZDIRILIYOR.
  printf("İşlem Tamamlandı!");
  return 0;
}

int UsHesapla(int Xtaban, int Xkuvvet){
  int Xsonuc = pow(Xtaban, Xkuvvet); //ÜS ALMA İŞLEMİ GERÇEKLEŞTİRİLİYOR.
  return Xsonuc; //SONUÇ DÖNDÜRÜLÜYOR.
}