#include <stdio.h>
int main(void)
{
	int sayi, x;
	int carpim=1;
	printf("Carpım işlem için bir sayı giriniz?\n");
	scanf("%d",&sayi);
	for (x=sayi; x>0; x=x-3)
	{
		carpim*=x;
		printf("Carpım=%d, çarpan sayaç degeri=%d\n",carpim,x);
	}
	printf("Sonuç=%d",carpim);
	return 0;
}