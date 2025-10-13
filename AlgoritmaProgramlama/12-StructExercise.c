#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int okulNo;
    char ad[10];
    char soyad[10];
    int yas;
}ogrenci_bilgi;//olusturulan veri tipi

int main()
{
   ogrenci_bilgi ogr1 = {552,"Can","Boz",18};
   //hatali kullanim dikkat
   //ogrenci_bilgi ogr1;
   //ogr1 = {552,"Can","Boz",18}; olmaz

   printf("%d\t%s\t%s\t%d\n",ogr1.okulNo,ogr1.ad,ogr1.soyad,ogr1.yas);

   ogrenci_bilgi ogr2;
   ogr2 = ogr1;

   printf("%d\t%s\t%s\t%d\n",ogr2.okulNo,ogr2.ad,ogr2.soyad,ogr2.yas);

   strcpy(ogr1.ad,"Zeliha");
   strcpy(ogr2.soyad,"Bozdag");//string.h eklemeyi unutma
   ogr2.yas = 19;
   printf("%d\t%s\t%s\t%d\n",ogr1.okulNo,ogr1.ad,ogr1.soyad,ogr1.yas);
   printf("%d\t%s\t%s\t%d\n",ogr2.okulNo,ogr2.ad,ogr2.soyad,ogr2.yas);

}
//-----------------------------------------------------------------------------
//Nokta ve orijine olan uzaklik
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
  float x;
  float y;
}nokta;

struct dat
{
    float i,j,k;
};
int main()
{
   nokta nokta;
   nokta.x = 1.2;
   nokta.y = 0.5;

   printf("%.2f\n%.2f\n",nokta.x,nokta.y);

   float sonuc = sqrt(nokta.x*nokta.x+nokta.y*nokta.y);
   printf("Orijine olan uzaklik : %.2f\n",sonuc);

   struct dat dat;//mainde tanimlarken struct yazilmasi gerekir
   dat.i = 8;
   dat.j = 15;
   dat.k = sqrt(dat.i*dat.i+dat.j*dat.j);
   printf("(%.2f,%.2f) noktasinin orijine olan uzakligi : %.2f\n",dat.i,dat.j,dat.k);
}

//-----------------------------------------------------------------------------
//Nokta ve orijine olan uzaklik (birden fazla nokta)
//-----------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int a;
    int b;
    int c;
} nokta;

void ekranaYaz(nokta p[],int n)//nokta veri tipinde fonksiyona parametre gonderildi
{
    printf("Ozel ucgenler\n");
    int i;
    for(i=0; i<n; i++)
    {
        printf("%d , %d , %d\n",(p+i)->a,(p+i)->b,(p+i)->c);
        printf("%d , %d , %d\n", (*(p + i)).a, (*(p + i)).b, (*(p + i)).c);
        // printf("%d , %d , %d\n",*(p+i).a,*(p+i).b,*(p+i).c); yildiz oprt onceliklidir
        printf("%d , %d , %d\n",p[i].a,p[i].b,p[i].c);
    }
}
int main()
{
    nokta dizi[5]= {{3,4,5},{8,15,17},{9,12,15},{6,8,10},{40,41,49}};
    ekranaYaz(dizi,5);
}

//Eger struct ile tanimlanirsa
/*
struct nokta
{
 int a;
 int b;
 int c;
};

void ekranayaz( struct nokta p[],int n)
{

}
int main()
{
   struct nokta dizi[5]={{3,4,5},{8,15,17},{9,12,15},{6,8,10},{40,41,49}};
   ekranaYaz(dizi,5);
}
*/

//------------------------------------------------------------------------------
//Union
//------------------------------------------------------------------------------

union test
{
    int x,y;
    float z=1.1;
    double t=5.5;
};


int main()
{
    union test t;

    t.x=2;
    printf("%d\n",t.x);

    printf("Union imizin tuttugu alan %d byte tir",sizeof(t));

    t.y=10;
    printf("%d",t.y);
    return 0;
}
//------------------------------------------------------------------------------
//Galari Sorusu
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct araba {
    int satis;
    union {
        double fiyat;
        char marka[20];
    } bilgi;
};

int main() {
    struct araba araba_A;

    araba_A.satis = 0;
    strcpy(araba_A.bilgi.marka, "Dogan");
    //araba_A.bilgi.marka = "Sahin"; yapilamaz yapilmasi icin char* kullanilabilir
    araba_A.satis = 1;
    araba_A.bilgi.fiyat = 200.000;

    printf("---Araba Bilgileri---\n");

    // Use a condition to print either the marka or the fiyat based on satis value
    if (araba_A.satis == 0) {
        printf("Marka: %s\n", araba_A.bilgi.marka);
    } else {
        printf("Fiyat: %lf\n", araba_A.bilgi.fiyat);
    }

    return 0;
}

//------------------------------------------------------------------------------
//Karmasik Sayilarda Toplam Fonksiyonsuz
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

typedef struct karmasiksayi {
    float reel;
    float sanal;
} karmasik;

