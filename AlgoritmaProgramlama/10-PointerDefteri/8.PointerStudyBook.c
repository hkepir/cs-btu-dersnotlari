#include<stdio.h>

/*
int main()
{
    int x=5;
    int *xptr = &x;
    //int* xptr = x; adress of burada kullanilmak zorunda
    printf("\nx degiskeninin degeri: %d\n",x);
    printf("x degiskeninin degeri: %d\n",*xptr);
    printf("x degiskeninin adresi: %p\n",&x);
    printf("x degiskeninin adresi: %p\n",xptr);
    printf("xptr tuttugu deger: %d\n",*xptr);
    printf("xptr'nin adresi: %p\n",&xptr);

    printf("\nDegisiklik Yaplim\n");

    *xptr =10;//int x=10; ile ayni sey
    printf("\nx degiskeninin degeri: %d\n",x);
    printf("x degiskeninin degeri: %d\n",*xptr);
    printf("x degiskeninin adresi: %p\n",&x);
    printf("x degiskeninin adresi: %p\n",xptr);
    printf("xptr tuttugu deger: %d\n",*xptr);
    printf("xptr'nin adresi: %p\n",&xptr);

    int y =7;
    int *yptr = &y;
    *xptr = y;
    printf("\nx degiskeninin degeri: %d\n",x);
    printf("x degiskeninin degeri: %d\n",*xptr);
    printf("x degiskeninin adresi: %p\n",&x);
    printf("x degiskeninin adresi: %p\n",xptr);
    printf("xptr tuttugu deger: %d\n",*xptr);
    printf("xptr'nin adresi: %p\n",&xptr);

    printf("\ny degiskeninin degeri: %d\n",y);
    printf("y degiskeninin degeri: %d\n",*yptr);
    printf("y degiskeninin adresi: %p\n",&y);
    printf("y degiskeninin adresi: %p\n",yptr);
    printf("yptr tuttugu deger: %d\n",*yptr);
    printf("yptr'nin adresi: %p\n",&yptr);

    *yptr =NULL;
    printf("\ny degiskeninin degeri: %d\n",y);
    printf("y degiskeninin degeri: %d\n",*yptr);
    printf("y degiskeninin adresi: %p\n",&y);
    printf("y degiskeninin adresi: %p\n",yptr);
    printf("yptr tuttugu deger: %d\n",*yptr);
    printf("yptr'nin adresi: %p\n",&yptr);

    //Pointer'a Okutmak ve Yazdirmak

    printf("\nyptr pointerinin icine hangi degeri vermek istersin:\n");
    scanf("%d",yptr);
    printf("Pointerda tutulan adres %p\n",yptr);
    printf("Pointerdaki adresin degeri %d\n",*yptr);
    printf("Pointerin adresi %p\n",&yptr);

   printf("yptr pointeri icindeki degeri 5 ile topladiginda sonuc = %d \n",*yptr + 5);
   printf("yptr pointeri icindeki degeri 2 ile topladiginda sonuc = %d \n",y+2);
   printf("yptr pointeri icindeki degeri 6 ile carpildiginda sonuc = %d \n",6*y);
   printf("yptr pointeri icindeki degeri 6 ile carpildiginda sonuc = %d \n",(*yptr)*6);
}
*/
//PASS-BY-VALUE

//Bir fonksiyona arguman olarak bir degerin gecisi, kopyalanarak yapýlýr.
//Bu fonksiyonun orijinal degiskeninin kopyasi uzerinde islem yaptigi anlamina gelir
/*
    void fonksiyon(int x)
    {
        x+=20;
        printf("sonuc:%d\n",x);
    }

    int main()
    {
        int a = 10;
        fonksiyon(a);
        printf("a: %d\n",a);
        return 0;
    }

*/

//PASS-BY-REFERENCE
//Fonksiyon icinde yapilan degiskenler, orilinal degiskeni degistirir
//Dizileri de parametre olarak kullandigimizda dizinin uzerinde islemler kalici olarak gerceklesir

/*
void fonksiyon(int *y)
{
*y+=20;
printf("sonuc:%d\n",*y);
}

int main()
{
    int a =10;
    fonksiyon(&a);
    printf("a: %d\n",a);
    return 0;
}
*/

