#include<stdio.h>
int main(){

 //Reel bir sayinin tam kismi ile ondalikli ksmini ayiran kod...................

   /* double y,ondalikli_kisim;
    int tam_kisim;
    printf("Ondalikli bir sayi giriniz: ");
    scanf("%lf",&y);
    tam_kisim=(int)y;
    ondalikli_kisim = y-tam_kisim;
    printf("Sayinin tam kismi: %d\n",tam_kisim);
    printf("Sayinin ondalik kismi: %lf\n",ondalikli_kisim);
    return 0;*/

//sekil yazdirma..................................................................

/*    printf(" * \n");
    printf("*\t*\n");
    printf("*\t\n");
    printf("*\t*\n");
    printf(" * \n");

    printf(" * \n");
    printf("* *\n");
    printf("* *\n");
    printf("* *\n");
    printf(" * \n");

    //printf(" * \n");
    for(int j =0; j<3;j++){
        for(int i=0;i<4;i++){
        printf("* *\n");
        }
    printf(" * \n");
}*/

//denklemin köklerinin yorumu................................................
   /* int a,b,c;
    printf("Denklemin Katsayilarini Giriniz:");
    scanf("%d %d %d",&a,&b,&c);
    if(b*b-(4*a*c)>0)//b^2 gibi bir yazım c dilinde yoktur!!!!!!!!!!!
        printf("farkli iki kok");
    else if(b*b-(4*a*c)==0)
        printf("iki esit kok");
    else
        printf("reel kok yok!");

    return 0;*/

//fonksiyon hesaplama...........................................................

   /*double y,s;
    printf("y :");
    scanf("%lf",&y);
    if(y>10){
        s=((y*y*y)+1)*(1/2);
        }
    else if(10>=y>=0){
        s=3*y-10;
        }
    else
        s=y/(y+15);
        printf("%lf",s);*/

  /*  float t;
    printf("alisveris tutarini giriniz:");
    scanf("%f",&t);
    if(0<t<100){
        t=t-t*4/100;
        printf("indirimli fiyati:%3.3f",t);
        }
    else if(101<t<250){

        t=(t-((t-100)*7/100))-5;
        printf("indirimli fiyati:%3.3f",t);
        }
    else if(t>251){
        t=(t-(t-250)*1/10)-18;
        printf("indirimli fiyati:%3.3f",t);
    }
    else
        printf("indirim hesaplanamadı...program kapatılıyor");
    return 0;
*/
    /*for(int sayi=1;sayi<=10;sayi++){//önce iç for döngüsü çalışır 1 tur iç for döngüsü dış for un turları arasında çalısır
        for(int sayi=10;sayi>=1;sayi--){
            printf("%d\n",sayi);
            }
        printf("%d",sayi);
    }*/
//faktoriyel hesabi........................................................

  /*  int i=1,n,f=1;
    printf("sayi giriniz:");
    scanf("%d",&n);
    while(i<=n){
      f=f*i;
      i++;
    }
    printf("%d",f);*/

   /* int n,f=1;
    printf("sayi giriniz:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
            f=f*i;
    }
    printf("%d",f);*/

    /*int i=1,n,f=1;
    printf("sayi giriniz:");
    scanf("%d",&n);
    do{
       f=f*i;
       i++;
    }while(i<=n);
    printf("%d",f);*/
//..............................................................................
   /* int i=1,n,t=0;//sorun if süslü parantezini unutmak
    printf("sayi giriniz:");
    scanf("%d",&n);

    while(i<=n){
    if(i%2==0)
        printf("%d\n",i);
        t=t+i;
        i++;

    }
    printf("%d\n",t);*/


   /* int i = 1, n, t = 0;//çözüm
    printf("sayi giriniz: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            t = t + i;
        }
        i++;
    }
    printf("Toplam: %d\n", t);*/

 //ayri ayri if kullanımı durumlari: bagimsiz kosullar, coklu kontroller, ayrı eylemler

       /* int a = 5, b = 10, c = 15;

    if (a < b) {
        printf("a, b'den küçüktür.\n");
    }
    if (b < c) {
        printf("b, c'den küçüktür.\n");
    }
    if (a < c) {
        printf("a, c'den küçüktür.\n");
    }*/


//fibonacci fonlsiyon kullanmadan döngü ile


   /* int n;
    printf("Bir sayı girin: ");
    scanf("%d", &n);

    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }*/

//sayı_dizileri

 /*  int sayilar[3];
    for(int i=0;i<3;i++){
        scanf("%d",&sayilar[i]);
       }
    for(int i=0;i<3;i++){
        printf("%d",sayilar[i]);
        }
    int hilal[3]={19,13,8};
    printf("hilal'in yasi %d",hilal[0]);*/

























}