int main() {
    karmasik k1, k2, toplam;

    // Birinci karmaşik sayiyi al
    printf("Birinci sayinin reel ve sanal kismini giriniz:\n");
    scanf("%f %f", &k1.reel, &k1.sanal);

    // İkinci karmaşik sayiyi al
    printf("Ikinci sayinin reel ve sanal kismini giriniz:\n");
    scanf("%f %f", &k2.reel, &k2.sanal);

    // Toplami hesapla
    toplam.reel = k1.reel + k2.reel;
    toplam.sanal = k1.sanal + k2.sanal;

    // Sonuçlari yazdir
    printf("\n%.2f + %.2f i\n", k1.reel, k1.sanal);
    printf("%.2f + %.2f i\n", k2.reel, k2.sanal);
    printf("Toplam = %.2f + %.2f i\n", toplam.reel, toplam.sanal);

    return 0;
}
//------------------------------------------------------------------------------
//Karmasik Sayi
//------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct karmasiksayi
    {
        float a,b;
    };


    int main()
    {
        struct karmasiksayi sayi1,sayi2,sonuc;
        char oper;

        printf("Lutfen yapmak istediginiz islemi giriniz\n");
        scanf("%c",&oper);

        printf("Birinci karmasik sayi\n");
        scanf("%.2f%.2f",&sayi1.a,&sayi1.b);

        printf("Ikinci karmasik sayi\n");
        scanf("%.2f%.2f",&sayi2.a,&sayi2.b);

        if(oper=='+')
        {
            sonuc.a=sayi1.a+sayi2.a;
            sonuc.b=sayi1.b+sayi2.b;
        }
        else if(oper=='-')
        {
            sonuc.a=sayi1.a-sayi2.a;
            sonuc.b=sayi1.b-sayi2.b;
        }
        else{
            printf("Lutfen dogru bir operator giriniz");
        }

        printf("Sonuc:\n");
        printf("%.2f",sonuc.a);

        if(sonuc.b>=0)
        {
            printf("+ %.2f i",sonuc.b);

        }
        else
        {
            printf("%.2f i",sonuc.b);
        }
            return 0;
    }


//------------------------------------------------------------------------------
//Karmasik sayi typedef struct ile fonksiyona parametre olarak bir yapiyi gonderme
//------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct karmasik_sayi
    {
        float reel;
        float sanal;
    }karmasik;

void topla(karmasik n1,karmasik n2)
{
    karmasik temp;
    temp.reel = n1.reel + n2.reel;
    temp.sanal = n1.sanal + n2.sanal;
    printf("%.2f +%.2f i\n",n1.reel,n1.sanal);
    printf("%.2f +%.2f i\n",n2.reel,n2.sanal);
    printf("Toplam = %.2f +%.2f i\n",temp.reel,temp.sanal);

}

