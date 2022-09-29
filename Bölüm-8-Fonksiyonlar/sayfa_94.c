#include <stdio.h>
#include <stdlib.h>
void cikis(void);
int main () {
  atexit(cikis);
  printf("Program Başlatıldı!\n");
  exit (EXIT_SUCCESS); //Bu satır yerine “exit(0);” satırı da aynı işlemi yapar.
  printf ( "Üst Satırda Çıkış Sinyali Verildi.\n ");
  return 0;
}

void cikis(void){
  printf("Çıkış yapılıyor.");
}