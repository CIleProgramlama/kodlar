#include <stdio.h>
#include <math.h>

int UsHesapla(int Xtaban, int Xkuvvet){
  int Xsonuc = pow(Xtaban, Xkuvvet); //ÜS ALMA İŞLEMİ GERÇEKLEŞTİRİLİYOR
  printf("%d üzeri %d = %d \n", Xtaban, Xkuvvet, Xsonuc); //SONUÇ EKRANA YAZDIRILIYOR.
}