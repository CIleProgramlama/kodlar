#include<stdio.h>
#pragma GCC poison printf
int main() {
	printf("Ekrana yazdırılmayacak!!!.");
	return 0;
}