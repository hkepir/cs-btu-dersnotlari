#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char kitapAdi[100];
    char yazarAdi[100];
    int basimYili;
    float fiyat;
} Kitap;

Kitap* KitapEkle(Kitap *kitaplar, int *kitapSayisi) {
    kitaplar = (Kitap *)realloc(kitaplar, (*kitapSayisi + 1) * sizeof(Kitap));

    printf("Kitap adi: ");
    scanf(" %[^\n]", kitaplar[*kitapSayisi].kitapAdi);

    printf("Yazar adi: ");
    scanf(" %[^\n]", kitaplar[*kitapSayisi].yazarAdi);

    printf("Basim yili: ");
    scanf("%d", &kitaplar[*kitapSayisi].basimYili);

    printf("Fiyat: ");
    scanf("%f", &kitaplar[*kitapSayisi].fiyat);

    (*kitapSayisi)++;
    return kitaplar;
}

void BellekTemizle(Kitap *kitaplar) {
    free(kitaplar);
}

void KitapListele(Kitap *kitaplar, int kitapSayisi) {
    if (kitaplar == NULL || kitapSayisi == 0) {
        printf("Listelenecek kitap bulunmamaktadir.\n");
        return;
    }

    printf("-------------------------\n");
    for (int i = 0; i < kitapSayisi; i++) {
        printf("Kitap Adi: %s\n", kitaplar[i].kitapAdi);
        printf("Yazar Adi: %s\n", kitaplar[i].yazarAdi);
        printf("Basim Yili: %d\n", kitaplar[i].basimYili);
        printf("Fiyat: %.2f\n", kitaplar[i].fiyat);
        printf("-------------------------\n");
    }
}

void FiyatGuncelle(Kitap *kitaplar, int kitapSayisi, float yuzde, int zam) {
    if (kitaplar == NULL || kitapSayisi == 0) {
        printf("Guncellenecek kitap bulunmamaktadir.\n");
        return;
    }

    for (int i = 0; i < kitapSayisi; i++) {
        if (zam) {
            kitaplar[i].fiyat += kitaplar[i].fiyat * yuzde / 100;
        } else {
            kitaplar[i].fiyat -= kitaplar[i].fiyat * yuzde / 100;
        }
    }
}

void BilgileriGuncelle(Kitap *kitaplar, int indeks, int kitapSayisi) {
    if (kitaplar == NULL || indeks < 0 || indeks >= kitapSayisi) {
        printf("Gecersiz indeks!\n");
        return;
    }

    printf("Yeni Kitap adi: ");
    scanf(" %[^\n]", kitaplar[indeks].kitapAdi);

    printf("Yeni Yazar adi: ");
    scanf(" %[^\n]", kitaplar[indeks].yazarAdi);

    printf("Yeni Basim yili: ");
    scanf("%d", &kitaplar[indeks].basimYili);

    printf("Yeni Fiyat: ");
    scanf("%f", &kitaplar[indeks].fiyat);
}

int main() {
    Kitap *kitaplar = NULL;
    int kitapSayisi = 0;
    int secim, indeks;
    float yuzde;
    int zam;

    while (1) {
        printf("\n1. Kitap Ekle\n");
        printf("2. Kitap Listele\n");
        printf("3. Fiyat Guncelle\n");
        printf("4. Bilgileri Guncelle\n");
        printf("5. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kitaplar = KitapEkle(kitaplar, &kitapSayisi);
                break;
            case 2:
                KitapListele(kitaplar, kitapSayisi);
                break;
            case 3:
                printf("Yuzde degeri: ");
                scanf("%f", &yuzde);
                printf("Zam (1) veya Indirim (0): ");
                scanf("%d", &zam);
                FiyatGuncelle(kitaplar, kitapSayisi, yuzde, zam);
                break;
            case 4:
                printf("Guncellenecek kitap indeksi: ");
                scanf("%d", &indeks);
                if (indeks >= 0 && indeks < kitapSayisi) {
                    BilgileriGuncelle(kitaplar, indeks, kitapSayisi);
                } else {
                    printf("Gecersiz indeks!\n");
                }
                break;
            case 5:
                BellekTemizle(kitaplar);
                return 0;
            default:
                printf("Gecersiz secim!\n");
        }
    }
}






