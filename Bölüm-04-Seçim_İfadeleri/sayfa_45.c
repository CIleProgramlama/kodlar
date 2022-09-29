#include <stdio.h>
int main()
{
  int x, y, z;
  x=5, y=6, z=4;
  printf("x=%d, y=%d, z=%d\n",x ,y ,z);
  if(x >= y)
  {
    printf("Sonuç: %d >= %d\n",x, y);
    if (y>=z)
    {
      printf("Sonuç: %d >= %d\n",y, z);
    }
    else
    {
      printf("Sonuç: %d < %d\n",y, z);
    }
  }
  else
  {
    printf("Sonuç: %d < %d\n",x, y);
    if (y>=z)
    {
      printf("Sonuç: %d >= %d\n",y, z);
    }
    else
    {
      printf("Sonuç: %d < %d\n",y, z);
    }
  }
  return 0;
}