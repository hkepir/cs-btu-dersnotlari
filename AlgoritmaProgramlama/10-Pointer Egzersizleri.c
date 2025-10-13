#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    //Kullanıcıya kaç elemanlı bir sayı dizisi oluşturmak istediğini sorun
    //Pointer kullanarak elemanları tek tek alın ve console a bastırın

    int arr[100];
    int N;
    int *ptr;
    ptr=arr;

    printf("Dizi kac elemanli olsun\n");
    scanf("%d",&N);

    printf("Lutfen elemanlari giriniz\n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=arr;//onemli
    printf("Degerlerim:\n");
    for(int i=0; i<N; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }

    return 0;
}
//-------------------------------
//Yukaridaki kodun gelismis hali
//-------------------------------
#include <stdio.h>

// Diziyi ekrana basan fonksiyon
void printArray(int* arr, int length)
{
    for (int i = 0; i < length; i++)
        printf("%d\n", arr[i]);
}

// Kullanıcıdan dizi elemanlarını alan fonksiyon
void getInput(int* arr, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        printf("Dizi elemanı girin [%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int dizi[10] = {1, 2, 3, 4, 5}; // Başlangıçta 5 elemanlı dizi tanımlandı.
    int* diziptr = dizi;

    // Kullanıcıdan 5 yeni eleman almak için fonksiyonu çağırıyoruz.
    getInput(dizi, 5, 10);

    int length = sizeof(dizi) / sizeof(dizi[0]);

    printf("Dizi elemanları:\n");
    printArray(dizi, length);

    printf("Dizi elemanları (işaretçi ile):\n");
    printArray(diziptr, length);

    return 0;
}

//-------------------------------
//sizeof bayt cinsinden boyutu verir sizeof(dizi) 20 bayttir.
// dizinin uzunlugunu bulmak için sizeof(dizi)/sizeof(dizi[0]
#include<stdio.h>


int main()
{
    int dizi[]= {1,2,3,4,5};
    int* diziptr;

    //for(int i=4;i<10;i++)
    //scanf("%d",dizi[i]);

    for(int i=0; i<sizeof(dizi)/sizeof(dizi[0]); i++)
        printf("%d\n",dizi[i]);

    diziptr = dizi;//*diziptr= &dizi; hatadir diziptr pointerina dizi atanacak

    for(int i=0; i<sizeof(dizi)/sizeof(dizi[0]); i++)
        printf("%d\n",*(diziptr+i));

}
//---------------------------------------
//Yeni Diziye Eski Diziyi Kopyalama
//---------------------------------------
#include <stdio.h>
#include <stdlib.h> // malloc ve free fonksiyonları için gerekli

void copyArray(int* src, int* dest, int length) {//destination: kaynak //source:hedef
    for (int i = 0; i < length; i++) {
        dest[i] = src[i];
    }
}

int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int length = sizeof(dizi) / sizeof(dizi[0]);

    // Yeni dizi için bellek ayırma
    int* yeni_dizi = (int*)malloc(length * sizeof(int));
    if (yeni_dizi == NULL) {
        printf("Bellek ayırma başarısız.\n");
        return 1;
    }

    // Eski diziden yeni diziye elemanları kopyalama
    copyArray(dizi, yeni_dizi, length);

    printf("Eski dizi elemanları:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("Yeni dizi elemanları:\n");
    for (int i = 0; i < length; i++) {
        printf("%d ", yeni_dizi[i]);
    }
    printf("\n");

    // Ayrılan belleği serbest bırakma
    free(yeni_dizi);

    return 0;
}
//----------------------------------------------------
//eleman aranan eleman kacinci eleman benim yazdigim
//----------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Kac elemanli dizi girilecek:\n");
    scanf("%d",&n);

    int* dizi=(int*)malloc(n*sizeof(int));

    //int length= sizeof(dizi)/sizeof(dizi[0]); Not: dinamik dizilerde int pointerlar genellikle 8 bayt yer tutar bu nedenle bu satir eleman sayisini dogru bir sekilde hesaplamaz

    printf("Dizi elemanlarini giriniz\n");
    for(int i=0; i<n;i++){
        scanf("%d",&dizi[i]);//  scanf("%d",*(dizi+i));
    }

    for(int i=0; i<n;i++){
        printf("%d\n",dizi[i]);
    }

    int aranan;
    printf("Kacinci elemani ariyorsunuz?\n");
    scanf("%d",&aranan);

    for(int i=0;i<n;i++){
        if(*(dizi+i)==aranan)
            printf("%d. Eleman:  %d",i+1,dizi[i]);
    }
}
//----------------------------------------------------
//udemy de yapilan AI ile gelistirdim
//----------------------------------------------------

