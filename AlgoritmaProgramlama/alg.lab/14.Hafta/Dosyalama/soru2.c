#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void terstenKelime(char *kelime) {
    int uzunluk = strlen(kelime);
    for (int i = 0; i < uzunluk / 2; i++) {
        char temp = kelime[i];
        kelime[i] = kelime[uzunluk - i - 1];
        kelime[uzunluk - i - 1] = temp;
    }
}

int main() {
    int kelimeSayisi;
    char *kelime;
    FILE *girdiDosyasi, *ciktiDosyasi;

    printf("Kac kelime gireceksiniz? ");
    scanf("%d", &kelimeSayisi);
    getchar(); // Tamponu temizle

    // Giris dosyasini yazma modunda ac
    girdiDosyasi = fopen("kelimeler.txt", "w");
    if (girdiDosyasi == NULL) {
        printf("HATA: 'kelimeler.txt' dosyasi olusturulamadi.\n");
        return 1;
    }

    printf("Lutfen kelimeleri girin:\n");
    for (int i = 0; i < kelimeSayisi; i++) {
        printf("%d. kelime: ", i + 1);

        kelime = (char *)malloc(100 * sizeof(char));
        if (kelime == NULL) {
            printf("HATA: Bellek tahsis edilemedi.\n");
            fclose(girdiDosyasi);
            return 1;
        }

        fgets(kelime, 100, stdin);
        kelime[strcspn(kelime, "\n")] = '\0';
        fprintf(girdiDosyasi, "%s\n", kelime);

        free(kelime);
    }

    fclose(girdiDosyasi);

    // Dosyayi okuma modunda ac
    girdiDosyasi = fopen("kelimeler.txt", "r");
    if (girdiDosyasi == NULL) {
        printf("HATA: 'kelimeler.txt' dosyasi acilamadi.\n");
        return 1;
    }

    ciktiDosyasi = fopen("ters_kelimeler.txt", "w");
    if (ciktiDosyasi == NULL) {
        printf("HATA: 'ters_kelimeler.txt' dosyasi olusturulamadi.\n");
        fclose(girdiDosyasi);
        return 1;
    }

    printf("\nTers cevrilen kelimeler:\n");
    while (1) {
        kelime = (char *)malloc(100 * sizeof(char));
        if (kelime == NULL) {
            printf("Bellek tahsis edilemedi.\n");
            fclose(girdiDosyasi);
            fclose(ciktiDosyasi);
            return 1;
        }

        if (fgets(kelime, 100, girdiDosyasi) == NULL) {
            free(kelime);
            break;
        }

        kelime[strcspn(kelime, "\n")] = '\0';
        terstenKelime(kelime);
        printf("%s\n", kelime);
        fprintf(ciktiDosyasi, "%s\n", kelime);

        free(kelime);
    }

    fclose(girdiDosyasi);
    fclose(ciktiDosyasi);

    printf("\nKelimeler 'kelimeler.txt' dosyasina, ters halleri ise 'ters_kelimeler.txt' dosyasina yazildi.\n");
    return 0;
}
