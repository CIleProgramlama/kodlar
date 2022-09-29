#include <stdio.h>
int main()
{
    int x = 20, y = 50;
    float z = 10.5, pi = 3.14;
    printf("x=%d y=%d z=%.2f pi=%.2f\n",x,y,z,pi);
    printf("++x = %d \n", ++x);
    printf("--y = %d \n", --y);
    printf("++z = %.2f \n", ++z);
    printf("--pi = %.2f \n", --pi);
    return 0;
}