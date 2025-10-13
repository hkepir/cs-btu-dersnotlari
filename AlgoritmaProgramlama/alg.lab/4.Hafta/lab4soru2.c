#include <stdio.h>
int main(){

    int y,a,b;
    float sonuc;
    printf(" 1 toplama\n 2 cikarma\n 3 carpma\n 4 bolme\n islemlerinden birini seciniz...\n ");
    scanf("%d",&y);
    printf("iki sayi gir:");
    scanf("%d %d",&a,&b);
        switch(y)
        {
            case 1:
            {
            sonuc=a+b;
            printf("Sonuc:%.2f\n",sonuc);
            break;
            }
            case 2:
            {
            sonuc=a-b;
            printf("Sonuc:%.2f\n",sonuc);
            break;
            }
            case 3:
            {
            sonuc=a*b;
            printf("Sonuc:%.2f",sonuc);
            break;
            }
            case 4:
            {
            if(b==0){
                printf("Hatali Giris Yaptiniz!Payda sifir olamaz\n");
                }
            sonuc=a/b;
            printf("%.2f",sonuc);
            break;
            }
            default: printf("Gecersiz giris");
        }
}


  /*


    if(y==1){
        printf("iki sayi gir:");
        scanf("%d %d",&a,&b);
        sonuc= a+b;
        printf("sonuc: %.2f",sonuc);
    }
    else if(y==2){
        printf("iki sayi gir:");
        scanf("%d %d",&a,&b);
        sonuc=a-b;
        printf("sonuc: %.2f",sonuc);
    }
    else if(y==3){
       printf("iki sayi gir:");
        scanf("%d %d",&a,&b);
        sonuc=a*b;
        printf("sonuc: %.2f",sonuc);
    }
    else if(y==4){
        printf("iki sayi gir:\n");
        scanf("%d %d",&a,&b);
                if(b==0){
                printf("Hatali giris yaptiniz!");
                return 0;
                }
                sonuc=a/b;
                printf("Sonuc:%.2f/%.2f=%.2f\n",(float)a,(float)b,sonuc);
        }else
        printf("Hatali islem sectiniz. Programdan cikiliyor...\n");
        return 0;*/
