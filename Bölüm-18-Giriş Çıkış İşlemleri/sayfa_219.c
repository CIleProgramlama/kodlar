#include <stdio.h>
int main(){

    char adi[100];
    char soyadi[100];
    float boy;
    int kilo;
    char veri[] = "Adi Soyadi 1.76 86";
    sscanf(veri, "%s %s %f %d", adi, soyadi, &boy, &kilo);
    printf("Sscanf ile atanacak veri:%s\nAtama sonrasi\nAdi:%s\nSoyadi:%s\nBoy:%.2f\nKilo:%d",veri, adi, soyadi, boy, kilo);
    return 0;
}