#include <stdio.h>
// Diziyi elemanlarını girdi alma fonksiyonu
void diziyi_yazdir(int *dizi, int boyut);

// Dizide eleman arama fonksiyonu
int eleman_ara(int *dizi, int boyut, int aranan);

int main() {
    int dizi[100];
    int boyut, arananEleman, aramaSonucu;

    printf("Dizimiz kaç elemanlı olsun:\n");
    scanf("%d", &boyut);

    printf("Dizimizin elemanlarını giriniz:\n");
    diziyi_yazdir(dizi, boyut);

    printf("Hangi elemanı arıyorsunuz:\n");
    scanf("%d", &arananEleman);

    aramaSonucu = eleman_ara(dizi, boyut, arananEleman);

    if (aramaSonucu == -1) {
        printf("%d elemanı dizide bulunmuyor.\n", arananEleman);
    } else {
        printf("%d elemanı %d. pozisyonda bulunuyor.\n", arananEleman, aramaSonucu + 1);
    }

    return 0;
}

// Dizide eleman arama fonksiyonu
int eleman_ara(int *dizi, int boyut, int aranan) {
    int indeks = 0;

    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            return i;
        }
    }

    return -1;
}

// Diziyi elemanlarını girdi alma fonksiyonu for ile
void diziyi_yazdir(int *dizi, int boyut) {
    for (int i = 0; i < boyut; i++) {
        scanf("%d", &dizi[i]);
    }
}
// Diziyi elemanlarını girdi alma fonksiyonu while ile

void  bastir(int  *array,int  size)
{

    int *arrEnd;
    arrEnd = (array +size -1);

    while (array <= arrEnd)
    {
        scanf("%d",array++);
    }
}
//----------------------------------------------------
//Faktoriyel
//----------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int* psayi);
int main()
{
    int n,sayi;
    printf("Faktoriyeli hesaplanacaak sayi:\n");
    scanf("%d",&n);
    sayi = n;
    printf("Sonuc: %d",faktoriyel(&n));
}

int faktoriyel(int*psayi)
{
    int sonuc =1;
    int i=*psayi;
    for(;i>=1;i--){
        sonuc*=i;
    }
return i;
}
//----------------------------------------------------
//----------------------------------------------------

int sayi[4];

int* ptr;

ptr=sayi;

scanf("%d",&sayi[0]);// scanf("%d",ptr); ptr++; aynı sey

//------------------------------------------------------
//Karakter Dizisi Boyu
//------------------------------------------------------

#include<stdio.h>
#include<stdlib.h>

//pointer strlen
//while ile

int main()
{

    char metin[100];
    char *p;

    printf("Bir metin giriniz:\n");
    gets(metin);
    int sayac=0;
     p=metin;
    while(*p!='\0')
    {
    p++;
    sayac += 1;
    }
    printf("metin %d kadar karakterden olusmaktadir\n",sayac);
    printf("saglama: %d",strlen(metin));
}

//for dongusu ile
int main()
{

    char metin[10];
    char *p;

    printf("Bir metin giriniz:\n");
    gets(metin);
    int sayac=0;
    for(p=metin;*p!='\0';p++)
    {
        sayac += 1;
    }
    printf("metin %d kadar karakterden olusmaktadir\n",sayac);
    printf("saglama: %d",strlen(metin));
}

