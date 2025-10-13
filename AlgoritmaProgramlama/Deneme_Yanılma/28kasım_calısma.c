#include<stdio.h>
#include<string.h>
int main(){

/*  //Artik Yil Hesaplama

    int yil;
    printf("Yil giriniz:");
    scanf("%d",&yil);

    if (yil%4==0)
        if(yil%100==0)
            if(yil%400==0)
                printf("%d artik yildir",yil);
            else printf("%d artik yil degilidir",yil);
        else printf("%d artik yildir",yil);
    else printf("%d artik yil degildir",yil);
*/
    //Ucgen Turu Belirleyen Program

/*   int aci1,aci2,aci3;
    printf("Ucgenin acilarini giriniz:");
    scanf("%d %d %d",&aci1,&aci2,&aci3);

    if(aci1+aci2+aci3==180)
        if(aci1==90||aci2==90||aci3==90)
            printf("Ucgen Dik Acili Ucgendir");
        else if(aci1>90||aci2>90||aci3>90)
            printf("Ucgen Genis Acili Ucgendir");

        else if(aci1==aci2&&aci2==aci3)//else if(aci1==aci2==aci3) MANTIKSAL HATA
                printf("Ucgen Eskenar Ucgendir");
            else
            printf("Ucgen Dar Acili Ucgendir");
    else
    printf("Acilar Ucgen Olusturmaz");
*/

/*    int aci1,aci2,aci3;
    printf("Ucgenin acilarini giriniz:");
    scanf("%d %d %d",&aci1,&aci2,&aci3);
    //es kenar,ikiz kenar,cesit kenar


    if(aci1+aci2+aci3==180)
        if(aci1==aci2||aci2==aci3)
            if(aci1==aci2&&aci2==aci3)
                printf("Ucgen Eskenar Ucgendir");


            else printf("Ikizkenar Ucgendir");
        else printf("Cesitkenar Ucgendir");
    else printf("Ucgen Olusmaz");
*/

    //CHATGPT_icice_if_kullanmadan
/*    int aci1, aci2, aci3;

    printf("Ucgenin acilarini giriniz: ");
    scanf("%d %d %d", &aci1, &aci2, &aci3);

    // Üçgen geçerlilik kontrolü
    if (aci1 + aci2 + aci3 == 180) {
        if (aci1 == aci2 && aci2 == aci3) {
            printf("Ucgen Eskenar Ucgendir\n");
        } else if (aci1 == aci2 || aci2 == aci3 || aci1 == aci3) {
            printf("Ucgen Ikizkenar Ucgendir\n");
        } else {
            printf("Ucgen Cesitkenar Ucgendir\n");
        }
    } else {
        printf("Ucgen Olusmaz\n");
    }
*/

//Karakter Dizileri
/*
        char bonne[]="bonne";
        char soire[]="soiree";
        char kopya[10];

        strncpy(kopya,bonne,3);
        printf("%s\n",kopya);

        strncat(kopya,soire,4);
        printf("%s\n",kopya);

        strcpy(kopya,bonne);
        strncpy(kopya+3,soire,5);
        kopya[8]='\0';
        printf("%s\n",kopya);
*/

//İki boyutlu dizi
/*
        char dizi_sayilar[100][100]={{'b','i','r','\0'},"iki","uc","dort","bes"};
        printf("Dizimin dorduncu elemani %s\n",dizi_sayilar[3]);
         printf("Dizimin dorduncu elemaninin ucuncu karakteri %c\n",dizi_sayilar[3][2]);


*/

/*
    //Degisken Degeri ile islem
    float x,y,sonuc;
    char islem;
   // printf("yan yana iki sayi giriniz: ");
   // scanf("%f%f",&x,&y);

    printf("islem seciniz: ");
    scanf("%c",&islem);

     printf("yan yana iki sayi giriniz: ");
    scanf("%f%f",&x,&y);




    switch(islem){

     case '+':
        printf("sonuc %f",x+y);
        break;


     case '-':
        printf("sonuc %f",x-y);
        break;

     case '/':
        if (y != 0)
                printf("Sonuc: %f", x / y);
        else
                printf("Hata: Sifira bolme.");
       break;


case '*':
        printf("sonuc %f",x*y);
        break;
    default: printf("hata");


}
*/

//Adres ile işlem
/*
#include <stdio.h>

void hesapla(float *x, float *y, char *islem)
{
    switch(*islem)
    {
        case '+':
            printf("Sonuc: %f\n", (*x) + (*y));
            break;

        case '-':
            printf("Sonuc: %f\n", (*x) - (*y));
            break;

        case '/':
            if (*y != 0)
                printf("Sonuc: %f\n", (*x) / (*y));
            else
                printf("Hata: Sifira bolme.\n");
            break;

        case '*':
            printf("Sonuc: %f\n", (*x) * (*y));
            break;

        default:
            printf("Hata: Gecersiz islem.\n");
            break;
    }
}

int main()
{
    float x, y;
    char islem;

    printf("Islem seciniz: ");
    scanf(" %c", &islem); // Boşluk, önceki yeni satır karakterlerini temizler

    printf("Yan yana iki sayi giriniz: ");
    scanf("%f %f", &x, &y);

    hesapla(&x, &y, &islem);

    return 0;
}
*/













