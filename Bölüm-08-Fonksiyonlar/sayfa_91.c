#include <math.h>
#include <stdio.h>

void UsHesapla(int Xtaban, int Xkuvvet){
  int Xsonuc = pow(Xtaban, Xkuvvet); 
  printf("%d üzeri %d = %d \n", Xtaban, Xkuvvet, Xsonuc); //SONUÇ EKRANA YAZDIRILIYOR.
}

int main() {
  int taban, kuvvet;
  printf("Taban Giriniz: ");
  scanf("%d", &taban);
  printf("Kuvvet Giriniz: ");
  scanf("%d", &kuvvet);
  UsHesapla(taban, kuvvet);
  printf("İşlem Tamamlandı!"); 
}