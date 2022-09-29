#include <stdio.h>

enum gunler { pazartesi, sali, carsamba };

int main(void)
{
  enum gunler g1, g2, g3;

  g1 = pazartesi;
  g2 = sali;
  g3 = carsamba;

  printf("%d %d %d\n", g1, g2, g3);
  printf("%d %d %d", pazartesi, sali, carsamba);  

  return 0;
}

