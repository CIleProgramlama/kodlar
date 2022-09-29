#include <stdio.h>

struct ogrenci {
  char adi[50]; 
  char soyadi[50]; 
  int numara; 
  float ortalama; 
} ogr;

int main(void)
{
  printf("Öğrencinin adını giriniz:\n");
  scanf("%s",ogr.adi);
  
  printf("Öğrencinin soy adını giriniz:\n");
  scanf("%s",ogr.soyadi);
  printf("Öğrencinin numarasını giriniz:\n");
  scanf("%d",&ogr.numara);
  printf("Öğrencinin ortalamasını giriniz:\n");
  scanf("%f",&ogr.ortalama);
  
  printf("Yapıda buluna öğrencinin bilgileri adı:%s, soyadı:%s, numarası:%d, ortalaması:%.2f",ogr.adi,ogr.soyadi,ogr.numara,ogr.ortalama);    
  return 0;
}
