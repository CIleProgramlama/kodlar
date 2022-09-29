#include <stdio.h>

int main(void){

    int vizeNotu = 70;
    int finalNotu= 80;
    char ogrenci[] = "Ahmet";
    char ders[] = "C Programlama Dili Dersi";
    char bufferParam[200];
    sprintf(bufferParam, "%s isimli ogrenci %s vize notu %d
    final notu %d",ogrenci,ders,vizeNotu,finalNotu);
    printf("Olusturulan karakter dizisi: %s", bufferParam);
    return 0;
}