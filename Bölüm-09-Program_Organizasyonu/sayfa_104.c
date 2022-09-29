#include <stdio.h>
int main(void) { //ana (main) fonksiyon bloğu başlangıç
  int temp = 1;
  printf("\nDeneme:1 Değer: %d", temp);
  { //Yeni blok başlangıç
  int temp = 50;
  printf("\nDeneme:2 Değer:%d", temp);
  } //Yeni blok bitiş
  if(temp == 1){ //birinci if bloğu başlangıç
  temp +=5;
  } //birinci if bloğu bitiş
  printf("\nDeneme:3 Değer:%d", temp);
  if(temp>=5){ //ikinci if bloğu başlangıç
  int temp = 45;
  printf("\nDeneme:4 Değer:%d", temp);
  } //ikinci if bloğu bitiş
  printf("\nDeneme:5 Değer:%d", temp);
  return 0;
} //ana (main) fonksiyon bloğu bitiş