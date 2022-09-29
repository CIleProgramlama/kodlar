#include <stdio.h>

struct ogreciStruct {
  char adi[50];
  int numarasi;
  float ortalamasi;
} ogyapi;

union ogreciUnion {
  char adi[50];
  int numarasi;
  float ortalamasi;
} ogunion;

int main(void)
{
  
  printf("yapının kapladığı alan (size of struct):%ld\n",sizeof(ogyapi));
  printf("bileşimin kapladığı alan (size of union):%ld\n",sizeof(ogunion));

  return 0;
} 
