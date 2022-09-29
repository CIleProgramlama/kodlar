#include <stdio.h>
int main() {
    int x = 14;
    int y = 5;
    float z = 5.0;
    float t = 2.5;
    printf("x=%d, y=%d, z=%.2f, t=%.2f\n", x, y,z,t);
    printf("x/y=%d\n",x/y);
    printf("z/t=%.2f\n", z/t);
    printf("x/z=%.2f\n", x / z);
    return 0;
}