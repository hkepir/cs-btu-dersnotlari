#include <stdio.h>
#include <string.h>

int main() {
    char kelime1[100], kelime2[100];
    char birlesik_kelime[200];
    char kopyalanan_kelime[200];
    char ters_kelime1[100], ters_kelime2[100];


    printf("Birinci kelimeyi girin: ");
    gets(kelime1);
    printf("Ikinci kelimeyi girin: ");
    gets(kelime2);


    printf("Birinci kelimenin uzunlugu: %d\n", strlen(kelime1));
    printf("Ikinci kelimenin uzunlugu: %d\n", strlen(kelime2));


    strcpy(birlesik_kelime, kelime1); // Birinci kelimeyi kopyala
    strcat(birlesik_kelime, kelime2); // Ýkinci kelimeyi ekle
    printf("Birlestirilmis kelime: %s\n", birlesik_kelime);


    printf("Alfabetik olarak once gelen kelime: ");
    if (strcmp(kelime1, kelime2) < 0) {
        printf("%s\n", kelime1);
    } else if (strcmp(kelime1, kelime2) > 0) {
        printf("%s\n", kelime2);
    } else {
        printf("Iki kelime aynýdýr.\n");
    }


    strcpy(ters_kelime1, kelime1);
    strcpy(ters_kelime2, kelime2);
    strrev(ters_kelime1);
    strrev(ters_kelime2);
    printf("Birinci kelimenin tersi: %s\n", ters_kelime1);
    printf("Ikinci kelimenin tersi: %s\n", ters_kelime2);


    strcpy(kopyalanan_kelime, birlesik_kelime);
    printf("Kopyalanmis kelime: %s\n", kopyalanan_kelime);

    return 0;
}
