#include <stdio.h>
#define PARAM(X) #X

int main(void)
{
	int temp = 38;
	printf("%s = %d", PARAM(temp), temp);
	return 0;
}