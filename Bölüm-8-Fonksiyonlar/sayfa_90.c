#include <stdio.h>
#include "hesapla.h"
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