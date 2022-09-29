#include <stdio.h>
#include <string.h>

int main() {
    char buffer[256];
    int satirnumarasi = 1;
    FILE *kaynakdosyasi, *sifir, *bir, *iki;
    
    if((kaynakdosyasi = fopen("kaynak.txt","rb")) == NULL){
        perror("okuma dosyası açma hatası");return 0;
    }

    if((sifir = fopen("0.txt","wb")) == NULL){
        perror("yazma dosyası_sifir açma hatası");return 0;
    }

    if((bir = fopen("1.txt","wb")) == NULL){
        perror("yazma dosyası_sifir açma hatası");return 0;
    
    }

    if((iki = fopen("2.txt","wb")) == NULL){
        perror("yazma dosyası_sifir açma hatası");return 0;
    }


    while (fgets(buffer, sizeof(buffer), kaynakdosyasi) != NULL) {
        if (satirnumarasi % 3 == 0) fputs(buffer, sifir);
        else if(satirnumarasi %3 == 1) fputs(buffer, bir);
        else fputs(buffer,iki);
        
        if (strchr(buffer, '\n')){
        satirnumarasi++;
        }
    }

    fclose(kaynakdosyasi);
    fclose(sifir);
    fclose(bir);
    fclose(iki);
    return 0;
}