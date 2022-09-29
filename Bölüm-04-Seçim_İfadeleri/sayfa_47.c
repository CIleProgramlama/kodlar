#include <stdio.h>

int main(void)
{
  char harfNotu;
  printf("Harf notu giriniz giriniz: [A] [B] [C] [D] [F]\n");
  scanf("%c", &harfNotu);
  switch(harfNotu) {
  case 'A':
  printf("pekiyi");
  break;
  case 'B':
  printf("iyi");
  break;
  case 'C':
  printf("orta");
  break;
  case 'D':
  printf("orta");
  break;
  case 'F':
  printf("zayıf");
  break;
  default:
  printf("hatalı işlem");
  break;
  }
  return 0;
}