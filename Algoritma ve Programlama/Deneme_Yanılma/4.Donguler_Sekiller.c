#include<stdio.h>
int main()
{
//Dik Ucgen Olusturma Rakam
    /*
        int yukseklik, i, j;
        // printf("Ucgenin yuksekligini giriniz: ");         1
        // scanf("%d", &yukseklik);                          12
                                                             123
        for(i=1; i<=5; i++)                                  1234
        {                                                    12345
            for(j=1; j<=i; j++)
            {
                printf("%d",j);

            }
            printf("\n");

        }
    }

    */

//Saga Yasli Dik Ucgen Olusturma
    /*
          ....1
          ...12
          ..123
          .1234
          12345


    int i;
    int j;
    int b;//bosluk 5-1

    for(i=1;i<=5;i++){
        for(b=4;b>=i;b--){
            printf(".");
        }
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    }
    */

//Piramit Ucgen Olusturma

    //Piramit Ucgen Olustuma_Yildiz
    /*
        int satir,bosluk,yildiz;
        printf("satir icin sayi giriniz:");
        scanf("%d",&satir);
        for(int i=1; i<=satir; i++)
        {
            for(bosluk=1;bosluk<=satir-i ; bosluk++)
            {
                printf(".");
            }
            for(yildiz=1;yildiz<=(2*i-1); yildiz++)
            {
                printf("*");
            }
        printf("\n");
        }


    }
    */

    //Sayilarla Piramit Quiz Sorusu
    /*
                        1
                       123
                      12345
                     1234567
                    123456789
        int i,j,k;
        int n;

        for(i=1; i<=5; i++)
        {
            for(j=1; j<=5-i; j++)
            {
                printf(" ");
            }
            for(k=1; k<=2*i-1; k++)//kosul sebebi 1.satir 2*1-1=1 sayi
            {                      //2.satir 2*2-1=3 e kadar sayi
                printf("%d",k);    //3.satir 2*3-1=5 e kadar sayi
            }
            printf("\n");
        }
    }
    */
//Baklava Deseni Olusturma
    /*
    //Ust
        int i,j,k;
        int n=5;

        for(i=1; i<=5; i++)
        {
            for(j=1; j<=n-i; j++)
            {                                                                                       1
                printf(" ");                                                                       123
            }                                                                                     12345
            for(k=1; k<=2*i-1; k++)//kosul sebebi 1.satir 2*1-1=1 sayi                           1234567
            {                                                                                   123456789
                                //2.satir 2*2-1=3 e kadar sayi                                   1234567
                printf("%d",k);    //3.satir 2*3-1=5 e kadar sayi                                 12345
            }                                                                                      123
            printf("\n");                                                                           1
        }
    //Alt
        k=k-2;
        j=1;

        for(i=n-1; i>=1; i--)
        {
            for(j=1; j<=n-i; j++)
            {
                printf(" ");
            }
            for(k=1; k<=2*i-1; k++)
            {
                printf("%d",k);
            }

            printf("\n");
        }

    }
    */
//Floyd Ucgeni Olusturma
/*
    int i,j,satir;
    int sayi=1;

    printf("Satir sayisi giriniz:");
    scanf("%d",&satir);

    for(i=1; i<=satir; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",sayi);
            sayi++;
        }
        printf("\n");
    }
}
*/




















/*                Olustur            /\
                                    /**\*/









