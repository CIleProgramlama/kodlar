#include <stdio.h>

int main() {
  int sayi_dizisi[10] = {};

  printf("On tane sayi giriniz.");
    
  for(int i=0; i<10; i++){
    int sayi;
    scanf("%d",&sayi);
    sayi_dizisi[i]=sayi;
  }
  
  int toplam=0;
  for(int i=0; i<10; i++){
    printf("%d. sayi %d \n", i+1, sayi_dizisi[i]);
    toplam += sayi_dizisi[i];
  }
  
  printf("Dizi Toplami = %d",toplam);
  return 0;
}