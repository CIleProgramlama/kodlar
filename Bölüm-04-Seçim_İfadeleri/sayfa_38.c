#include <stdio.h>
int main()
{
	int x = 2, y = 2, z = 3;
	printf("%d == %d karsilastirma sonucu: %d \n", x, y, x == y); // true
	printf("%d == %d karsilastirma sonucu: %d \n", x, z, x == z); // false
	printf("%d > %d karsilastirma sonucu: %d \n", x, y, x > y); //false
	printf("%d > %d karsilastirma sonucu: %d \n", x, z, x > z); //false
	printf("%d < %d karsilastirma sonucu: %d \n", x, y, x < y); //false
	printf("%d < %d karsilastirma sonucu: %d \n", x, z, x < z); //true
	printf("%d != %d karsilastirma sonucu: %d \n", x, y, x != y); //false
	printf("%d != %d karsilastirma sonucu: %d \n", x, z, x != z); //true
	printf("%d >= %d karsilastirma sonucu: %d \n", x, y, x >= y); //true
	printf("%d >= %d karsilastirma sonucu: %d \n", x, z, x >= z); //false
	printf("%d <= %d karsilastirma sonucu: %d \n", x, y, x <= y); //true
	printf("%d <= %d karsilastirma sonucu: %d \n", x, z, x <= z); //true
	return 0;
}