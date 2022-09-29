#include<stdio.h>

int main() {
  int i, j, k;
  int ucboyutlu_dizi[5][3][3] =
  {
    {
    {3, 3, 4},
    {7, 5, 6},
    {2, 8, 9}
    },
  {
    {1, 2, 3},
    {8, 5, 4},
    {0, 3, 4}
    },
  {
    {6, 9, 7},
    {1, 2, 3},
    {4, 4, 5}
    },
  {
    {5, 6, 7},
    {8, 5, 9},
    {1, 4, 9}
    },
  {
    {7, 5, 0},
    {4, 2, 1},
    {1, 4, 5}
    },
  };
  
  for(i=0;i<5;i++){
    for(j=0;j<3;j++){
      for(k=0;k<3;k++){
        printf("%d\t", ucboyutlu_dizi[i][j][k]);
      }
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}