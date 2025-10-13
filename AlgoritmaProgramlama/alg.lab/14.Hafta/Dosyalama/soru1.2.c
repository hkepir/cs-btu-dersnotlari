#include<stdio.h>

typedef struct
{
    char ad[10];
    char soyad[10];
    int not;
}student;

int main()
{

    FILE *file = fopen("students.txt","w+");//+ sagda olmali
    student std;

    if(file == NULL){
        printf("Dosya Acilmadi!\n");
        return 1;//exit(1);
    }

    int sayac=0;
    while(sayac<5){
    printf("Ogrencinin adini giriniz:\n");

    scanf("%s",std.ad);
    fprintf(file,"%s ",std.ad);

    printf("Ogrencinin soyadini giriniz:\n");

    scanf("%s",std.soyad);
    fprintf(file,"%s ",std.soyad);

    printf("Ogrencinin notunu giriniz:\n");
    scanf("%d",&std.not);
    fprintf(file,"%d\n",std.not);

    sayac++;
    }

    fclose(file);
    return 0;
}
//Binary Dosya Ile
#include <stdio.h>

typedef struct
{
    char ad[10];
    char soyad[10];
    int not;
} student;

int main()
{
    FILE *file = fopen("students.dat", "wb+"); // .dat uzantýsý kullanarak binary modda açýldý
    student std;
    int sayac = 0; // sayac deðiþkeni tanýmlandý

    if (file == NULL) {
        printf("Dosya Acilmadi!\n");
        return 1; // exit(1);
    }

    while (sayac < 5) {
        printf("Ogrencinin adini giriniz:\n");
        scanf("%s", std.ad);

        printf("Ogrencinin soyadini giriniz:\n");
        scanf("%s", std.soyad);

        printf("Ogrencinin notunu giriniz:\n");
        scanf("%d", &std.not);

        fwrite(&std, sizeof(student), 1, file); // öðrenci verilerini dosyaya yaz

        sayac++;
    }

    fclose(file);

    // Dosyadan okumak için tekrar açalým
    file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("Dosya Acilmadi!\n");
        return 1; // exit(1);
    }

    printf("\nDosyadan Okunan Ogrenci Bilgileri:\n");

    while (fread(&std, sizeof(student), 1, file)) { // dosyadan öðrenci verilerini oku
        printf("Ad: %s, Soyad: %s, Not: %d\n", std.ad, std.soyad, std.not);
    }

    fclose(file);
    return 0;
}


    //fread(std.not,sizeof(int),5,file);
    //fwrite(std.not,sizeof(int),5,file);

    //fgets(std.soyad,sizeof(char),file);
    //fputs(std.soyad,file);

    //fgets(std.ad,sizeof(char),file);
    //fputs(std.ad,file);