int main()
    {
        karmasik k1,k2;
        printf("Birinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k1.reel,&k1.sanal);

        printf("Ikinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k2.reel,&k2.sanal);

        topla(k1,k2);

        return 0;
    }


//------------------------------------------------------------------------------
//Karmasik sayi struct ile Fonksiyona parametre olarak bir yapiyi gonderme
//------------------------------------------------------------------------------
struct karmasik_sayi
    {
        float reel;
        float sanal;
    };//ayni struct tipinde baska degiskenler tanimlamak icin kullanilir

void topla(struct karmasik_sayi n1,struct karmasik_sayi n2)
{
    struct karmasik_sayi temp;
    temp.reel = n1.reel + n2.reel;
    temp.sanal = n1.sanal + n2.sanal;
    printf("%.2f +%.2f i\n",n1.reel,n1.sanal);
    printf("%.2f +%.2f i\n",n2.reel,n2.sanal);
    printf("Toplam = %.2f +%.2f i\n",temp.reel,temp.sanal);

}

int main()
    {
        struct karmasik_sayi k1,k2;
        printf("Birinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k1.reel,&k1.sanal);

        printf("Ikinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k2.reel,&k2.sanal);

        topla(k1,k2);

        return 0;
    }

//Aciklamaya Ornek
struct karmasik_sayi
    {
        float reel;
        float sanal;
    }k1,k2;

void topla(struct karmasik_sayi n1,struct karmasik_sayi n2)
{
    struct karmasik_sayi temp;
    temp.reel = n1.reel + n2.reel;
    temp.sanal = n1.sanal + n2.sanal;
    printf("%.2f +%.2f i\n",n1.reel,n1.sanal);
    printf("%.2f +%.2f i\n",n2.reel,n2.sanal);
    printf("Toplam = %.2f +%.2f i\n",temp.reel,temp.sanal);

}

int main()
    {
       // struct karmasik k1,k2; ile ayni islem yapilmis olur
        printf("Birinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k1.reel,&k1.sanal);

        printf("Ikinci sayinin reel ve sanal kismini giriniz\n");
        scanf("%f %f",&k2.reel,&k2.sanal);

        topla(k1,k2);

        return 0;
    }
//------------------------------------------------------------------------------
//Patenci Performansi Sorusu
//------------------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct yarismaci
{
        char ad[10],soyad[10];
        float puan[10];//her yarismaci 10 hakemden puan alir
        float performans;//her yarismacinin kendine ait bir performansi var

};

float puanHesap(struct yarismaci patenci)
{
    float sonuc = 0;
    float max = 0.0;
    float min = 6.0;
    for(int i=0;i<10;i++)
    {
      if(patenci.puan[i]>max)
      {
          max=patenci.puan[i];
      }
      if(patenci.puan[i]<min)
      {
          min=patenci.puan[i];
      }
      sonuc += patenci.puan[i];
    }

    sonuc = (sonuc-max-min);

    return(sonuc);
}


int main()
{
    struct yarismaci sporcu;
    printf("Yarismaci adini giriniz\n");
    scanf("%s",sporcu.ad);
    printf("Yarismaci soy-adini giriniz\n");
    scanf("%s",sporcu.soyad);

    printf("---Hakemlerin Verdigi Puanlar---\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("%d. Hakem: ", i + 1);
            scanf("%f", &sporcu.puan[i]);
            if (sporcu.puan[i] < 0 || sporcu.puan[i] > 6) {
                printf("0 ile 6 arasinda bir puan giriniz.\n");
            }
        } while (sporcu.puan[i] < 0 || sporcu.puan[i] > 6);
    }

    sporcu.performans = puanHesap(sporcu);
    printf("\nPerformans Puani: %.2f\n\n",sporcu.performans);
}

//------------------------------------------------------------------------------
//Patenci Performansi Sorusu_2 Yarismaya katilan yarismaci sayisini kullanicidan al ve birinciyi bul
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>//dinamik dizi icin
#include <string.h>

typedef struct yarismaci {
    char ad[10], soyad[10];
    float puan[10]; // Her yarýþmacý 10 hakemden puan alýr
    float performans; // Her yarýþmacýnýn kendine ait bir performansý var
} y;

float puanHesap(y patenci) {
    float sonuc = 0;
    float max = 0.0;
    float min = 6.0;
    for (int i = 0; i < 10; i++) {
        if (patenci.puan[i] > max) {
            max = patenci.puan[i];
        }
        if (patenci.puan[i] < min) {
            min = patenci.puan[i];
        }
        sonuc += patenci.puan[i];
    }
    sonuc = (sonuc - max - min); // En yüksek ve en düþük puaný çýkar
    return sonuc;
}

int main() {
    int yarismaciSayisi;

    printf("Yarýþmacý sayýsýný giriniz: ");
    scanf("%d", &yarismaciSayisi);

    // Yarýþmacý bilgileri için dinamik dizi ayýrma
    y* yarismacilar = (y*)malloc(yarismaciSayisi * sizeof(y));

    for (int i = 0; i < yarismaciSayisi; i++) {
        printf("\n%d. Yarýþmacýnýn adýný giriniz: ", i + 1);
        scanf("%s", yarismacilar[i].ad);
        printf("%d. Yarismacinin soyadýný giriniz: ", i + 1);
        scanf("%s", yarismacilar[i].soyad);

        printf("--- %d. Yarismacinin Hakem Puanlari ---\n", i + 1);
        for (int j = 0; j < 10; j++) {
            do {
                printf("%d. Hakem: ", j + 1);
                scanf("%f", &yarismacilar[i].puan[j]);
                if (yarismacilar[i].puan[j] < 0 || yarismacilar[i].puan[j] > 6) {
                    printf("Lütfen 0 ile 6 arasýnda bir puan giriniz.\n");
                }
            } while (yarismacilar[i].puan[j] < 0 || yarismacilar[i].puan[j] > 6);
        }

        // Performansi hesapla
        yarismacilar[i].performans = puanHesap(yarismacilar[i]);
    }

    // En yüksek performansa sahip yarýþmacýyý bul
    int birinciIndex = 0;
    for (int i = 1; i < yarismaciSayisi; i++) {
        if (yarismacilar[i].performans > yarismacilar[birinciIndex].performans) {
            birinciIndex = i;
        }
    }

    // Birinciyi yazdir
    printf("\n--- Yarýþmanýn Birincisi ---\n");
    printf("Ad: %s\n", yarismacilar[birinciIndex].ad);
    printf("Soyad: %s\n", yarismacilar[birinciIndex].soyad);
    printf("Performans Puaný: %.2f\n", yarismacilar[birinciIndex].performans);

    // Bellek temizleme
    free(yarismacilar);

    return 0;
}
//------------------------------------------------------------------------------
//Ogrencilerin Sinavdaki Netlerini Hesaplama
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>//dinamik dizi icin
#include <string.h>


struct ogrenci_bilgi{
    int no;
    char cevap[5];//5 soruluk cevap
    float sonuc;
};



int main()
{
    srand(time(NULL));
    int i;
    struct ogrenci_bilgi ogr[3];//3 ogrenci statik dizi
    //struct ogrenci_sonuc ogrsnc[3];
    char anahtar[5];//5 soru

    int dogru,yanlis,bos;
    printf("---Ogretmenin Cevap Anahtari---\n");
    for(i=0;i<5;i++)
    {
        scanf(" %c",&anahtar[i]);
    }

    int j;
    printf("---Ogrencilerin Cevap Anahtarlari---\n");
    for(i=0;i<3;i++)
        {
        dogru=0,yanlis=0,bos=0;//her ogrenci icin bu degerleri sifirla
        ogr[i].no = rand() % 100 + 1;
        printf("\n---%d No'lu Ogrenci---\n",ogr[i].no);

        for(j=0;j<5;j++)
        {


        printf("%d.Soru\n",j+1);
        scanf(" %c",&ogr[i].cevap[j]);

        if(ogr[i].cevap[j]==anahtar[j])
            dogru++;
        else if(ogr[i].cevap[j]==' ')
            bos++;
        else
            yanlis++;
        }

        ogr[i].sonuc = dogru - (yanlis/4.0);//eger yanlis / 4 dersek bolme islemi tam sayilarda yapilir kusurat kaybolur
        printf("%d Ogrencinin Sonucu:\n%d Yanlis\n%d Bos\n%d Dogru\n%.2f Net\n",i+1,yanlis,bos,dogru,ogr[i].sonuc);

    }
}
//------------------------------------------------------------------------------
//Struct Icinde Union Kullanma Sorusu
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

struct degerTip {
    int tip;
    union {
        char kar;
        float sayi;
    } bir;
};

int main() {
    struct degerTip degerler[20];
    float ortalama = 0.0;
    int sayac = 0;
    int i = 0;
    int j;

    do {
        printf("Bir tam sayi giriniz (1: karakter, 0: reel sayi, diger: cikis):\n");
        scanf("%d", &degerler[i].tip);

        if (degerler[i].tip == 1) {
            printf("Karakter giriniz:\n");
            // Tampondaki '\n' karakterini temizlemek için boşluk birakilmiştir
            scanf(" %c", &degerler[i].bir.kar);
        } else if (degerler[i].tip == 0) {
            printf("Reel sayi giriniz:\n");
            scanf("%f", &degerler[i].bir.sayi);
        }

        // Eger tip 0 veya 1 degilse döngüden çik
        if (degerler[i].tip != 0 && degerler[i].tip != 1) {
            break;
        }

        i++;
        if (i >= 20) { // Maksimum sinir kontrolü
            printf("En fazla 20 deger girebilirsiniz.\n");
            break;
        }
    } while (1);

    for (j = 0; j < i; j++) {
        if (degerler[j].tip == 0) {
            ortalama += degerler[j].bir.sayi;
            sayac++;
        }
    }

    if (sayac > 0) {
        ortalama /= sayac;
        printf("Reel sayilarin ortalamasi: %.2f\n", ortalama);
    } else {
        printf("Hicbir reel sayi girilmedi, ortalama hesaplanamiyor.\n");
    }

    return 0;
}
//------------------------------------------------------------------------------
//Kisilerin Adres Bilgilerini Tutan C Programi DINAMIK BELLEK YONETIMI ILE

/*Adres defteri adinda bir yapi tanimlayin. Tutulacak bilgiler ad,soyad,tel,adres,posta kodu seklindedir.
Buna gore N adet kisinin bilgisini bir yapida tutan C programini yaziniz.*/
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

typedef struct{
   char ad[10],soyad[10];
   char tel[10];
   int postakodu
}adresdef;

int main() {

    int N;
    printf("Adres defterine kac kisi eklemek istersiniz?\n");
    scanf("%d",&N);

    adresdef* def = (adresdef*)malloc(sizeof(adresdef)*N);//dinamik bellek
    if(def == NULL){
        printf("Bellek tahsisi basrisiz \n");
        exit(1);
    }

    for(int i=0;i<N;i++)
    {
        printf("----%d.Adres----\n",i+1);
        printf("Ad:");
        scanf("%s",def[i].ad);
        printf("Soyad:");
        scanf("%s",(def+i)->soyad);// def[i].soyad ile tamamen ayni def isaretcisinin i elemanina kaymasinii saglar
        printf("Telefon: ");
        scanf("%s", (def+i)->tel);
        printf("Posta kodu: ");
        scanf("%d", &def[i].postakodu);
    }

    free(def);//Bellegi serbest birakmayi unutma
    return 0;
}
//------------------------------------------------------------------------------
//Kisilerin Adres Bilgilerini Tutan C Programi STATIK BELLEK YONETIMI ILE
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

struct AdresDefteri{
char Ad[100];
char Soyad[100];
char TelNo[10];
char Adres[200];
char PostaKodu[6];

};

int main()
{int N;
    int i;
    char satir;
    printf("Kac adet kayit tutulacak\n");
    scanf("%d",&N);
    scanf("%c",&satir);

    struct AdresDefteri iletisim[N];//statik bellek

    for(i=0;i<N;i++)
    {

        printf("Adi giriniz\n");
        gets(iletisim[i].Ad);

        printf("Soyadi giriniz\n");
        gets(iletisim[i].Soyad);

        printf("Telno giriniz\n");
        gets(iletisim[i].TelNo);

        printf("Adres giriniz\n");
        gets(iletisim[i].Adres);

        printf("Postakodu giriniz\n");
        gets(iletisim[i].PostaKodu);


    }

    printf("ADI\tSOYADI\tTELEFON\tADRES\t\POSTAKODU\n");
    printf("=============================================\n");

    for(i=0;i<N;i++)
    {
        printf("%s \t %s \t %s \t %s \t %s\n",iletisim[i].Ad,iletisim[i].Soyad,iletisim[i].TelNo,iletisim[i].PostaKodu,iletisim[i].Adres);
    }

    return 0;
}
//------------------------------------------------------------------------------
//Union Bellekteki Adresleri Gosteren Program 1
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

union{
    int tamsayi;
    float reelsayi;
}paylas;

int main() {
    printf("Tam sayi gir:");
    scanf("%d",&paylas.tamsayi);
    printf("\nGirilen tamsayi adresi: %p\n\n",&paylas.tamsayi);

    printf("Reel sayi gir:");
    scanf("%f",&paylas.reelsayi);
    printf("\nGirilen reelsayi adresi: %p\n\n",&paylas.reelsayi);

    return 0;
}
//------------------------------------------------------------------------------
//Union Bellekteki Adresleri Gosteren Program 2
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

union paylasim_kontrol{
int x;
int y;

}kontrol;


int main()
{
    int *X,*Y;
    kontrol.x=100;

    X=&kontrol.x;
    printf("Tamsayi(x)=%d bellek adresi %X\n",kontrol.x,X);

    kontrol.y=200;
    Y=&kontrol.y;
    printf("Tamsayi(y)=%d bellek adresi %X\n",kontrol.y,Y);


    return 0;
}

//------------------------------------------------------------------------------
//Union ile Dairenin Alani ve Cevresi
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union hesapla{
    float cevre;
    float alan;
};


int main()
{
    union hesapla bul;
    int yaricap;

    printf("Yaricapi giriniz:");
    scanf("%d",&yaricap);

    bul.cevre = 2*3.14*yaricap;
    printf("Cevresi %.2f\n",bul.cevre);

    bul.alan = 3.14*yaricap*yaricap;
    printf("Alani %.2f\n",bul.alan);

    return 0;
}

//------------------------------------------------------------------------------
//243. Personel Bilgilerin Kaydedip Alfabetik Olarak Ekrana Bastiran Program
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct personel{
int sifre;
char ad[10];
char soyad[10];
int yas;
float maas;
char cinsiyet[10];
}kisiler;

void sirala(kisiler kisi[],int m)
{
    int i,j;
    kisiler temp;
    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(strcmp(kisi[i].ad,kisi[j].ad)>0)
            {
                temp = kisi[i];
                kisi[i]=kisi[j];
                kisi[j]=temp;
            }
        }
    }
}

void listele(kisiler kisi[],int m)
{
    int i;
    for(i=0;i<m;i++){
        printf("%d %s %s %d %.2f %s\n",kisi[i].sifre,kisi[i].ad,kisi[i].soyad,kisi[i].yas,kisi[i].maas,kisi[i].cinsiyet);
    }
}
int main()
{
    int N;
    int i;
    printf("Kac personel bilgisi tutulacak?");
    scanf("%d",&N);
   // kisiler* p = (kisiler*)malloc(sizeof(kisiler)*N); //veya
   kisiler p[N];

    for(i=0;i<N;i++)
    {
        printf("Sifre\n");
        scanf("%d",&p[i].sifre);

        printf("Ad\n");
        scanf("%s",&p[i].ad);

        printf("Soyad\n");
        scanf("%s",&p[i].soyad);

        printf("Yas=\n");
        scanf("%d",&p[i].yas);

        printf("Maas=\n");
        scanf("%f",&p[i].maas);

        printf("Cinsiyet=\n");
        scanf("%s",&p[i].cinsiyet);
    }

    sirala(p,N);
    listele(p,N);

    free(p);


    return 0;
}
//------------------------------------------------------------------------------
//Kosula Gore Atama Yapma
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci{
    char ad[10];
    char soyad[20];
    int no;
    int sinif;
} ;


int main() {

    struct ogrenci ogr;
    printf("Ogrenci numarasini giriniz:");
    scanf("%d",&ogr.no);

    if(ogr.no==2019)
    {
        ogr.no = 2019;
        strcpy(ogr.ad,"Can");
        strcpy(ogr.soyad,"Boz");
        ogr.sinif= 5;

        printf("\n NO: %d\n",ogr.no);
        printf("\n Ad: %s\n",ogr.ad);
        printf("\n Soyad: %s\n",ogr.soyad);
        printf("\n Sinif: %d\n",ogr.sinif);


    }
    else
    printf("Program sonlaniyor...");

    return 0;
}

//------------------------------------------------------------------------------
//Iki Sure Farki Hesaplama
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int saniye;
    int dakika;
    int saat;
}zaman;

void fark(zaman tbaslangic,zaman tbitis,zaman* farki)
{
    if(tbitis.saniye > tbaslangic.saniye)
    {
        --tbaslangic.dakika;
        tbaslangic.saniye+=60;
    }
    farki->saniye = tbaslangic.saniye - tbitis.saniye;
    if(tbitis.dakika > tbaslangic.dakika)
    {
        --tbaslangic.saat;
        tbaslangic.dakika+=60;
    }
    farki->dakika = tbaslangic.dakika - tbitis.dakika;
    farki->saat = tbaslangic.saat - tbitis.saat;
}

int main() {

    zaman t1,t2,hesap;
    printf("Baslangic zamani giriniz (saat,dakika,saniye):");
    scanf("%d%d%d",&t1.saat,&t1.dakika,&t1.saniye);


    printf("Bitis zamani giriniz (saat,dakika,saniye):");
    scanf("%d%d%d",&t2.saat,&t2.dakika,&t2.saniye);

    fark(t1,t2,&hesap);

    printf("\n Zaman farki : %d %d %d - ",t1.saat,t1.dakika,t1.saniye);
    printf("%d %d %d ",t2.saat,t2.dakika,t2.saniye);
    printf("= %d %d %d ",hesap.saat,hesap.dakika,hesap.saniye);
    return 0;
}

//------------------------------------------------------------------------------
//Eczane Deposu
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ilac_adi[20];
    int adet;
    int fiyat;
} data;

