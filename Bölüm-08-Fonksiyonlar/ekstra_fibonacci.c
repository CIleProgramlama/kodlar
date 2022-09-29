#include <stdio.h>

unsigned long long Fibonacci(int sayi)
{
    if(sayi==1)
        return 1;
    else if(sayi == 0)
        return 0;
    else
    {
        return Fibonacci(sayi-1) + Fibonacci(sayi-2);
    }
}

int main() {
    int sayi;
    unsigned long long fibonacci;
    printf("Fibonacci kacinci terim?\n");
    scanf("%d", &sayi);
    fibonacci = Fibonacci(sayi);
    
    printf("%d. fibonacci terimi= %llu", sayi, fibonacci);
    return 0;
}