int kendi_strlenimiz(char kelime[])
{
    int u = 0;

    while(kelime[u]!='\0')
    {
        u++;
        if(kelime[u]=='T')
        {
            kelime[u] ='W';
        }
    }

    return u;
}
/*
int main()
{
    char metin[]="BURSA TEKNIK";
    printf("Metin Fonksiyondan Once: %s\n",metin);
    printf("%s'in uzunlugu %d\n",metin,kendi_strlenimiz(metin));
    printf("Metin Fonksiyondan Sonra: %s\n",metin);
}
*/


//return komutu fonksiyondan sadece bir deger dondurebilir.
//Oysa (pass-by-reference ) kaynak parametrelerini kullanarak bir fonksiyondan istedigimiz sayida deger dondurebiliriz.


void yerdegistir(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
int main()
{
  int sayi1=9;
  int sayi2=10;
  printf("sayi1:%d ,sayi2:%d\n",sayi1,sayi2);
  yerdegistir(&sayi1,&sayi2);
  printf("DegisTokus sayi1:%d, sayi2:%d\n",sayi1,sayi2);

  int no1, no2;
  printf("\nIki sayi giriniz:\n");
  scanf("%d %d",&no1,&no2);
  yerdegistir(&no1,&no2);//Bu fonksiyonda return komutu kullanmadan degisen degerler main fonk. bildirildi.
  printf("%d %d",no1,no2);
}
*/

//Uc Sayiyi Siraya Dizme
/*
int main()
{
    int x,y,z;
    printf("Sirayla uc sayi giriniz:");
    scanf("%d %d %d",&x,&y,&z);
    printf("\nSiralama yapmadan once: %d,%d,%d\n",x,y,z);
    if(x>y)
        yerdegistir(&x,&y);
    if(x>z)
        yerdegistir(&x,&z);
    if(y>z)
        yerdegistir(&y,&z);
    printf("Sayilarin sirali hali: %d<%d<%d\n",x,y,z);
}
*/

//Kirmizi Kitap Ornekler
//Soru 1
/*
int main()
{
    int a=1,b=5;
    int *ag=&b;
    a = *ag;
    //*ag=b;
    printf("Pointerin tuttugu adres\n");
    printf("%X\n",ag);
    printf("%p\n",ag);
    printf("%p\n",&b);//pointer b nin adresini tutar b nin icerigini tutar

    printf("Pointerin icindeki deger %d\n",*ag);
    printf("a:%d\n",a);
    printf("b:%d\n",b);
}
*/
//Soru 2
/*
int main()
{
    int a=3,b=4;
    int *g1,*g2;


    g1=&a;//ya da int *g1 = &b;
    g2=NULL;// Hata *g2 =NULL; OLMAZ!!!

    //Hata *g2=&b; Hata *g1=&b;// Cunku *g2 ve *g1 pointer icerigidir.

    g1=&b;
    g2=&b;
    //Takas Islemi
    g2=&a;
    g1=&b;

    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("*g1: %d\n", *g1); // g1'in gösterdiði deðer
    printf("*g2: %d\n", *g2); // g2'nin gösterdiði deðer return 0
    printf("g1 isaret ettigi adres %p\n",g1);
    printf("g2 isaret ettigi edres %p\n",g2);
    printf("a nin adresi %p\n",&a);
    printf("b nin adresi %p\n",&b);
}
*/
//Soru 3
/*
int main()
{
    double sayi1=1.2,sayi2;
    double *agos1, *agos2;
    agos1=&sayi1;
    agos2=&sayi2;
    printf("%.2lf\n",*agos1);//pointer icerigi 1,2
    printf("Reel bir sayi giriniz:");
    scanf("%lf",agos2);

    agos1=&sayi2;//agos1=agos2 de kullanýlabilir

    printf("agos1:%.2lf\n",*agos1);
    printf("agos2:%.2lf\n",*agos2);

    printf("sayi2 nin adresi %p\n",&sayi2);
    printf("agos2 icinde tuttugu adres %p\n",agos2);
}
*/
//Soru 4
/*
void komik(int*u,int*v,int*y,int*z)
{
    scanf("%d %d %d %d",u,v,&y,z);
}
int main()
{
    int a=1,b=2,c=3,d=4;
    komik(&a,&b,c,&d);
    printf("%d %d %d %d\n",a,b,c,d);
    komik(&d,&c,b,&a);
    printf("%d %d %d %d\n",a,b,c,d);
    return 0;
}
*/

//Soru 6
/*
void dortislem(int* sayi1,int* sayi2 )
{
printf("%d + %d = %d\n",*sayi1,*sayi2,(*sayi1+*sayi2));
printf("%d - %d = %d\n",*sayi1,*sayi2,(*sayi1-*sayi2));
printf("%d x %d = %d\n",*sayi1,*sayi2,(*sayi1)*(*sayi2));
printf("%d / %d = %d\n",*sayi1,*sayi2,(*sayi1)/(*sayi2));
}

int main()
{
    int x,y;
    printf("Sayi giriniz:\n");
    scanf("%d %d",&x,&y);
    dortislem(&x,&y);
}
*/
//Soru 6
//fonksiyonun icinde deger alma
/*
void dortislem(int* sayi1,int* sayi2 )
{
printf("Sayi giriniz:\n");
scanf("%d %d",sayi1,sayi2);

printf("%d + %d = %d\n",*sayi1,*sayi2,(*sayi1+*sayi2));
printf("%d - %d = %d\n",*sayi1,*sayi2,(*sayi1-*sayi2));
printf("%d x %d = %d\n",*sayi1,*sayi2,(*sayi1)*(*sayi2));
printf("%d / %d = %d\n",*sayi1,*sayi2,(*sayi1)/(*sayi2));
}

int main()
{
    int x,y;
    dortislem(&x,&y);
}
*/

//Soru 7
/*
void hesapla (int*t,int*h,int*dk,int*sn)
{
*h=*t/3600;//fonksiyon icinde pointerlara deger atamasi yapilirken * ile o degere gidilir
*dk=(*t-(*h*3600))/60;
*sn=*t-(*dk*60)-(*h*3600);
printf("Yolculuk %d saat %d dakika %d saniye surer.\n",*h,*dk,*sn);



}

int main()
{
    int saniye,saat,dakika,kalanSaniye;
    printf("Yolculugun kac saniye surdugunu giriniz:\n");
    scanf("%d",&saniye);
    hesapla(&saniye,&saat,&dakika,&kalanSaniye);
}
*/
//Soru 8

// Basamak hesaplama fonksiyonu
/*
void basamak(int *s, int *b, int *o, int *y)
{
    *b = *s % 10;       // Birler basamağı
    *o = (*s / 10) % 10; // Onlar basamağı
    *y = *s / 100;      // Yüzler basamağı

    printf("Birler basamagi: %d\n", *b);
    printf("Onlar basamagi: %d\n", *o);
    printf("Yuzler basamagi: %d\n", *y);
}

int main()
{
    int sayi, birler, onlar, yuzler;

    printf("Uc basamakli bir sayi giriniz:\n");
    scanf("%d", &sayi);

    basamak(&sayi, &birler, &onlar, &yuzler);

    printf("Sonuc:\n");
    printf("Birler basamagi: %d\n", birler);
    printf("Onlar basamagi: %d\n", onlar);
    printf("Yuzler basamagi: %d\n", yuzler);

    return 0;
}
*/


//Soru 9
/*
void dikdortgen(int* en, int*boy)
{
    printf("Dortgen Alan: %d\nDortgen Cevre: %d\n",(*en)*(*boy),(*boy+*en)*2);
}
int main()
{
    int kenar1,kenar2;
    printf("Kenar Uzunluklarini Giriniz:\n");
    scanf("%d %d",&kenar1,&kenar2);
    dikdortgen(&kenar1,&kenar2);
}
*/


//Soru 10 Fonksiyon kullanmadan

void enBuyukUcEleman(int *dizi, int boyut, int *birinci, int *ikinci, int *ucuncu) {
    *birinci = *ikinci = *ucuncu = -1;

    for (int i = 0; i < boyut; i++)
    {
        if (*(dizi + i) > *birinci) {
            *ucuncu = *ikinci;
            *ikinci = *birinci;
            *birinci = *(dizi + i);
        } else if (*(dizi + i) > *ikinci) {
            *ucuncu = *ikinci;
            *ikinci = *(dizi + i);
        } else if (*(dizi + i) > *ucuncu) {
            *ucuncu = *(dizi + i);
        }
    }
}

int main()
{
    int i;
    int dizi[10];
    int birinci, ikinci, ucuncu;

    // Dizinin elemanlarını kullanıcıdan alma
    printf("Lutfen 10 eleman giriniz:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &dizi[i]);
    }

    // En buyuk uc elemani bulma
    enBuyukUcEleman(dizi, 10, &birinci, &ikinci, &ucuncu);

    // En buyuk uc elemani yazdirma
    printf("En buyuk uc eleman: %d %d %d\n", birinci, ikinci, ucuncu);

    return 0;
}
























