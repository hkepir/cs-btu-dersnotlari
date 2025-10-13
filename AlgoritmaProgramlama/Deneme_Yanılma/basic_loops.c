#include <stdio.h><time.h>
int main()
{
//1 den 5 e sayilarin toplami=15
    /*int sum=0;
    for(int i=1;i<=5;i++){
        sum+=i;
    }
    printf("1 den 5 e kadar sayilarin toplami %d dir",sum);*/


    /*int sum=0,i=1;
    while(i<=5){
        sum+=i;
        i++;
    }

        printf("1 den 5 e kadar sayilarin toplami %d dir",sum);*/




//1 den n e kadar sayilarin toplami
    /*int n,sum=0;
    printf("sayi gir:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("1 den %d ye kadar olan sayilarin toplami:%d dir",n,sum);*/


    /* int i=1,sum=0,n;//i:sayac
     scanf("%d",&n);
     while(i<=n){
         sum+=i;
         i++;
     }
      printf("1 den %d ye kadar olan sayilarin toplami:%d dir",n,sum);*/

//1 den n e kadar tek sayilar 1 den n e çift sayilar
    /*int toc=0,tot=0, n,i;
    printf("sayi giriniz:");
    scanf("%d",&n);
    for(i=2;i<=n;i+=2){//i++
         toc+=i;
         }
    for(i=1;i<=n;i+=2){
            tot+=i;
    }
    printf("tekler toplami: %d  cift sayilar toplami:%d",tot,toc);*/

    /* int toc=0,tot=0, n,i;
     printf("sayi giriniz:");
     scanf("%d",&n);
     i=1;
     while(i<=n){
         tot+=i;
         i+=2;
     }
     i=2;
     while(i<=n){
         toc+=i;
         i+=2;
     }
     printf("ciftler toplami:%d\n",toc);
     printf("tekler toplami: %d\n",tot);*/

    //0-10 tek sayilar ve çift sayılar
    /*int i;
    i=1;
    while(i<=10){
        printf("Tek sayilar:%d\n",i);
        i+=2;
    }
    i=2;
    while(i<=10){
        printf("Cift sayilar:%d\n",i);
        i+=2;
    }*/

    //teksayilar_ciftsayilar..............................soru hem tek hem cift nasıl yazdırırım
    /* int n;
     printf("0-n arasi tek sayilar.Bir sayi girin:");
     scanf("%d",&n);
     if(n%2==0)
        while(n>=0){
        printf("cift sayilar:%d\n",n);
        n-=2;
        }else
        while(n>=0){
        printf("Tek sayilar:%d\n",n);
        n-=2;
     }*/
    //............................................................................................

    /* int m,n,f=0,t=0,i;
     printf("Yan yana iki sayi giriniz:");
     scanf("%2d %2d",&m,&n);
     if(m%2==0&&n%2==0)
         for(;n<=m;n+=2){
         t+=n;
         printf("%d",t);
         }
         else
         for(;m<=n;m+=2){
         t+=m;
         printf("%d",t);
         }
         printf("%d ile %d arasindaki cift sayilarin toplami : %d\n",n,m,t);
         printf("Cift sayilarin ortalamasi:%d",t/(m+n));*/


    //1-2+3-4+....-100=? hesaplayan kod yazımı
    /*int toplam=0,fark=0;
    for(int i=1;i<=100;i+=2){
     toplam+=i;
    }
     for(int j=2;j<=100;j+=2){
         fark+=j;
     }
    printf("tekler toplami:%d\n",toplam);
    printf("ciftler farki:%d\n",fark);
    printf("1-2+3-4+...-100:%d\n",toplam-fark);*/

//Diziler........Hafta6..........................................................................

//hata çözümü
    /* int dizim[30];
     //dizi indisleri 0 - N-1 arasinda degisir

     printf("%d",dizim[0]+dizim[49]);
     //bir dizinin tüm elemanlarını yazdıracak bir şey yok döngü kullan

     for(int i=0;i<50;i++){
         printf("%d\n"dizim[50])
     }

    //.............


    const int */


    /*for(int i=0;i<sizeof(dizim)/sizeof(dizim[0]);i++){
        printf("%d\n",dizim[i]);
    }*/

    /* double X[10]={};//tamamı sıfır olan 10 kapaditeli dizi
     double X[10]={8,9.10,7,};//digerlerine rastgele sayilar atanir

     char kelime[]={'F','E','D','C','B','A'};


     //slaytsayfa17

     int i=2;
     X[i++]=5.9;//mümkündür

     X[(int)X[2]]=4.9;//casting yapıldı x[2]ve 4.9 atandı X[2]=5.9 idi
    */
//bir döngünün sayacını başka bir döngüde koşul olarak kullanma
    /*
        int A[10];
        int i;
        for( i=0;i<10;i++){
            printf("A[%d]=",i);
            scanf("%d",&A[i]);

            if(A[i]==0)
                break;
        }

        for(int j=0;j<i;j++)
            printf("A[%d]:%d\n",j,A[j]);
    */
//0.eleman degeri: 19-->*************

    int d[]= { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 };
    int kapasite=sizeof(d)/sizeof(d[0]);
    int i;
    for(i=0; i<kapasite; i++)
    {
        printf("%d. eleman degeri: %d\t-->",i,d[i]);
        for(int j=0; j<d[i]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
/*  const int BOYUT=100;
  int dizi[BOYUT];

  for(int i=0;i<BOYUT;i++)
      dizi[i]=rand()%100+1;

  for(int i=0;i<BOYUT;i++)
      printf("dizi[%d]:%d\n"i,dizi[i])*/



//hep aynı sayıları görmek istemiyorsak rand
//Rondom number generator'ımızı sistem saatine bağlamak gerekir


/*  srand (time(NULL));
  //srand:seed rand tohumla
  const int BOYUT=100;
  int dizi[BOYUT];

  for(int i=0;i<BOYUT;i++)
      dizi[i]=rand()%100+1;

  for(int i=0;i<BOYUT;i++)
      printf("dizi[%d]:%d\n"i,dizi[i])*/


//100 elemanlı dizi olsun dizi elemanları 1,100
//lineer source

/*   int anahtar;
   printf("aranacak sayiyi gir:");
   scanf("%d",&anahtar);
   int sayac;//anahtarı kac kere buldum

   for(int i=0;i<BOYUT;i++){
       if(anahtar==dizi[i])
           printf("%d,%d.pozisyonda bulundu!\n",anahtar,i);
           sayac++;
       }
   if(sayac==0)
       printf("Anahtar bu dizide yok");*/

//10 elemanlı binary source yap ödev.................................................................................................................................


//basit sıralama algoritmasi...............................................................Eksik kod......................................................Binary Source.........


/* const int BOYUT=20;
 int dizi[BOYUT];
 int sirali_dizi[BOYUT]={};


 for(int i=0;i<BOYUT;i++)
    int rs=rand()%100+1;
    printf("%d",)


    for(int j=0;j<BOYUT;j++){
        int pozisyon=0;
        for(int k=0;k<BOYUT;)

}


int bas,orta,son;
bas=0;
son=BOYUT-1;
orta=(bas+son)/2;





while(bas<=son){
    if(anahtar<sirali_dizi[orta])
    son=orta-1;
    else if(anahtar>sirali_dizi[orta])
        bas=orta+1;
    else{
        printf("aradigini %d. indiste buldun\n",orta);
    }

orta=(bas+son)/2;*/
//.................................................................................................................................................................................................................












































