#include <stdio.h>

int main() {

	int x = 11;
	int y = 0;

	printf("Ornek 1  =  operatoru, oncesi y=%d, x=%d\n", y, x);
	y = x;
	printf("y = x;\n");
	printf("sonrasi y = %d\n\n", y);

	printf("Ornek 2  +=  operatoru, oncesi y=%d, x=%d\n", y, x);
	y += x;
	printf("y += x;\n");
	printf("sonrasi y = %d\n\n", y);

	printf("Ornek 3  -=  operatoru, oncesi y=%d, x=%d\n", y, x);
	y -= x;
	printf("y -= x;\n");
	printf("sonrasi y = %d\n\n", y);

	printf("Ornek 4  *=  operatoru, oncesi y=%d, x=%d\n", y, x);
	y *= x;
	printf("y *= x;\n");
	printf("sonrasi y = %d\n\n", y);

	printf("Ornek 5  /=  operatoru, oncesi y=%d, x=%d\n", y, x);
	y /= x;
	printf("y /= x;\n");
	printf("sonrasi y = %d\n\n", y);

	y = 200;
	//printf("Ornek 6  \%=  operatoru");
	printf("Ornek 6  %s  operatoru, oncesi y=%d, x=%d\n","%=", y, x);
	y %= x;
	printf("y %s x;\n","%=");
	printf("sonrasi y = %d\n\n", y);
	return 0;
}