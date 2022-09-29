#include <stdio.h>
#include <stdlib.h>
#define sehir_sayisi 10

float * yillikOrtSicaklikHesapla(float matris[][12], int sayi,
char *sehir_isimleri[]);

int main() {
  char *il_isimleri[10] = {"Kayseri", "Nevşehir", "Yozgat", "Ankara", "İstanbul", "Kahraman Maraş", "Gazi Antep", "Bursa", "Trabzon", "Hakkâri"};
  int sayi = sehir_sayisi;
  float hava_sicakliklari[10][12]= {{-1.0, 0.5, 5.6, 10.7, 15.1, 19.3, 22.7, 22.6, 18.0, 12.4, 5.4, 0.8},
  {0.0, 1.3, 5.5, 10.4, 15.0, 18.9, 22.2, 22.1, 18.1, 12.8, 6.3, 2.0},
  {-1.3,-0.1, 3.7, 8.8, 13.4, 17.2, 20.3, 20.6, 16.6, 11.5, 5.0, 0.7},
  {0.9, 2.7, 6.7, 11.5, 16.5, 20.6, 24.2, 24.3, 19.6, 13.9, 7.3, 2.8},
  {0.2, 1.7, 5.7, 11.2, 16.0, 20.0, 23.4, 23.4, 18.9, 13.2, 7.2, 2.5},
  {5.2, 6.7, 11.0, 15.6, 20.6, 25.7, 28.9, 29.2, 25.6, 19.6, 11.8, 6.9},
  {3.9, 5.1, 9.3, 14.0, 19.3, 24.8, 28.7, 28.7, 24.2, 17.7, 10.2, 5.6},
  {5.4, 6.5, 9.0, 13.0, 18.1, 22.6, 25.1, 25.2, 20.8, 15.9, 10.7, 7.0},
  {7.7, 7.6, 9.2, 12.2, 16.4, 20.9, 23.8, 24.4, 21.1, 17.2, 12.7, 9.5},
  {-4.1,-2.6, 2.7, 8.6, 14.4, 20.5, 25.0, 25.2, 20.7, 13.6, 5.5, -1.2}};

  float *yillik_ort_sicaklik = yillikOrtSicaklikHesapla( hava_sicakliklari, sayi, il_isimleri); yillikOrtSicaklikHesapla(hava_sicakliklari, sayi, il_isimleri);
  for (int i = 0; i < sehir_sayisi; i++ ) {
    printf("*(p + %d) : %f\n", i, *(yillik_ort_sicaklik + i) );
  }
}

float *yillikOrtSicaklikHesapla(float matris[][12], int sayi, char *sehir_isimleri[]){
  float static yillik_ort_sicaklik[sehir_sayisi];
  for(int i=0; i<sayi; i++){
    float satir_toplami = 0.0;
    for(int j=0; j<12; j++){
      satir_toplami = satir_toplami + matris[i][j];
    }
  satir_toplami = satir_toplami/12;
  yillik_ort_sicaklik[i] = satir_toplami;
  }
  float *ptr;
  ptr = yillik_ort_sicaklik;
  return ptr;
}
