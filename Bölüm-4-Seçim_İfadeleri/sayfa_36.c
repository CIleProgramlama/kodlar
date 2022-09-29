#include <stdio.h>
int main()
{
  int x = 5, y = 5, z = 10, sonuc;
  printf("x=%d, y=%d, z=%d\n", x, y, z);
  sonuc = (x == y) && (z > y);
  printf("(x == y) && (z > y) ifadesinin degeri: %d \n", sonuc);
  sonuc = (x == y) && (z < y);
  printf("(x == y) && (z < y) ifadesinin degeri: %d \n", sonuc);
  sonuc = (x == y) || (z < y);
  printf("(x == y) || (z < y) ifadesinin degeri: %d \n", sonuc);
  sonuc = (x != y) || (z < y);
  printf("(x != y) || (z < y) ifadesinin degeri: %d \n", sonuc);
  sonuc = !(x != y);
  printf("!(x == y) ifadesinin degeri: %d \n", sonuc);
  sonuc = !(x == y);
  printf("!(x == y) ifadesinin degeri: %d \n", sonuc);
  return 0;
}