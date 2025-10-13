#include<stdio.h>
#include<stdlib.h>

struct ogretmen
{
    char name[50];
    char soyad[50];
    int yas;
    double kpssNotu;
    //struct icinde struct tanimlama
    struct iletisim
    {
        int personelNo;
        int tel;
        char eposta[100];
    }ilt1,ilt2;
};

typedef struct arastirmaGorevlisi {
    int numara;
    int alesNotlari[2];
    int mulakatNotlari[2];
    int juriNotu;
}arsGor;


union test
{
    int x;
    char y[10];
}p;

//Struct ve Isaretciler
typedef struct
{
    char element[20];
    int guc;
}Karakter;


void bilgileriYazdir(arsGor *ag, int sayi) {
    for (int i = 0; i < sayi; i++) {
        printf("\n________Arastirma Gorevlisi %d Bilgiler________\n\n", ag[i].numara);
        printf("Ales Notlari: %d, %d\n", ag[i].alesNotlari[0], ag[i].alesNotlari[1]);
        printf("Mulakat Notlari: %d, %d\n", ag[i].mulakatNotlari[0], ag[i].mulakatNotlari[1]);
        printf("Juri Notu: %d\n\n", ag[i].juriNotu);
    }
}



//Herhangi bir fonksiyon struct tipinde veri dondurebilir ve  ornek OgretmenBilgisiYazdir
//struct veri tipi parametre olarak fonksiyonlara gonderilebilir ornek bilgileriYazdir fonksiyonu

void OgretmenBilgisiYazdir (struct ogretmen ogt)
{
  printf("Ad: %s\nSoyad: %s\nYas: %d\nKpss Not: %.2lf\nPersonel No: %d\nTelefon No: %d\n",
           ogt.name,
           ogt.soyad,
           ogt.yas,
           ogt.kpssNotu,
           ogt.ilt1.personelNo,
           ogt.ilt1.tel);
}






int main()
{
    struct ogretmen ogrt1;
    printf("***********************\n\tVERI GIRISI\n***********************\n");
    printf("Ogretmen Ad:");
    //scanf("%s",ogrt1.name);//dizi gonderdigimiz icin & gerek yok
    gets(ogrt1.name);
    printf("Ogretmen Soyad:");
    gets(ogrt1.soyad);
    printf("Ogretmen Yas:");
    scanf("%d",&ogrt1.yas);
    printf("Ogretmen KPSS Puan:");
    scanf("%lf",&ogrt1.kpssNotu);

    ogrt1.ilt1.personelNo = 123456;
    printf("Ogretmen No: %d\n",ogrt1.ilt1.personelNo);

    ogrt1.ilt1.tel = 5877894561;
    printf("Ogretmen Telefon No: %d\n",ogrt1.ilt1.tel);



    printf("***********************\n\tVERI OKUMA\n***********************\n");
    printf("Ad: %s\nSoyad: %s\nYas: %d\nKpss Not: %.2lf\nPersonel No: %d\nTelefon No: %d\n",
           ogrt1.name,
           ogrt1.soyad,
           ogrt1.yas,
           ogrt1.kpssNotu,
           ogrt1.ilt1.personelNo,
           ogrt1.ilt1.tel);

    //struct tipindeki bir degiskenin degeri ayni tipteki bir baska struct degiskenine atanabilir
    struct ogretmen ogrt2;
    ogrt2 = ogrt1;//Veri aktarma
    printf("***********************\n\tVERI AKTARMA\n***********************\n");
    OgretmenBilgisiYazdir(ogrt2);
    strcpy(ogrt2.ilt2.eposta,"hilalkepir@yandex.com");
    printf("E-posta:");
    puts(ogrt2.ilt2.eposta);

    //7 elemanli statik dizi tanimlama
    arsGor akademisyenler[7];

    for (int i = 0; i < 7; i++) {
        akademisyenler[i].numara = i + 1;
        akademisyenler[i].alesNotlari[0] = 70 + (i % 30); // Rastgele deðerler
        akademisyenler[i].alesNotlari[1] = 60 + (i % 40); // Rastgele deðerler
        akademisyenler[i].mulakatNotlari[0] = 80 + (i % 20); // Rastgele deðerler
        akademisyenler[i].mulakatNotlari[1] = 75 + (i % 25); // Rastgele deðerler
        akademisyenler[i].juriNotu = 85 + (i % 15); // Rastgele deðerler
    }

    bilgileriYazdir(akademisyenler, 7);

    //---------------------------------------
    union test p;

    p.x = 42;
    printf("x: %d\n",p.x);
    strcpy(p.y,"Hello");
    printf("y: %s\n",p.y);
    printf("x (gecersiz): %d\n",p.x);

    //---------------------------------------
    //Struct ve Isaretciler
    Karakter k;
    Karakter *pk;
    pk = &k;
    strcpy(k.element,"su");
    k.guc = 25;

    pk->guc += 5;

    printf("Karakterin Gucu: %d\n",pk->guc);

    strcpy((*pk).element,"toprak");

    printf("Karakterin Elementi: %s",pk->element);



    return 0;
}
