#include<stdio.h>
void test() ;
#pragma startup test
#pragma exit test

void main(){
	printf("Burası main() fonksiyonu!\n");
}

void test(){
	printf("Burası test fonksiyonu");
}