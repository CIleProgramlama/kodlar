#include <stdio.h>
int main(void)
{
  int x = 5;
  printf("x=%d\n",x);
  if (x == 5)
  {
    printf("x degiskenin degeri 5 sayisina esittir!\n");
  }
  x = 35;
  printf("x=%d\n",x);
  if (x != 5)
    printf("x degiskenin degeri 5 sayisina esit degildir!");
  if (x== 15)
  printf("Bu sart saglanmadigi icin bu blok calismadi.");
  return 0;
}