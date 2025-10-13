        #include<stdio.h>
        int main(){
    /*        int a[10];
            int b[10];
            printf("a dizisi elemanlarini giriniz:");
            for(int i=0;i<10;i++){
                scanf("%d",&a[i]);
            }
            for(int i=0;i<10;i++){
                if(a[i]<a[i+1]){
                    b[i]=a[i+1];
                }else{
                    b[i]=a[i];

                }
            }
            printf("b dizisinin elemanlari:\n");
            for(int i=0;i<9;i++){
                printf("%d\n",b[i]);
            }

        printf("a dizisinde olup b dizisinde olmayan rakam en kucuk rakamdir:|");
    */

                  /* Furkan, bir romanın her gün bir önceki gün okuduğu sayfadan 5 sayfa fazlasını
                okumaktadır. İlk gün 10 sayfa okuyarak başlayan Furkan' ın 1.000 sayfalık bir romanı kaç
                günde bitireceğini bulan programı C dilinde kodlayınız. */

    /* int sayfa=0,gun=0;

        int okunan_s=10;
        while(sayfa<1000){
            sayfa+=okunan_s;
            okunan_s+=5;
            gun++;
        }
        printf("%d gunde kitap biter\n",gun);
        return 0;
    */


    /* int kapasite=0;
      int gun=0;
      int uretilen_y=5;
      while(kapasite<=500){
        kapasite+=uretilen_y;
        uretilen_y+=2;
        gun++;
        }
      printf("%d. gun toplamda 500 yumurta uretilmistir\n",gun);
    */



    /*Bir memur, ATM makinasından para çekmek istemektedir. Makinede sadece 10, 20, 50 ve
    100 TL' lik banknotlar kalmıştır. Büyük değerli banknotların sayısı maksimum olacak şekilde,
    çekilecek paranın kaç tane 100, 50, 20 ve 10 liralık banknottan oluşacağını ekranda yazan C
    programını yazınız. */

      /*  int tutar, yuz_tl=0,elli_tl=0,yir_tl=0,on_tl=0;

        printf("Cekilecek Tutari Giriniz:\n");
        scanf("%d",&tutar);

        yuz_tl=tutar/100;
        tutar=tutar%100;

        elli_tl=tutar/50;
        tutar=tutar%50;

        yir_tl=tutar/20;
        tutar=tutar%20;

        on_tl=tutar/10;


        printf(" %d adet 100 tl, %d adet 50 tl, %d adet 20 tl, %d adet 10 tl den olusur\n ",tutar,yuz_tl,elli_tl,yir_tl,on_tl);
    */



      //dizi_ile________________________________________________

    /*  int para;
        printf("Para Miktari:\n");
        scanf("%d",&para);

        int banknotlar[] = {100, 50, 20, 10};
        int adet[4] = {0}; // Her banknot türü için sayıları saklayacak dizi

        for (int i = 0; i < 4; i++) {
            adet[i] = para / banknotlar[i]; // Bu banknot türünden kaç adet kullanabileceğimizi hesaplıyoruz
            para = para % banknotlar[i]; // Kalan miktarı hesaplıyoruz
        }

        printf("100 TL: %d adet\n", adet[0]);
        printf("50 TL: %d adet\n", adet[1]);
        printf("20 TL: %d adet\n", adet[2]);
        printf("10 TL: %d adet\n", adet[3]);
    */

    //karakter_dizisi___________________________________________

       /* int para = 530;
        int banknotlar[] = {100, 50, 20, 10};
        int adet[4] = {0}; // Her banknot türü için sayıları saklayacak dizi
        int i;

        for (i = 0; i < 4; i++) {
            adet[i] = para / banknotlar[i]; // Bu banknot türünden kaç adet kullanabileceğimizi hesaplıyoruz
            para = para % banknotlar[i]; // Kalan miktarı hesaplıyoruz
        }

        char *banknotIsimleri[] = {"100 TL", "50 TL", "20 TL", "10 TL"};

        printf("Banknot Dağılımı:\n");
        for (i = 0; i < 4; i++) {
            printf("%s: %d adet\n", banknotIsimleri[i], adet[i]);
        }
*/


//isin_mantıgı


/*  int toplam_para;
    int bir_tl=0;
    int bes_tl=0;
    printf("Para:\n");
    scanf("%d",&toplam_para);

    bes_tl=toplam_para/5;
    bir_tl=toplam_para%5;

    printf("%d TL, %d adet 5 TL'lik ve %d adet 1 TL'lik bozuk paraya bolunmustur",toplam_para,bes_tl,bir_tl);
*/
/*    int para, onluk, yirmilik, ellilik, yuzluk;

    printf("Cekmek istediginiz para miktarini giriniz : ");
    scanf("%d",&para);

    if(para % 10 != 0)
        printf("En kucuk 10 TL' lik banknot
    mevcut!");
    else {
    yuzluk = para / 100;
    para -= yuzluk * 100;

    ellilik = para / 50;
    para -= ellilik * 50;

    yirmilik = para / 20;
    para -= yirmilik * 20;

    onluk = para / 10;

    if(yuzluk > 0)
        printf("%d tane 100 TL\n", yuzluk);
    if(ellilik > 0)
        printf("%d tane 50 TL\n", ellilik);
    if(yirmilik > 0)
        printf("%d tane 20 TL\n", yirmilik);
    if(onluk > 0)
        printf("%d tane 10 TL\n", onluk);
    }
 */

//fibonacci dizisi

 int fib1=1,fib2=1,n;//1 1 2 3 5 8 13
 int next=0;

    printf("Fibonacci Dizisi\n");
    printf("n:");
    scanf("%d",&n);
    //printf("Fibonacci Dizisi:%2d %2d",fib1,fib2);

    int i=2;
 /* while(i<n){
        next=fib1+fib2;
        printf(" %2d ",next);
        fib1=fib2;
        fib2=next;
        i++;

    }
    printf("\n");

*/    int fib_dizi[100];
        fib_dizi[0]=1;
        fib_dizi[1]=1;


        for(i=2;i<100;i++){
            fib_dizi[i]=fib_dizi[i-1]+fib_dizi[i-2];
        }

        printf("Dizi ile Fibonacci Yazdirma:");
        for(i=0;i<n;i++){
            printf("%2d",fib_dizi[i]);
        }





























































    }
