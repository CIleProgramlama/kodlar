#include <stdio.h>

int main()
{
	char adi[100];
	char soyadi[100];
	float boy, kilo;
	printf("Adinizi giriniz:");
	scanf("%s", adi);

	printf("Soyadinizi giriniz:");
	scanf("%s", soyadi);

	printf("Buyunuzu metre cinsinden giriniz:");
	scanf("%f", &boy);

	printf("Kilonuzu giriniz:");
	scanf("%f", &kilo);

	float boyKiloOrani = boy * 100 / kilo;
	printf("Adi:%s,Soyadi:%s\nBoy:%.2f  Kilo:%.2f\nBoy(cm)/Kilo=%.2f",adi,soyadi,boy,kilo,boyKiloOrani);
	return 0;
}

