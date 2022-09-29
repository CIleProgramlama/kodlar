#include <stdio.h>

int main() {
  char karakter = 'A';
  char metin[] = "Bu bir metin atamasıdır!";
  char *metin2 = "Bu metin ataması işaretçi (pointer) ile gerçekleştirilmiştir.";
  char metin3[80] = "Metnin boyutu belirlendi!";
  char metin4[] = {'M', 'e', 't', 'i', 'n', '4','\0'};
  printf("Saklanan karakter \"%c\" karakteridir. \n", karakter);
  printf("Saklanan ilk metin \"%s\" metnidir. \n", metin);
  printf("Saklanan ikinci metin \"%s\" metnidir. \n", metin2);
  printf("Saklanan üçüncü metin \"%s\" metnidir. \n", metin3);
  printf("Saklanan son metin \"%s\" metnidir. \n", metin4);
  return 0;
}