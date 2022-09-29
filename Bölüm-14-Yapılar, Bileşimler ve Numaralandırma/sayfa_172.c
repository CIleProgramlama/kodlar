#include <stdio.h>

enum gunler { pazartesi=1, sali, carsamba };
typedef enum gunler gunTipi;

int main(void)
{
  gunTipi gX;

  gX = carsamba;
  
  printf("%d\n", gX);

  return 0;
}
