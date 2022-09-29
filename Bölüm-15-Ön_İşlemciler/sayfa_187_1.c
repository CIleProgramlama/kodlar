#include <stdio.h>
#define type flo##at
type pi_sayisi;

int main(void) {
	pi_sayisi = 3.14;
	printf("%f", pi_sayisi);
}