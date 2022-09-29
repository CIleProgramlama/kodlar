#include<stdio.h>
#include<stdlib.h>

int main(void){

    FILE *okumadosyasi, *yazmadosyasi;
    int karakter;
    
    if((okumadosyasi = fopen("oku.txt","rb")) == NULL){
        perror("okuma dosyası açma hatası");return 0;
    }

    if((yazmadosyasi = fopen("yaz.txt","wb")) == NULL){
        perror("yazma dosyası açma hatası");return 0;
    }

    while ((karakter = getc(okumadosyasi)) != EOF){
        putc(karakter, yazmadosyasi);
    }

    fclose(okumadosyasi);
    fclose(yazmadosyasi);
    return 0;
}