#include <stdio.h>

void DegismeyenGosterim()
{
    int a=1;
    printf("a=%d değeri değişmez.\n",a);
    a=a+1;
}

void DegisenGosterim()
{
    static int b=10;
    printf("b=%d değeri değişir.\n",b);
    b=b+1;
}

int main(void){
    int adet;
    
    for (adet=0;adet <=3;adet++){
        DegismeyenGosterim();
    }
    
    for (adet=0;adet <=3;adet++){
        DegisenGosterim();
    }
    return 0;
}