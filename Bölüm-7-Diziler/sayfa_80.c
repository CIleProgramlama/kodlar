#include <stdio.h>
int main() {
  int puan_tablosu[6][5] = {{3,1,0,3,1},{0,3,3,3,3},{1,0,3,1,1},{3,0,0,0,0},{0,0,1,3,3},{1,0,1,3,0}};
  char* takimlar[5] = {"A", "B", "C", "D", "E", "F"};
  int sampiyon=0;
  int toplam_puan=0;
  for(int i=0; i<6; i++)
  {
    int temp=0;
    for(int j=0; j<5; j++){
      printf("%d ", puan_tablosu[i][j]);
      temp = temp + puan_tablosu[i][j];
  }

  if(temp>toplam_puan){
    toplam_puan = temp;
    sampiyon = i;
  }
  printf("\n");
  }
  printf("\n%s Takımı %d puan ile şampiyon olmuştur.", takimlar[sampiyon], toplam_puan);
  return 0;
}