#include <stdio.h>
#define BIRLESTIR(sayi) printf("%d", (sayi ## 1) + (sayi ## 2))
int main(void)
{
	int i1, i2;
	i1 = 18;
	i2 = 12;
	BIRLESTIR(i);
	return 0;
}