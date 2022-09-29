#include <math.h>
#include <stdio.h>
int main() {
  int taban, kuvvet, sonuc;
  printf("Taban Giriniz: "); //ÜSSÜ ALINACAK SAYININ GİRİLMESİ BEKLENİYOR
  scanf("%d", &taban); //ÜSSÜ ALINACAK SAYI DEĞİŞKENE ATANDI.
  printf("Kuvvet Giriniz: "); //ÜSSÜN GİRİLMESİ BEKLENİYOR.
  scanf("%d", &kuvvet); //ÜS DEĞİŞKENE ATANDI.
  sonuc = pow(taban, kuvvet); //ÜS ALMA İŞLEMİ GERÇEKLEŞTİRİLİYOR
  printf("%d üzeri %d = %d", taban, kuvvet, sonuc); //SONUÇ EKRANA YAZDIRILIYOR.
  return 0;
}