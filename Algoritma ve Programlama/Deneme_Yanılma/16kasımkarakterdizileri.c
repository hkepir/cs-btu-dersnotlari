#include <stdio.h>
#include <string.h>
#include <stdlib.h>//strlen,strcat,strcpy,strcmp
#include <time.h>

int main(){

   /* int a=10;
    while(a<15){
        for(int b=1;b<3;b++){
            printf("%3d%3d\n",a,b);
            a++;
            printf("%3d%3d\n",a,b);
        }
    }*/
    /*int a =10;
        do
        {
            int b=1;
            do{
                printf("%d%d\n",a,b);
                ++b;
            }while(b<=5);
            printf("%d%d\n",a,b);
            a+=2;
        }while(a!=16);*/


   /* for(int n=0;n<=5;n++){
        for(int j=1;j<=5;j++){
            for(int i=5;i>=0;i--){
            printf(" ");
            }
        printf("*");
        }
    printf("\n");
    }*/

//Tek Boyutlu Sayý Dizisi Deger Alma ve Bastýrma

//for ..........................................
   /* int sayilar[3];
    for(int i=0;i<3;i++){
        scanf("%d",&sayilar[i]);
    }
    for(int i=0;i<3;i++){
        printf("%d\n",sayilar[i]);
    }*/
 //while........................................//ayný sayacý kullanýyorken dikkat sayac sýfýrlamsý yapmak gerekir
       /* int sayilar[3];
        int i=0;
        while(i<3){
            scanf("%d",&sayilar[i]);
            i++;
        }
        i=0;
        while(i<3){
            printf("%d\n",sayilar[i]);
            i++;
        }
    return 0;*/

//do while.....................................
   /* int sayilar[3];
    int i=0;
    do{
        scanf("%d",&sayilar[i]);
        i++;
    }while(i<3);
    i=0;
    do{
        printf("%d",sayilar[i]);
        i++;
    }while(i<3);*/

//Çok Boyutlu Diziler

    /*int meyve[5]={1,2,3,4,5};
    printf("%d\n",meyve[0]);

    int elma[2][2]= {{10,20},{30,40}};
    printf("%d\n",elma[0][0]);*/

//-----EGZERSIZLER----9*9luk birim matris

   /* int matris [10][10];
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i==j){
                matris[i][j]=1;
            }else{
                matris[i][j]=0;
            }
        }
    }


    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%4d",matris[i][j]);
            }
            printf("\n");
            }*/


//------nxp eleman içeren iki matris toplami

    /*int matris1[2][3]={{1,2,3},{3,2,1}};

    for(int i=0;i<2;i++){//i satýr temsil eder
        for(int j=0;j<3;j++){//j sütun temsil eder
            printf("%4d",matris1[i][j]);
        }
        printf("\n\n");
    }

   int matris2[2][3]={{10,20,30},{10,20,30}};

    for(int i=0;i<2;i++){//i satýr temsil eder
        for(int j=0;j<3;j++){//j sütun temsil eder
            printf("%6d",matris2[i][j]);
        }
        printf("\n\n");
    }

    int toplam_matrisi[2][3];
    for(int i=0;i<2;i++){//i satýr temsil eder
        for(int j=0;j<3;j++){//j sütun temsil eder
            printf("%6d",toplam_matrisi[i][j]=matris1[i][j]+matris2[i][j]);
        }
        printf("\n");
    }*/

//iki matrisin carpimi
   /* int a[2][2]={{1,4},{2,1}};
    int b[2][2]={{3,2},{1,1}};
    int ab[2][2]={0};
    int i,j,k,toplam;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(toplam=0,k=0;k<2;k++){
                    toplam+=a[i][k]*b[k][j];
                    ab[i][j]=toplam;

            }
            printf("%4d",ab[i][j]);
        }
    printf("\n");

    }*/


    /*int a[2][2] = {{1, 4}, {2, 1}};
    int b[2][2] = {{3, 2}, {1, 1}};
    int ab[2][2] = {0}; // İlk başta tüm elemanları 0 olarak başlatıyoruz.
    int i, j, k, toplam;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            toplam = 0; // Toplamı sıfırlıyoruz
            for(k = 0; k < 2; k++) {
                toplam += a[i][k] * b[k][j];
            }
            ab[i][j] = toplam; // Sonucu matrise yazıyoruz
        }
    }

    // Sonuç matrisini ekrana yazdırma
    printf("ab matrisi:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("%4d", ab[i][j]);
        }
        printf("\n");
    }

*/

//include <stdio.h>
//#include <stdlib.h>


   /*int a[10];
    int i;

    // Rastgele sayılar üretmek için rastgele sayı üreticisini başlatmıyoruz
    // srand(time(0));

    // Diziye rastgele değerler atıyoruz
    for(i = 0; i < 10; i++) {
        a[i] = rand() % 100; // 0 ile 99 arasında rastgele değerler
    }

    // Diziyi ekrana yazdırıyoruz
    printf("Dizi elemanları:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");*/




//bir matrisin transpozu

    /*int i,j,n;


    printf("n x n Matrisini Olusturun\n");
    printf("n :");
    scanf("%d",&n);
    int m[n][n];

    srand(time(0));

    for(i = 0; i < n; i++) {
        for(j=0;j<n;j++){
        m[i][j] = rand() % 100;
        }
    }

    printf("Matris:\n");

    for(i = 0; i < n; i++) {
       for(j=0;j<n;j++){
        printf("%4d ", m[i][j]);
        }
    printf("\n");
    }

    printf("Matrisin Transpozu:\n");

    for(i = 0; i < n; i++) {
       for(j=0;j<n;j++){
        printf("%4d ", m[j][i]);
        }
    printf("\n");
    }
*/

//Karakter Dizileri Olusturma

   /* char hilal[]={'h','i','l','a','l','\0'};
    printf("%c\n",hilal[1]);//karakter yazdýrma
    printf("%s\n",&hilal[0]);//string yazdýrma
    printf("%s\n",&hilal[2]);

    char kardesim1[]="hicran";
    printf("%s\n",kardesim1);//string yazdýrma
    printf("%c\n",kardesim1[0]);//karakter yazdýrma*/

    //eger kullanýcýdan alýyorsa boyutu belirtmek zorunda

/*    char metin_gir[100];
    gets(metin_gir);
    printf(metin_gir);
*/

//Karakter Dizilerinde Kullanilan Fonksiyonlar

//<string.h>
//strlen: bir karakter dizisinin boyutu

//sizeof, her tür veri için çalisirken, strlen yalnizca C tarzi stringler için çalisir.

//sizeof derleme zamanýnda çalýþýr ve sabit bir deðer döndürür, strlen ise çalýþma zamanýnda çalýþýr ve string'in içeriðine baðlý olarak deðer döner.

//sizeof null sonlandýrýcýyý hesaba katarak tüm dizinin boyutunu döndürür, strlen ise yalnýzca string'in karakterlerini sayar ve null sonlandýrýcýyý saymaz.




/*      char dizim[] ="Can Boz";

        dizim[0]='H';

        printf("%s",dizim);
*/


/*  char dizi[50];
        printf("Metin Giriniz:");
        gets(dizi);

        printf("\nTek Karakterleri Yazdir\n");
            for(int i=0;dizi[i];i++){
                printf("%c\n",dizi[i]);
            }

        printf("\nTum Karakterleri Yazdir\n");
            printf(dizi);
*/

/*    char dizi1[50];
        printf("Metin Giriniz:");
        gets(dizi1);

        printf("\nTek Karakterleri Yazdir\n");
            for(int i=0;dizi1[i];i++){
                printf("%c\n",dizi1[i]);
            }

        printf("\nTum Karakterleri Yazdir\n");
            printf("%s",dizi1);

*/

//GIRILEN KARAKTER DIZISININ UZUNLUGUNU BULMAK

/*    char dizi2[20];
    int i;
    printf("Lutfen Metni Giriniz:");
    gets(dizi2);

    printf("Uzunluk %d\n",strlen(dizi2));
    printf("Uzunluksizeof=boyut %d",sizeof(dizi2));//dizinin boyutunu verir

*/
//Karakter Dizilerini Birlestirmek_strcat

/*    char metin1[10],metin2[10];

    printf("metin1: ");
    gets(metin1);

    printf("metin2: ");
    gets(metin2);

    strcat(metin1,metin2);

    printf(metin1);
    printf("\n");

//karakter dizilerine direkt atama yapılamamaktadir_strcpy

    strcpy(metin1, "Bursa ");
    strcpy(metin2, "Teknik");

    strcat(metin1,metin2);
    printf(metin1);
    printf("\n");
*/


//Bir Karakter Dizisini Baska Bir Karakter Dizisine Kopyalama

/*    char kaynak[] = "Merhaba Dünya!";
    char hedef[50]; // Hedef karakter dizisinin yeterli boyutta olduğundan emin olun

    // strcpy kullanarak kaynak dizisini hedef dizisine kopyala
    strcpy(hedef, kaynak);

    // Sonucu yazdır
    printf("Kaynak dizisi: %s\n", kaynak);
    printf("Hedef dizisi: %s\n", hedef);

*/









































































































































}
