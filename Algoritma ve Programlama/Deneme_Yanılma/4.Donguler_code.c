#include <stdio.h><time.h><math.h>
int main()
{
    /*
        int i=0;
        while(i<=10){
            printf("%d\n",i);
            i++;
    }
        int sayac=1;
        while (sayac<11){
            sayac+=sayac; //eger sayac bu satırda olsaydı döngü 0-10 sayılarını yazdırır sonra 2,4,6,8,16 merhaba yazardı
            printf("%d Merhaba\n",sayac);
            //sayac++;
        }
    */

    /*int sayac=1;
        while (sayac<11){
            printf("Merhaba");
            printf(" %d Dunyali\n",sayac);
            sayac+=1;//sayac=sayac+1; ++sayac;

        }*/
    /* int n;
     printf("bir pozitif sayi giriniz\n");
     scanf("%d",&n);
     while(n>=0){
     printf("%d\n",n);
     n--;
    }

         printf("programdan cik...");*/


    /*for(int i =21;i<=50;i+=2){ //for(initialization;condititon;iteration)
          printf("%d\n",i);
      }*/



//20-50 arasindaki tek sayilari ekrana yazdiran program
    /*for(int i=20;i<=50;i++){
        if(i%2==1)
            printf("%d\n",i);
    }*/


//500 den 1 ye kadar 3'e ve 7'ye tam bolunen sayilar
    /*for(int i=500;i>=1;i-=1){
        if(i%3==0&&i%7==0)
            printf("%d\n",i);
    }*/


//Sonsuz Döngü-infinite_loop
    /* for(int x,sayac=1;x=5;sayac<11){//for dongulerinde kosul belirtilmezse sonsuz döngü olur!!!
         printf("%d Dunya %d\n",sayac,x);
         sayac++;
         x*=2;
    }
     for( ; ; )
         printf("BTU");*/



//kod2:Kullanicidan 3 (daha fazla da olabilir) adet sayı okuyup en büyüğünü ekrana yazdıran kod
//kod1:kullanıcıdan 2 sayi al ve kosul ile bunu yap
    /*
        int a,b;
        printf("Haydi Karsilastir,Hangi sayi daha buyuk???\t\n");
        int sayac=0;//500 kere bu donguyu calıstırabilsin
        while(sayac=500){
            printf("\nIki sayi gir:");
        scanf("%d %d",&a,&b);
        if(a>b)
            printf("%d>%d",a,b);//printf("%d buyuktur %d",a,b);
        else if(a==b)
            printf("%d=%d",a,b);
        else
            printf("%d<%d",a,b);
        sayac++;
    }
            return 0;
    */

    /*       int x,y,z;
            printf("Uyari bu program 10 kez calistiktan sonra kapanacaktir!");

            for(int i=0;i<=10;i++){
            printf("\n\n3 Adet Sayi Gir:");
            scanf("%d %d %d",&x,&y,&z);

            if(x>y&&x>z)
                printf("En Buyuk Sayi :%d",x);
            else if (y>x&&y>z)
                printf("En Buyuk Sayi :%d",y);
            else
                printf("En Buyuk Sayi :%d",z);
            }
            return 0;

    */

    //ternary ile

    /*      int sayac=0;
            do{
            int x,y,z;
            printf("\n\n3 Adet Sayi Gir:");
            scanf("%d %d %d",&x,&y,&z);
            (x>y&&x>z)?printf("En buyuk sayi:%d",x):(y>x&&y>z)?printf("En buyuk sayi:%d",y):printf("En buyuk sayi:%d",z);
            sayac++;
            }while(sayac<=2);
    */
    /*        int girilen,i,eb=0;
            for(int i=0;i<10;i++){
                scanf("%d",&girilen);
                if(girilen>eb)
                    eb=girilen;
            }
            printf("en buyuk sayi:%d",eb);

            return 0;
    */

//-1 girilene kadar dongu devam etsin sartı

    /*    int girilen,i,eb=0;
            for(int i=0;i<3;i++){
                scanf("%d",&girilen);
                if(girilen>eb)
                    eb=girilen;
                if(girilen==-1)
                break;

            }

            printf("en buyuk sayi:%d",eb);

            return 0;
    */
//-------------------------------------------------------------------hata_düzeltildi---------------------------------------------------------------------------------

//-1 girilene kadar sayiların ortalamasını bulan kod

    /*int toplam=0,girilen=0,n=0;
     float ort;
     while(girilen!=-1){
         scanf("%d",&girilen);
         n++;
         toplam+=girilen;
     }
     printf("ortalama:%f",((float)toplam+1)/(n-1));*/


//0 girene kadar sayıların toplamı-------------------------alt alta girince çalışıyor yan yana girince hata veriyor nasıl düzeltebilirim-----------------
    /* int toplam=0;
     int x;
     int y=3;
        for( ;y==3; ){
        printf("Sayiyi Gir:");
        scanf("%d",&x);
        fflush(stdin);//girdi tamponunu temizler

        if(x==0){
            printf("Toplam:%d\n",toplam);
            y=4;// break;
            break;
        }
        else
            toplam+=x;
        }
        printf("Finish...\n\t\a");*/
//eger kullanıcı boyle yaparsa scanf veriyi tüm veriyi tek kararter bufferinin içine aldı



    /*
        int toplam = 0;
        int x;
        int y = 3;

        while (y == 3) {
            printf("Sayiyi Gir: ");
            if (scanf("%d", &x) != 1) {
                // Eğer giriş bir sayı değilse, buffer'ı temizle
                while (getchar() != '\n');
                printf("Lutfen gecerli bir sayi girin.\n");
                continue;
            }

            if (x == 0) {
                printf("Toplam: %d\n", toplam);
                y = 4; // break;
                break;
            } else {
                toplam += x;
            }
        }

        printf("Finish...\n\t\a");
        return 0;

    */



//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//if*swich case tekrar


    /*char harf;
    scanf("%c",&harf);*/

    /*if(harf=='a'||harf=='A')//------1.kod
      printf("A harfi girdin\n");
    else
      printf("Baska bir harf girdin");*/
    /*switch(harf){
    case'a':
    case'A':
      printf("A harfi girdin");
      break;
    default:
      printf("Baska bir harf girdin");//-----2.kod
    }*/

    /* switch(harf){
     case'a':
     case'e':
     case'i':
     case'o':
     case'u':
     case'A':
     case'E':
     case'I':
     case'O':
     case'U':
         printf("Sesli harf girdiniz\n");//case yapısının altına birden fazla fonksiyon tanımlanabilir süslü paranteze gerek yoktur.
         printf("aferin");
         break;
     default:
         printf("Sessiz harf girdiniz");
     }/*

    /*if(harf=='a'||harf=='e'||harf=='i'||harf=='o'||harf=='u')
     printf("sesli harf");
    else if(harf='b')//else if içine de harf=='b' yapmam gerekmez mi neden hata almıyorum???-----------------SORU111111111111111111111111111111111111111111111
     printf("sessiz harf");
    else
     printf("sessiz harf");*/


//------------------------------------------------------------------------------------------------------------------------------------------------------------
//girilen sayinin asal olup olmadigini bulan kod***flag***
//1verimsizkod

    /* int x,i;
     printf("bir sayi giriniz");
     scanf("%d",&x);

     for(i=2;i<x;i++){
         if(x%i==0)
             break;
     }
     if(x==i)
       printf("%d asal sayidir\n",x);
     else
         printf("%d asal sayi degildir",x);*/


//1-50 arasındaki asal sayıları yazdıran algoritma

    /*int h,k;
    for(h=2;h<=50;h++){
        for(k=2;k<h;k++){
        if(h%k==0)
            break;
        }
    if(h==k)
        printf("%d\n",h);
    }*/

    /*int sayi,flag;
    for(sayi=2;sayi<=50;sayi++)
       flag=1;
           for(int x=sayi-1;x>=2;x--){
               if(sayi%x==0)
               printf("Sayi asal degil");

           else
           flag=0;
           break;
    }*/










//carpim tablosu olustur

    /*

        int i, j;

        // 1'den 10'a kadar olan sayılar için çarpım tablosu
        for (i = 1; i <= 5; i++) {
            for (j = 1; j <= 5; j++) {
                printf("%d x %d = %d\t", i, j, i * j);
            }
            printf("\n");  // Her satırdan sonra yeni satıra geç
        }

        return 0;


    */

    /*    int i,j;
        for(i=1; i<=6; i++)
        {
            for(j=1; j<=6; j++)
            {
                printf("\n%d x %d = %d",i,j,i*j);
            }
            printf("\n");

        }
    */

//Bir Sayinin Katlari

    /*  int x;
        printf("Girilen sayiya kadar 17'nin katlarini bulan program baslatiliyor...");
        printf("\nSayi Giriniz:");
        scanf("%d",&x);
        for(int i=1;i<=x;i++){
            if (i%17!=0)
                continue;
            if(i%17==0)
                printf("\n%d",i);
        }
    */

//Seri Toplam Hesaplama(1+1/2+1/3+1/n)

    /*
        int n,i;
        float sonuc=0.0;
        do{
            printf("Bir sayi gir:");
            scanf("%d",&n);
        }while(n<1);

        for(i=1;i<=n;i++){
            sonuc+=(float)1/i;
        }
        printf("%f",sonuc);
    }
    */

//Dik Ucgen


    /*      int yukseklik, i = 1, j;
          printf("Ucgenin yuksekligini giriniz: ");
          scanf("%d", &yukseklik);

          while (i <= yukseklik) {
              j = 1;
              while (j <= i) {
                  printf("*");
                  j++;
              }
              printf("\n");
              i++;
          }

          return 0;
    */
//Yuksekligi Kullanıicidan Al_Dik Ucgen -----------------------------------------------------------------------------------------------------------

    /*int yukseklik, i, j;
    printf("Ucgenin yuksekligini giriniz: ");
    scanf("%d", &yukseklik);

    for(i=1;i<=yukseklik;i++) {
        for(j=1;j<=i;j++) {
            printf("*");

        }
        printf("\n");

    }*/








    /*
        int sira, i, j, yildizSayisi=1, boslukSayisi;
        char karakter;

        printf("Sira Giriniz: ");
        scanf("%d", &sira);

        printf("Girilecek Karakter: ");
        scanf(" %c", &karakter);

        //Boşluk Sayısını Sira Sayisindan bir az olması lazım
        boslukSayisi = sira - 1;

        //İlk For satır sayısını yazdırır (üçgenin boyu)
        for(i=0; i<sira; i++){

        //İkinci For ile boşluk yazdırılır
            for(j=0; j<boslukSayisi; j++)
                printf(" ");

        // Üçüncü For ise Ekrana Yildiz yazdirir
            for(j=0; j<yildizSayisi; j++)
                printf("%c", karakter);

        //Her Yildiz yazdırma işleminden sonra aşağı inilir
            printf("\n");

        //Her aşağı indiğinde 2 tane fazladan yildiz yazdırmak için yildizSayisi 2 artirilir
            yildizSayisi+=2;   // yildizSayisi = yildizSayisi + 2;  de yazdırılabilir

        //Her aşağı indildiğinde Boşluk sayısının 1 azalması lazım
            boslukSayisi--;

        }


        getch();
        return 0;
        }

    */
    /*
        int i,j,k;
        for(i=1; i<=5; i++)
        {
            for(j=1; j<=i; j++)
            {
                for(k=4; k>=j-1; k--)
                {
                    printf(" ");
                }
                printf("%d",j);
            }
            printf("\n");
        }

    }

    */
    /*int i, j;

    for(i=1;i<=5;i++) {
        for(j=1;j<=i;j++) {
            printf("*");//("*",j) olması gerekmez mi------------------------------SORU22222222222222222222222222222222222222222222222222222222222222222222222

        }
        printf("\n");
    }*/


    /* int i,j;
     for(i=1;i<=8;i++){
         for(j=1;j<=i;j++){
             printf("*");
     }
     printf("\n");
    }*/



//------------------------------------------------------------------------------------------------------------------------------------------------------------

    /* int n;
     int num,bayrak,i;
     printf("Pozitif Tam Sayi Giriniz.");
     scanf("%d",&n);
     printf("\n1-%d arasindaki butun asal sayilar");
     printf("\n---------------------------------\n");

       for(num=2;num<=n;num+=1){
         bayrak=1;
         i=2;
         while((i<num)&&(bayrak==1)){
                 if((num&i)==0)
                     bayrak=0;
                 i+=i;
             }
                 if(bayrak=1)
                     printf("%4d",num);//%4d?????????????????????????????????????????????----------------------soru3

     }*/
//------------------------------------------------------------------------------------------------------------soru4
    /*int i,j,a,b;
     for(i=5;i>=0;i--){
         for(j=1;i>=j;j++){
             printf("*");
         }
         printf("\n");
     }
     for(a=1;a<=5;a++){
         for(b=1;b<=a;b++){
             printf("*");
         }
     printf("\n");
     }*/

    /*  for(i=5;i<=0;i--){
          for(a=0;a<=4;a++){
              for(a=0;a<=i;i++){//bosluklu yazdırmada hata var
          printf("*");

              }
      printf(" ");


    printf("\n");

    }

    }*/
//------------------------------------------------------------------------------------

//sayılardan ucgen olusturma

    /*int i,k;
    for(i=1;i<=5;i++)
        printf("%d\n",i);


    for(k=5;k>=1;k--)
        printf("%d\n",k);


    for(i=1;i<=5;i++){
        for(k=1;k<=i;k++){
            printf("%d",i);
        }
        printf("\n");
    }

    for(i=1;i<=5;i++){
        for(k=1;k<=i;k++){
            printf("%d",k);
            sleep(1);
        }
        printf("\n");
        sleep(1);
    }

    for(i=1;i<=5;i++){
        for(k=5;k>=i;k--){
            printf("%d",k);
            sleep(1);
        }
        printf("\n");
        sleep(1);
    }

    */


//quizde


    /* int i,k;

      for(i=1;i<=5;i++){

          for(k=1;k<=i;k++){
              for(int n=4;n>=0;n--){
                  printf(" ");

              }
              printf("%d",i);//k
          }
              printf("\n");
      }*/





    /* int i, k, j;
     int n = 5; // Üçgenin yüksekliği

     for (i = 1; i <= n; i++) {
         // Boşlukları yazdır
         for (j = 1; j <= n - i; j++) {
             printf(" ");
         }
         // Sayıları yazdır
         for (k = 1; k <= i; k++) {
             printf("%d ", k);
         }
         printf("\n");
     }

     return 0;*/


    /*  int a, b, c;

      // Kullanıcıdan giriş al
      scanf("%d", &a);

      // Dış döngü: 1'den girilen sayıya kadar
      for (int i = 1; i <= a; i++) {
          // Boşlukları yazdır
          for (c = a; c > i; c--) {
              printf(" ");
          }
          // Sayıları yazdır
          for (b = 1; b <= i; b++) {
              printf("%d ", b);
          }
          // Yeni satıra geç
          printf("\n");
      }

      return 0;
    */




//denemebenimyazdigim----------------------------------------------------------------------------


    /*int i, k, j;
     int n = 5;

     for (i = 1; i <= n; i++) {
         for (j = 1; j <= n - i; j++) {
             printf(" ");
         }
         for (k = 1; k <= i; k++) {
             printf("%d ", k);
         }
         printf("\n");
     }

     return 0;*/
    /*int i, k, j;
     for(j=1;j<=6;j++){
        for(i=6;i>=j;i--){
                printf(" ");
        }
          for(k=1;k<=j;k++){
            printf("*");
            }
        printf("\n");
    }*/

    /* int a=2,b=3;
     while(a+b<41){
         a+=b;
         b+=a;
         printf("%2d %2d\n",a,b);
     }*/

    /*  int a=25,bayrak=1;//flag tanımlı olmalı!!!!!!!!!!!!!
      while(bayrak){
          if(a>10){
              printf("%d\n",a);
              a=a-3;
          }
          else bayrak=0;
    }*/

    /*    int a,sum=0;//...................................................................................................................................
        for(a=1;a<=5;a++){
            sum=sum+a;
        }
        printf("%d",sum);
        return 0;
        }*/
//...........................................................................................................................................................

    /*int x;
    int y;
    int i;

    scanf("%2d %2d",&x,&y);
    for(i=1;i<=x&&i<=y;i++){
        if(x%2==0&&x%5==0)
        printf("%d 10'un katidir",x);
    }



        printf("%d ile %d arasında 2'ye ve 5'e bolunen tam sayılar",x,y);
    }
    */


    /*if(y%2==0&&y%5==0)
        printf("%d 10'un katidir",x);

        else
        continue;*/

//for
    /*int x,y;
    float sonuc=0;
    printf("Yan yana iki sayi giriniz:");
    scanf("%2d %2d",&x,&y);
    for(int i=1;i<=x&&i<=y;i++){
        sonuc=x/i;
        if(sonuc%2==0&&sonuc%5==0)
            printf("%f 10'un katidir",sonuc)
        else
            continue;*/



//while

    /*int x,y;
    float sonuc=0;
    printf("Yan yana iki sayi giriniz:");
    scanf("%2d %2d",&x,&y);
    wh
    */

//Cumlede Buyuk Harf Bulan Program
    /*
        int sayi=0;
        char karakter;
        scanf("%c",&karakter);
    //cumle sonu kontrolu
        while(karakter!='.')
        {
            if((karakter>='A')&&(karakter<='Z'))
                sayi++;//sayi nin 752. satirda artmasi onemlidir
            scanf("%c",&karakter);
        }
        printf("Buyuk Harf Sayisi: %d",sayi);
        return 0;
    }
    */

//a^2+b^2=c^2 esitligini saglayan degerleri bulan program
    /*
    int n,a,b,c;
    printf("Pozitif Bir Tam sayi Giriniz:");
    scanf("%d",&n);
    printf(" a b c \n");
    printf("----------\n");
    //a b c degerleri
    for(a=1;a<=n;a++)
        for(b=1;b<=n;b++)
            for(c=1;c<=n;c++){
               //if(a<b) ucgen bulmak icin
                if(pow(a,2)+pow(b,2)==pow(c,2))
                    printf("\n%d %d %d",a,b,c);

        }
    }
    */
//Bilye Problemi Cozumu
    /*
        int bilye;
        for(int i=1; i<1000; i*=7)
        {
            for(int j=2; j<7; j++)
            {
                if(i%j==1)
                    bilye=i;
            }
        }
        printf("Cocugun Bilye Sayisi: %d ",bilye);
    }
    */

//150 cm en yakin ogrenci boyutu
/*
    int no,boy,minboy,minno,fark;
    printf("Ogrenci No:");
    scanf("%d",&no);
    printf("Ogrencinin Boyu:");
    scanf("%d",&boy);

    minno=no;
    minboy=boy;
    fark=abs(boy-150);

    while(no>=0)
    {
        printf("Ogrenci No:");
        scanf("%d",&no);
        printf("Ogrencinin Boyu:");
        scanf("%d",&boy);

        if(abs(boy-150)<fark)
        {
            minno=no;
            minboy=boy;
            fark=abs(boy-150);
        }
    }
    printf("%d numarali ogrencinin %d cm boyuyla 150 cm'ye en yakindir",minno,minboy);
}
*/