int main() {
    data* ilaclar = (data*)calloc(5, sizeof(data));
    data* yirmidenaz[5];
    int i, j, sayac = 0;

    for (i = 0; i < 5; i++) {
        printf("\nIlac adi giriniz:\n");
        scanf("%s",(ilaclar + i)->ilac_adi);

        printf("Adet:\n");
        scanf("%d", &(ilaclar + i)->adet);

        if ((ilaclar + i)->adet < 20) {
            yirmidenaz[sayac] = (ilaclar + i); // İlaç adresini kaydet
            sayac++;
        }

        printf("Fiyat:\n");
        scanf("%d", &(ilaclar + i)->fiyat);
    }

    printf("\n\n--- ILAC ADI ---\n");
    for (j = 0; j < sayac; j++) {
        printf("%d adet  %s\n", yirmidenaz[j]->adet,yirmidenaz[j]->ilac_adi);
    }

    free(ilaclar);
    return 0;
}
//------------------------------------------------------------------------------
//Eczane Deposu 2
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char ilac_adi[20];
    int adet;
    int fiyat;
} data;

int main() {
    int N;
    printf("Girilecek ilac sayisi:");
    scanf("%d",&N);

    data* ilaclar = (data*)calloc(N, sizeof(data));


    for (int i = 0; i < N; i++) {
        printf("\nIlac adi giriniz:\n");
        scanf("%s",ilaclar[i].ilac_adi);

        printf("Adet:\n");
        scanf("%d", &ilaclar[i].adet);

        printf("Fiyat:\n");
        scanf("%d", &ilaclar[i].fiyat);
    }

    printf("\n\n--- ILAC ADI ---\n");

    for (int i = 0; i < N; i++) {
        if(ilaclar[i].adet<20)
            printf("\n%s %d adet mevcut\n",ilaclar[i].ilac_adi,ilaclar[i].adet);
    }
    free(ilaclar);
    return 0;
}
//------------------------------------------------------------------------------
//Koordinat Duzleminde XY Koordinatlarini Bulmak
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct koordinat{
    float x,y;
} ;