/*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char kitapAdi[100];
    char yazarAdi[100];
    int basimYili;
    float fiyat;
} Kitap;

Kitap* KitapEkle(Kitap *kitaplar, int *kitapSayisi) {
    kitaplar = (Kitap *)malloc(sizeof(Kitap));

    printf("Kitap adi:");
    scanf(" %[^\n]",
    printf("Yazar adi:");
    gets(kitaplar[*kitapSayisi].yazarAdi);
    printf("Basim yili: ");
    scanf("%d", kitaplar[*kitapSayisi].basimYili);
    printf("Fiyat:");
    scanf("%f", kitaplar[*kitapSayisi].fiyat);

    (*kitapSayisi)++;
    return kitaplar;
}

void BellekTemizle(Kitap *kitaplar){
    free(kitaplar);
}

void KitapListele(Kitap *kitaplar, int kitapSayisi) {
    printf("-------------------------\n");
    for (int i = 0; i < kitapSayisi; i++) {
        printf("Kitap Adi: %s\n", kitaplar[i].kitapAdi);
        printf("Yazar Adi: %s\n", kitaplar[i].yazarAdi);
        printf("Basim Yili: %d\n", kitaplar[i].basimYili);
        printf("Fiyat: %.2f\n", kitaplar[i].fiyat);
        printf("-------------------------\n");
    }
}

void FiyatGuncelle(Kitap *kitaplar, int kitapSayisi, float yuzde, int zam) {
    for (int i = 0; i < kitapSayisi; i++) {
        if (zam) {
            kitaplar[i].fiyat += kitaplar[i].fiyat * yuzde / 100;
        } else {
            kitaplar[i].fiyat -= kitaplar[i].fiyat * yuzde / 100;
        }
    }
}

void BilgileriGuncelle(Kitap *kitaplar, int indeks) {
    printf("Yeni Kitap adi: ");
    scanf("%s",kitaplar[indeks].kitapAdi);
    printf("Yeni Yazar adi: ");
    scanf("%s",kitaplar[indeks].yazarAdi);
    printf("Yeni Basim yili: ");
    scanf("%d", &kitaplar[indeks].basimYili);
    printf("Yeni Fiyat: ");
    scanf("%f", &kitaplar[indeks].fiyat);
}

int main() {
    Kitap *kitaplar =NULL;
    int kitapSayisi = 0;
    int secim, indeks;
    float yuzde;
    int zam;

    while (1) {
        printf("1. Kitap Ekle\n");
        printf("2. Kitap Listele\n");
        printf("3. Fiyat Guncelle\n");
        printf("4. Bilgileri Guncelle\n");
        printf("5. Cikis\n");
        printf("Seciminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                kitaplar = KitapEkle(kitaplar, &kitapSayisi);
                break;
            case 2:
                KitapListele(kitaplar, kitapSayisi);
                break;
            case 3:
                printf("Yuzde degeri: ");
                scanf("%f", &yuzde);
                printf("Zam (1) veya Indirim (0): ");
                scanf("%d", &zam);
                FiyatGuncelle(kitaplar, kitapSayisi, yuzde, zam);
                break;
            case 4:
                printf("Guncellenecek kitap indeksi: ");
                scanf("%d", &indeks);
                if (indeks >= 0 && indeks < kitapSayisi) {
                    BilgileriGuncelle(kitaplar, indeks);
                } else {
                    printf("Gecersiz indeks!\n");
                }
                break;
            case 5:
                BellekTemizle(kitaplar);
                return 0;
            default:
                printf("Gecersiz secim!\n");
        }
    }
}
*/
