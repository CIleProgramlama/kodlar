#include <stdio.h>
int main(void)
{
  int x, y;
  x = 5;
  y = 6;
  printf("x=%d, y=%d\n",x,y);
  if (x==y)
  {
    printf("x ve y değişkenlerinin değerleri birbirine eşittir!");
  }
  else
  {
    printf("x ve y değişkenlerin değerleri birbirine eşit değildir!");
  }
  return 0;
}