int main() {
    struct koordinat top;
    float time;

    printf("\tX\t\tY\n");
    printf("=========\t =========\n");

    for(time=0.0;time<10.0;time+=0.1)
    {
        top.x = 20-6*cos(time);
        top.y = 15+2*sin(time);
        printf("%f\t %f\n",top.x,top.y);
    }
    return 0;
}
//------------------------------------------------------------------------------
//Struct ve Union Bellekte Kaptadigi Alani -Byte- Bulmak
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kontrol1{
    int z;
    float x;
    char otuzluk[30];
    double d;
} ;

typedef struct{
    int a;
    float b;
    char h[4];
}kontrol2;

typedef struct kontrol3{
    char l[10];
};
int main() {
    printf("int: %d byte\n",sizeof(int));
    printf("struct1: %d byte\n",sizeof(struct kontrol1));
    printf("struct2: %d byte\n",sizeof(kontrol2));
    printf("struct3: %d byte\n",sizeof(struct kontrol3));
    return 0;
}
//------------------------------------------------------------------------------
//Satranc Eslesmeleri-Takimlar
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

// Oyuncu yapisi
struct oyuncu {
    char oAd[10]; // Oyuncunun adi
};

// Takim yapisi
struct takimlar {
    char tAd[10];      // Takimin adi
    struct oyuncu* oyuncular; // Dinamik oyuncu listesi
    int oyuncuSayisi;  // Takimin oyuncu sayisi
};

