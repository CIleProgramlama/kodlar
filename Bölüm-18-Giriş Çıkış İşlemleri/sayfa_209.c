#include<stdio.h>

int main(int argc, char *argv[]){
    
    FILE *personelkayitdosyasi;
    char personeladi[30];
    int personelsicilno;
    
    personelkayitdosyasi = fopen("personel.txt","w+");
    
    fprintf(personelkayitdosyasi, "%s %d", "haydar berk",60100);
    
    rewind(personelkayitdosyasi); // görevi daha sonra açıklanacaktır.
    
    fscanf(personelkayitdosyasi, "%d", &personeladi);
    fscanf(personelkayitdosyasi, "%s", personelsicilno);

    fclose(personelkayitdosyasi);
    printf("personel adi: %s\n, personel sicilno:%d", personeladi,personelsicilno);
    
    return 0;
}