#include <stdio.h>
#include <stdlib.h>
void cikis(void);
int main ()
{
  atexit(cikis);
  printf("Program Başlatıldı!\n");
  printf("Beşten büyük bir değer giriniz!\n");
  int deger;
  scanf("%d",&deger);
  if(deger<5){
    printf("Uygun olmayan bir değer ile karşılaşıldı!\n");
    exit (EXIT_FAILURE);
  }
  else{
    printf("Girdiğiniz değer uygun olup işleme alınmıştır!\n");
  }
  return 0;
}

void cikis(void){
  printf("Çıkış yapılıyor.");
}