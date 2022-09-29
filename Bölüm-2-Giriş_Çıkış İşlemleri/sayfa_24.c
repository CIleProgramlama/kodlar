#include <stdio.h>

int main()
{
    int sayi1, sayi2;
    printf("İstenilen tam sayılardan birinci sayının hex değerini giriniz: ");
    scanf("%x", &sayi1);
    printf("\nGirilen sayının tam sayı değeri: %d ", sayi1);
    printf("\nİstenilen tam sayılardan ikinci sayının hex değerini giriniz: ");
    scanf("%x", &sayi2);
    printf("\nGirilen sayının tam sayı değeri: %d ", sayi2);
    printf("\n Girilen iki sayının hex toplami: 0x%x \n Girilen sayıların tam sayı toplamı: %d",sayi1+sayi2, sayi1+sayi2);
    return 0;
}
