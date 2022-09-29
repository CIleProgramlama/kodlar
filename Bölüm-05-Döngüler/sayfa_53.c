#include <stdio.h>

int main()
  {
  int sayi = 0;
  // döngü en az bir kez çalışır
  do
  {
    printf("bir sayı giriniz: ");
    scanf("%d", &sayi);
    if (sayi <10)
    {
      printf("Girilen sayı 10'dan küçük dongu tekrar çalışır.\n");
    }
    else
    {
    printf("Girilen sayı 10'dan küçük değil dongu sonlanır.\n");
    }
  }

  while(sayi <10);
    printf("Girilen son sayı:%d",sayi);
  return 0;
}