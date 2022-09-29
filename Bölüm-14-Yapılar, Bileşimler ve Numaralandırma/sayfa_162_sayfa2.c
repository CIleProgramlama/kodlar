#include <stdio.h>
struct ogrenci {
  char adi[50]; 
  char soyadi[50]; 
  int numara; 
  float ortalama; 
} ogr;

int main(void)
{
   struct ogrenci ogr={"Adı", "Soyadı", 12345, 3.55};
   printf("Yapıda buluna öğrencinin bilgileri adı:%s, soyadı:%s, numarası:%d, ortalaması:%.2f",ogr.adi,ogr.soyadi,ogr.numara,ogr.ortalama);    
  return 0;
}
