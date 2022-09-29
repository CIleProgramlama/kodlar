#include <stdio.h>
int main()
{
	int x, y;
	x=5, y=6;
	printf("x=%d, y=%d\n",x,y);
	if(x == y)
	{
		printf("Sonuç: %d = %d",x,y);
	}
	else if (x > y)
	{
		printf("Sonuç: %d > %d", x, y);
	}
	else
	{
		printf("Sonuç: %d < %d",x, y);
	}
	return 0;
}