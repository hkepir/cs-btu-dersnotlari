#include<stdio.h>

typedef struct {
    char ad[20];
    char soyad[20];
    int not;
} student;

int main() {

    FILE *file = fopen("students.txt", "w+");
    student std;
    int sayac = 0;

    if (file == NULL) {
        printf("Dosya Acilmadi!\n");
        return 1;
    }

    while (sayac < 5) {
        printf("Ogrencinin adini giriniz: ");
        scanf("%s", std.ad);

        printf("Ogrencinin soyadini giriniz: ");
        scanf("%s", std.soyad);

        printf("Ogrencinin notunu giriniz: ");
        scanf("%d", &std.not);

        //dosyaya yazma islemi
        fprintf(file, "%s\t%s\t%d\n", std.ad, std.soyad, std.not);

        sayac++;
    }
    fprintf(file,"%d",sayac);
    int deneme = 500;
    char dene[]="Aysegul";
    fscanf(file,"%d, %s",&deneme,dene);
    //dosyadaki veriler konsolda da gozuksun
    rewind(file);//dosya pointeri basa cekilir
    printf("\nDosyadaki Ogrenci Verileri:\n");
    while (fscanf(file, "%s\t%s\t%d", std.ad, std.soyad, &std.not) == 3) {
        printf("\n\tAd: %s\n\tSoyad: %s\n\tNot: %d\n", std.ad, std.soyad, std.not);
    }

    fclose(file);
    return 0;
}


