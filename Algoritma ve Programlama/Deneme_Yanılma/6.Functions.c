#include<stdio.h>

//Fonksiyon Ile Dort Islem

/*   float dort_islem(float x,float y,char islem){

       switch(islem){

   case '+':
       return x+y;

   case '-':
       return x-y;

   case '/':
       if (y != 0)
               return x / y;
       else
               return 0;

   case '*':
       return x*y;


   default:
       return 0;
      }
   }


int main(){
   float x,y,sonuc;
   char islem;

   printf("islem seciniz: ");
   scanf(" %c",&islem);

    printf("yan yana iki sayi giriniz: ");
   scanf("%f%f",&x,&y);

   /*sonuc=dort_islem(x,y,islem);
   printf("%f",sonuc);*/
/*printf("islemin sonucu:%f",dort_islem(x,y,islem));*/

//Uslu Sayi Hesaplama Programi
/*
int main()
{
    int x,y,sayac;
   do{
    printf("x uzeri y hesapama programi\n");
    printf("sirasiyla deger giriniz:\n");
    scanf("%d %d",&x,&y);

    printf("%d uzeri %d = ",x,y);
    printf("%d\n",ustunu_al(x,y));
    }while(x>0);
}

int ustunu_al(int a,int b){
{
    int sonuc=1;
    for(int i=0; i<b; i++)
    {
    sonuc*=a;
    }
    return sonuc;
}
*/

    //Tam Sayi Basamaklari Toplami

    /*
    int bas_top(int x)
    {
     int birler,onlar,yuzler,sonuc;
     birler=x%10;
     onlar=(x/10)%10;
     yuzler=x/100;
    sonuc=birler+onlar+yuzler;
    return sonuc;

    }

    int main()
    {
    int y;
    printf("Bir sayi giriniz:");
    scanf("%d",&y);
    printf("Girilen sayinin basamaklari toplami %d",bas_top(y));

    }
    */

    //N toplam-Recursive
/*
    int sum(int t)
    {
        if(t>0)
        {
            return t+sum(t-1);

        }
        else
        {
            return 0;
        }
    }


    int main()
    {
        int x;
        printf("Bir sayi giriniz:");
        scanf("%d",&x);
        printf("Girilen degere kadar n toplam:%d",sum(x));
    }
*/
//Basamak sayisi bulan
/*
int basamakSayisi(int sayi)
{
  int i = 0;
  if(sayi<0)
    sayi = -sayi;
    do
    {
        sayi /=10;
        i++;
    }while(sayi !=0);
    return i;
}

int main()
{
    int a,t;
    printf("Bir tam sayi giriniz:\n");
    scanf("%d",&a);
    t=basamakSayisi(a);
    printf("Basamak sayisi: %d",t);
    return 0;
}
*/
//Kombinasyon

int kombinasyon(int n, int r)
{
    if(r==0||r==n)
        return 1;
    else

    return kombinasyon(n-1,r-1)+ kombinasyon(n-1 ,r);
}
int main()
{
    int n=5,r=2;
    printf("C(%d,%d) = %d\n",n,r,kombinasyon(n,r));
    return 0;
}
