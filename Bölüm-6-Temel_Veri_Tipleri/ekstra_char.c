#include <stdio.h>

int main()
{
  char degisken_ismi = 'X';
  char degisken_ismi2 = 88;

  char degisken_ismi3[] = "Metin";
  char *degisken_ismi4 = "Metin-2";

  printf("Degiskenim = %c \n", degisken_ismi);
  printf("Degiskenim = %c \n", degisken_ismi2);
  printf("Degiskenim = %d \n", degisken_ismi2);
  printf("Degiskenim = %s \n", degisken_ismi3);
  printf("Degiskenim = %s \n", degisken_ismi4);

  return 0;
}