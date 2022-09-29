#include <stdio.h>

int main(void)
{
  int x=1; // başlangıç değeri
  while (x<=10) { //bitiş kontrol şartı
    printf("%d\n", x);
    x++; // döngü kontrol değerini artırma
  }
  return 0;
}