int main() {
    int takimSayisi;

    // Takim sayisini al
    printf("Kac takim olusturulacak?\n");
    scanf("%d", &takimSayisi);

    // Takimlar için bellek ayir
    struct takimlar* takimlar = (struct takimlar*)calloc(takimSayisi, sizeof(struct takimlar));

    // Her takimi oluştur
    for (int i = 0; i < takimSayisi; i++) {
        printf("\n%d. Takimin Adi:\n", i + 1);
        scanf("%s", takimlar[i].tAd);

        // Oyuncu sayisini al
        printf("%s takimi icin kac oyuncu var?\n", takimlar[i].tAd);
        scanf("%d", &takimlar[i].oyuncuSayisi);

        // Oyuncular için bellek ayir
        takimlar[i].oyuncular = (struct oyuncu*)calloc(takimlar[i].oyuncuSayisi, sizeof(struct oyuncu));

        // Oyuncu isimlerini al
        for (int j = 0; j < takimlar[i].oyuncuSayisi; j++) {
            printf("%s takimi %d. Oyuncunun Adi:\n", takimlar[i].tAd, j + 1);
            scanf("%s", takimlar[i].oyuncular[j].oAd);
        }
    }

    // Takim ve oyuncu bilgilerini yazdir
    printf("\n--- Takimlar ve Oyuncular ---\n");
    for (int i = 0; i < takimSayisi; i++) {
        printf("\nTakim %d: %s\n", i + 1, takimlar[i].tAd);
        printf("  Oyuncular:\n");
        for (int j = 0; j < takimlar[i].oyuncuSayisi; j++) {
            printf("    %d. Oyuncu: %s\n", j + 1, takimlar[i].oyuncular[j].oAd);
        }
    }

    // Bellegi serbest birak
    for (int i = 0; i < takimSayisi; i++) {
        free(takimlar[i].oyuncular); // Her takimin oyuncu listesini serbest birak
    }
    free(takimlar); // Takimlari serbest birak

    return 0;
}
//------------------------------------------------------------------------------
//MasaTenisi Turnuvasi Ekipler
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define N 2
struct oyuncu
{
    char soyisim[10];
    char isim[10];
    int yas;
    int sinif;
};

struct equipe
{
    char isim[10];
    struct oyuncu oyuncu1;
    struct oyuncu oyuncu2;
};
void oyuncuyu_olustur(struct oyuncu *o)
{
    printf("Ismi giriniz:");
    scanf("%s",o->isim);//&gerek yok
    printf("Soy ismi giriniz:");
    scanf("%s",o->soyisim);
    printf("Yas giriniz:");
    scanf("%d",&o->yas);
    printf("Sinif giriniz:");
    scanf("%d",&o->sinif);
}
void ekibi_olustur(struct equipe *e)
{
    printf("Ekibin Adi:");
    scanf("%s",e->isim);
    printf("\n1. Oyuncu:\n");
    oyuncuyu_olustur(&e->oyuncu1);
    printf("\n2. Oyuncu:\n");
    oyuncuyu_olustur(&e->oyuncu2);

}
void ekibi_bas(struct equipe e)
{
    printf("\nEkibin adi: %s\n",e.isim);
    printf("\n1.Oyuncu\nAd: %s\n",e.oyuncu1.isim);
    printf("SoyAd  : %s\n",e.oyuncu1.soyisim);
    printf("Yas : %d\n",e.oyuncu1.yas);
    printf("sinif : %d\n",e.oyuncu1.sinif);
    printf("\n2.Oyuncu\nAd: %s\n",e.oyuncu2.isim);
    printf("SoyAd  : %s\n",e.oyuncu2.soyisim);
    printf("Yas : %d\n",e.oyuncu2.yas);
    printf("Sinif : %d\n",e.oyuncu2.sinif);
}

int main() {

    struct equipe tab[N];
    int i;
    for(i=0;i<N;i++)
    {
        printf("\n*******Ekip %d*******\n\n",i+1);
        ekibi_olustur(&tab[i]);//& kaldirildi
    }
    for(i=0;i<N;i++)
    {
       printf("Ekip %d :\n",i);
       ekibi_bas(tab[i]);

    }
    return 0;
}
//--------------------------------------------------------------------------------
//Otel Musterilerinin Yapilan Harcamaya ve Oda Tercihlerine Gore Odeyecegi Tutar
//--------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

