#include<stdio.h>

int main(int argc, char *argv[]){
    
    FILE *dosyaisaretcisi;
    
    if(argv==NULL || argc !=2){
        printf("kontrol edilecek dosya ismi gönderilmemiştir\n");
    }
    else {
        dosyaisaretcisi = fopen(argv[1], "r+");
        
        if(dosyaisaretcisi == NULL){
        printf("%s isimli dosya açılamamıştır",
        argv[1]);
        }
        else{
            printf("%s isimli dosya açılmıştır", argv[1]);
        }
    }

    fclose(dosyaisaretcisi);
    return 0;
}