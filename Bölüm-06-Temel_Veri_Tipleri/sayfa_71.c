#include<stdio.h>
int main(){
	int sayi = 2018;
	void *isaretci = &sayi;
	printf("%d", *(int *)isaretci);
	return 0;
}