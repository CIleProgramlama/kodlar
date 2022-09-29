#include <stdio.h>
int main() {
    int y = 6;
    int x = 0;
    printf("x=%d, y=%d\n", x, y);
    x = (y + 5);
    /* y değerine 5 eklenenerek x değişkenine atanır */
    printf("x=%d\n", x);
    x++;
    /* x değişkenin değeri 1 artırlır */
    printf("x=%d\n", x);
    x = y = 0;
    /* x ve y değişkenlerine sıfır atanır */
    printf("x=%d, y=%d\n", x, y);
    return 0;
}