struct musteri
{
    char isim[10];
    char soyisim[10];
    int kahvalti;//0 hayir 1 evet //15 Euro kahvalti
    int aksamyemegi;//0 hayir 1 evet // 35 Eouro aksam yemegi
    int hotel;//0= otel  yok 1= 1 = 1 yildizli 75 Euro 2=2 yildizli 100 Euro
    int yalniz;//0= arkadasiyla 1=yalniz;

};

void ikiyildizli(struct musteri *m,int n )
{
  printf("\n---2 Yildizli Otel Secen Musteriler---\n") ;
  for(int i =0;i<n;i++)
  {
    if(m[i].hotel == 2)
    {
        printf("Ad: %s\n",(m+i)->isim); //veya m[i].isim
        printf("Soyad: %s",(m+i)->soyisim);//veya m[i].soyisim
    }
  }
}

void kahvaltisayisi(struct musteri *m,int n,int *sayac)
{
    *sayac = 0;
    for(int i=0;i<n;i++)
    {
        if(m->yalniz == 0)
            (*sayac)++;
    }
    printf("%d Kisi kahvalti yapmistir.",sayac);
}

void hesap(struct musteri *m,int n,int* fatura)
{
    *fatura = 0;
    if(m[n].kahvalti == 1)//veya (m+n)->kahvalti
        *fatura += 15;
    if(m[n].aksamyemegi == 1)
        *fatura +=15;
    if(m[n].hotel == 1)
        *fatura +=75;
    if (m[n].hotel == 2)
        *fatura += 100;
    if (m[n].yalniz == 0)
        *fatura *= 2;
}

int main() {
    struct musteri kisi[4];
    int toplam_kahvalti, fatura;

    // Musteri bilgilerini alma
    for (int i = 0; i < 4; i++) {
        printf("\n**%d. Musteri**\n", i + 1);
        printf("Ad: ");
        scanf("%s", kisi[i].isim);
        printf("Soyad: ");
        scanf("%s", kisi[i].soyisim);
        printf("Kahvalti (0 veya 1): ");
        scanf("%d", &kisi[i].kahvalti);
        printf("Aksam Yemegi (0 veya 1): ");
        scanf("%d", &kisi[i].aksamyemegi);
        printf("Otel (0=Yok, 1=1 Yildizli, 2=2 Yildizli): ");
        scanf("%d", &kisi[i].hotel);
        printf("Yalniz mi? (0=Arkadasla, 1=Yalniz): ");
        scanf("%d", &kisi[i].yalniz);
    }

    // İki yildizli oteli secen musteriler
    ikiyildizli(kisi, 4);

    // Kahvalti yapan kisi sayisini bulma
    kahvaltisayisi(kisi, 4, &toplam_kahvalti);
    printf("\nToplam Kahvalti Yapan Kisi Sayisi: %d\n", toplam_kahvalti);

    // Tum musteriler icin fatura hesaplama
    printf("\n---Tum Musterilerin Faturalari---\n");
    for (int i = 0; i < 4; i++) {
        hesap(kisi, i, &fatura);
        printf("%s %s adli musterinin faturasi: %d Euro\n", kisi[i].isim, kisi[i].soyisim, fatura);
    }

    return 0;
}

//Başlangta yaptigim hatalar
/*int main() {

    struct musteri* kisi= (musteri*)malloc(4*sizeof(struct musteri));
    int kisisayisi;

    for(i=0;i<4;i++)
    {
       printf("\n**%d. Musteri**\n",i+1);
       printf("Ad:");
       gets(kisi->isim[i]);
       printf("\nSoyad:");
       gets(kisi->soyisim[i]);
       printf("\nKahvalti (0 veya 1):");
       scanf("%d",kisi->kahvalti[i]);
       printf("\nAksam yemegi (0 veya 1):");
       scanf("%d",(kisi+i)->aksamyemegi);
       printf("\nOtel (0-1-2):");
       scanf("%d",kisi->hotel[i]);
       if(kisi->hotel[i]!=0)
       {
           printf("Kac kisi kalacaksiniz:");
           scanf("%d",&kisisayisi);
           if(kisisayisi==2)
           {
               kisi->aksamyemegi[i] *=2;
           }
       }
    return 0;
}*/
//--------------------------------------------------------------------------------
//Magaza Zinciri En Cok Satis Yapan Magaza Isci Adres Bilgilerini Bulan Program
//--------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define N 1//1 magaza icin
#define M 2 //2 urun

struct urun {
    char reference_kodu[20];
    float fiyat;
};

struct isci {
    char soyisim[20];
    char isim[20];
    int yas;
};

struct magaza {
    char isim[10];
    char sokak_ismi[20];
    char mahalle[12];
    char telefon[15];
    float satis;
    struct isci e1;
    struct isci e2;
    struct isci e3;
    struct urun p[M];
};

void urunu_olustur(struct urun *pr) {
    printf("Referans kodu girin\n : ");
    scanf("%s", pr->reference_kodu);
    printf("Lütfen fiyatı girin\n : ");
    scanf("%f", &pr->fiyat);
}

void isciyi_olustur(struct isci *em) {
    printf("İşçinin soyadını giriniz\n : ");
    scanf("%s", em->soyisim);
    printf("İşçinin adını giriniz:\n ");
    scanf("%s", em->isim);
    printf("İşçinin yaşını giriniz:\n ");
    scanf("%d", &em->yas);
}

