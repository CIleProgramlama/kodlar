#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *kaynakdosya, *hedefdosya;
    char buf[256];
    size_t bytes;
    kaynakdosya = fopen("kaynak.txt", "rb");

    if (kaynakdosya == NULL) {
        fprintf(stderr, "Kaynak dosyası açılamadı\n");
        exit(EXIT_FAILURE);
    }

    hedefdosya = fopen("hedef.txt", "wb+");
    if (hedefdosya == NULL) {
        fprintf(stderr, "Hedef dosya açılamadı\n");
        fclose(hedefdosya);
        exit(EXIT_FAILURE);
    }

    while ((bytes = fread(buf, 1, sizeof(buf), kaynakdosya)) !=0) {
        if (fwrite(buf, 1, bytes, hedefdosya) != bytes) {
        fprintf(stderr, "Hedef dosyaya yazılırken hata ile karşılaşıldı\n");
        break;
        }
    }
    
    rewind(hedefdosya);

    while ((bytes = fread(buf, 1, sizeof(buf), hedefdosya)) !=0) {
        printf("%s", buf);
    }

    fclose(kaynakdosya);
    fclose(hedefdosya);
    return 0;
}