//--------------------------------------------------------------------
//Karakter Dizisi Harf Yok Etme
//--------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char metin[100];
    char *p;
    char h;

    printf("Bir metin giriniz:\n");
    gets(metin);

    printf("Silinecek karakteri sec:");
    scanf("%c",&h);

    for(p=metin; *p ;p++){//dongu kosulu sifir degilse(true)dongu calismaya devam eder
        if(*p == h)        //sifir veya terminating karakter('\0') ise dongu sonlanır (false)
            strcpy(p,p+1);
    }

    printf("Silinmis hali: %s",metin);

}
//--------------------------------------------------------------------
//Sayi Dizisi Tekler ve Ciftler
//--------------------------------------------------------------------


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int sayidizisi[]={1,2,3,4,5,6,7,8,9};
    int *p;
    int i;

    printf("\nDizinin ilk hali:\n");
    for(i=0;i<9;i++){
        printf("%4d",*(sayidizisi+i));
    }
    printf("\nDizideki Cift\n");
    for(i=0;i<9;i+=2){
        printf("%4d",*(sayidizisi+i));
    }
    printf("\nDizideki Tek\n");
    for(p=sayidizisi+1;p<sayidizisi+9;p+=2){
        printf("%4d",*p);
    }
    return 0;
}
//----------------------------------------------------------------------
//2 pointer ve bir for dongusu kullanarak diziyi kopyalayin
//----------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#define MAX 15

int main()
{
    char dizi[MAX]={'k','l','b','d','q','i','s','t','e','f','o','r','c','h','x'};
    char *sayi1;
    char *sayi2;
    char dizi_kopya[MAX];
    int i;

    sayi2=dizi_kopya;

    for(sayi1=dizi;sayi1<dizi+MAX;sayi1++)
    {
        *sayi2=*sayi1;
        sayi2++;

    }
    printf("Original tablo : ");

    for(i=0;i<MAX;i++)
    {
        printf("%c",*(dizi+i));
    }
    printf("\nKopya Tablo :");
    for(i=0;i<MAX;i++)
    {
        printf("%c",*(dizi_kopya+i));
    }

    return 0;
}
//----------------------------------------------------------------------
//Pointer Kullanarak Sayi Dizilerini Birlestirme
//----------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int can[100],canan[100];
    int *sayi1,*sayi2;
    int n,m;
    int i;

    printf("Ilk dizimizin eleman sayisi (max 50) : \n");
    scanf("%d",&n);
    for(sayi1=can;sayi1<can+n;sayi1++)
    {
        printf("Eleman %d : ",sayi1-can);
        scanf("%d",sayi1);
    }
    printf("Ikinci dizimin eleman sayisi : \n");
    scanf("%d",&m);
    for(sayi2=canan;sayi2<canan+m;sayi2++)
    {
        printf("Eleman %d :",sayi2-canan);
        scanf("%d",sayi2);
    }

    printf("Ilk dizimiz : \n");

    for(i=0;i<n;i++)
    {

        printf("%4d",*(can+i));
    }

    printf("\nIkinci tablomuz : \n");
    for(i=0;i<m;i++)
    {
        printf("%4d",*(canan+i));
    }

    for(sayi1=can+n,sayi2=canan;sayi2<canan+m;sayi1++,sayi2++)
    {
        *sayi1=*sayi2;
    }
    printf("\n");

    printf("Birlestirmeden sonra : \n");
    for(i=0;i<n+m;i++)
    {
        printf("%4d",*(can+i));
    }


    return 0;
}
//----------------------------------------------------------------------
#include<stdio.h>
#include<stdlib.h>

void swap(int *dizibas,int n)
{
    int temp;
    int* dizison;
    int sayac = 0;
    dizison = dizibas+n-1;

    while(dizibas<dizison){
    temp= *dizibas;
    *dizibas=*dizison;
    *dizison=temp;

    dizibas++;
    dizison--;
    sayac++;
    }

    dizibas -= sayac;
    //Fonksiyon icinde yazdirma islemi

    for(int i=0;i<n;i++){
        printf("%d\n",*(dizibas+i));
   }

}



int main()
{

    int n;
    printf("Dizinin eleman sayisini giriniz:");
    scanf("%d",&n);
    int i;
    int* pdizi=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Eleman girin:\n");
        scanf("%d",pdizi+i);
    }
    for(i=0;i<n;i++){
        printf("%d. Eleman :%d\n",i+1,*(pdizi+i));
    }
    printf("Dizinin yer degistirmis hali:");
    swap(pdizi,n);

    //Ana Fonksiyon icinde yazdirma islemi
/*
    for(i=0;i<n;i++){
        printf(" %d ",*(pdizi+i));
    }
*/
    free(pdizi);
}