void magazayi_olustur(struct magaza *m) {
    int i;
    printf("Lütfen magazanın ismini girin \n: ");
    scanf("%s", m->isim);
    printf("Lütfen magazanın bulundugu sokak ismini girin\n : ");
    scanf("%s", m->sokak_ismi);
    printf("Magazanın bulundugu mahalle ismi girin \n: ");
    scanf("%s", m->mahalle);
    printf("Magazanın telefon numarasını girin \n: ");
    scanf("%s", m->telefon);
    printf("Satış rakamını girin : \n");
    scanf("%f", &m->satis);

    printf("İşçi 1 : \n");
    isciyi_olustur(&m->e1);
    printf("İşçi 2 : \n");
    isciyi_olustur(&m->e2);
    printf("İşçi 3 : \n");
    isciyi_olustur(&m->e3);

    for (i = 0; i < M; i++) {
        printf("Ürünleri giriniz %d : \n", i + 1);
        urunu_olustur(&m->p[i]);
    }
}

void urunu_bas(struct urun p) {
    printf("\tReferans kodu : %s\n", p.reference_kodu);
    printf("\tFiyat : %.2f\n", p.fiyat);
}

void isciyi_bas(struct isci e) {
    printf("\tİsim : %s\n", e.isim);
    printf("\tSoyisim : %s\n", e.soyisim);
    printf("\tYaş : %d\n", e.yas);
}

void magazayi_bas(struct magaza m) {
    int i;
    printf("Magazanın ismi : %s\n", m.isim);
    printf("Magazanın bulundugu sokak: %s\n", m.sokak_ismi);
    printf("Magazanın bulundugu mahalle: %s\n", m.mahalle);
    printf("Magazanın telefon numarası : %s\n", m.telefon);
    printf("Satış rakamı : %.2f\n", m.satis);
    printf("İşçi 1 :\n");
    isciyi_bas(m.e1);
    printf("İşçi 2 :\n");
    isciyi_bas(m.e2);
    printf("İşçi 3 :\n");
    isciyi_bas(m.e3);
    for (i = 0; i < M; i++) {
        printf("Ürün %d : \n", i + 1);
        urunu_bas(m.p[i]);
    }
}

void en_yasli(struct magaza m) {
    struct isci yasli = m.e1;

    if (m.e2.yas > yasli.yas)
        yasli = m.e2;
    if (m.e3.yas > yasli.yas)
        yasli = m.e3;

    printf("En yaşlı işçi:\n");
    isciyi_bas(yasli);
}

void ortalama_fiyat(struct magaza m[N]) {
    int i, j;
    float s = 0;

    for (i = 0; i < N; i++) {
        s = 0; // Her magaza için sıfırla
        for (j = 0; j < M; j++) {
            s += m[i].p[j].fiyat;
        }
        printf("%s magazasında yer alan ürünlerin ortalama fiyatı : %.2f\n", m[i].isim, s / M);
    }
}

void bulundugu_mahalle(struct magaza m[N], char q[12]) {
    int i;
    for (i = 0; i < N; i++) {
        if (strcasecmp(m[i].mahalle, q) == 0)
            printf("%s mahallesinde %s magazası bulunur \n", m[i].mahalle, m[i].isim);
    }
}

int main() {
    struct magaza m[N];
    int i;

    for (i = 0; i < N; i++) {
        printf("Magaza %d :\n", i + 1);
        magazayi_olustur(&m[i]);
    }

    for (i = 0; i < N; i++) {
        printf("Magaza %d :\n", i + 1);
        magazayi_bas(m[i]);
    }

    en_yasli(m[0]);
    ortalama_fiyat(m);
    bulundugu_mahalle(m, "sisli");

    return 0;
}
//--------------------------------------------------------------------------------
//Struct Fiyat Agirlik Hesaplama-Meyve Sepeti-
//--------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 2// 2 mevye icin



struct meyve{
    char isim[20];
    float agirlik;
    char form[20];
    int sayi;
    float fiyat;

};

typedef struct
{
    struct meyve f[N];
}sepet;

void meyveyi_olustur(struct meyve *c)
{
    printf("Meyvenin adini giriniz:\n");
    scanf("%s",c->isim);
    printf("Meyvenin agirligini giriniz: \n");
    scanf("%f",&c->agirlik);
    printf("Meyvenin formunu giriniz: \n");
    scanf("%s",c->form);
    printf("Meyvenin sayisini giriniz: \n");
    scanf("%d",&c->sayi);
    printf("Meyvenin fiyatini giriniz: \n");
    scanf("%f",&c->fiyat);
}


void sepeti_olustur(sepet *c)
{
    int i;
    for(i=0;i<N;i++)
    {
        meyveyi_olustur(&c->f[i]);
    }
}

void agirligi_hesapla(sepet s,float *hesap)
{
    int i;
    *hesap=0;
    for(i=0;i<N;i++)
    {
        *hesap = *hesap +(s.f[i].agirlik*s.f[i].sayi);
    }
}

void fiyati_hesapla(sepet s,float *fiyat)
{
    *fiyat=0;
    int i;
    float seklegore = 0;
    for(i=0;i<N;i++)
    {
        seklegore=s.f[i].fiyat;
        if(strcmp(s.f[i].form,"yuvarlak")==0)
        {
            seklegore = seklegore*2;
        }
        if(s.f[i].agirlik > 200)
        {
            seklegore = seklegore+3;
        }
        *fiyat=*fiyat+(seklegore*s.f[i].sayi);
    }
}

int main()
{

    float a,b;
    sepet p;
    sepeti_olustur(&p);
    agirligi_hesapla(p,&a);
    fiyati_hesapla(p,&b);//b artik fiyat oldu
    printf("\nToplam Agirlik: %f\n",a);
    printf("\nToplam Fiyat  : %f\n",b);

}
















