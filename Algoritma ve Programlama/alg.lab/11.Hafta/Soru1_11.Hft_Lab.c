#include<stdio.h>
#include<time.h>
#include <stdlib.h>

int main()
{
    int dizi[10];
    int *diziPtr = dizi;



    srand(time(NULL));

    printf("Dizi:\n");
    for(int i=0 ;i<10;i++)
    {
    *(diziPtr + i) = rand() %100;
    printf("%d\n",*(diziPtr +i));
    }
    printf("\n");

    printf("Cift Degerler:\n");
    for(int i=0; i<10; i++)
    {
        if(*(diziPtr + i)%2==0){
        printf("%d\n",*(diziPtr + i));
        }
    }
    printf("\n");

    printf("Tek Degerler:\n");
    for(int i =0;i<10;i++)
    {
        if(*(diziPtr + i)%2 != 0){
            printf("%d\n",*(diziPtr+i));
        }
    }
    printf("\n");
    return 0;
}







/*
int main()
{
    int dizi[10];
    int diziTek[10];
    int diziCift[10];

    int tekIndex = 0;
    int ciftIndex = 0;

    srand(time(NULL));


    for(int i = 0; i < 10; i++) {
        dizi[i] = rand() % 101;

        if(dizi[i] % 2 != 0) {
            diziTek[tekIndex++] = dizi[i];

        } else {
            diziCift[ciftIndex++] = dizi[i];
        }
    }


    printf("Rastgele Dizi:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("Dizi Tek:\n");
    for(int i = 0; i < tekIndex; i++) {
        printf("%d ", diziTek[i]);
    }
    printf("\n");


    printf("Dizi Cift:\n");
    for(int i = 0; i < ciftIndex; i++) {
        printf("%d ", diziCift[i]);
    }
    printf("\n");

    return 0;

}

*/
/*

#define BOYUT 10

int main()
{
    int dizi[BOYUT];
    int diziTek[BOYUT];
    int diziCift[BOYUT];

    int tekIndex = 0;
    int ciftIndex = 0;

    srand(time(NULL));


    for(int i = 0; i < BOYUT; i++) {
        dizi[i] = rand() % 101;

        if(dizi[i] % 2 != 0) {
            diziTek[tekIndex++] = dizi[i];

        } else {
            diziCift[ciftIndex++] = dizi[i];
        }
    }


    printf("Rastgele Dizi:\n");
    for(int i = 0; i < BOYUT; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("Dizi Tek:\n");
    for(int i = 0; i < tekIndex; i++) {
        printf("%d ", diziTek[i]);
    }
    printf("\n");


    printf("Dizi Cift:\n");
    for(int i = 0; i < ciftIndex; i++) {
        printf("%d ", diziCift[i]);
    }
    printf("\n");

    return 0;

}

*/














   /*
    int dizi[10];
    int *diziPtr=&dizi[10];

    int diziTek[10];
    int diziCift[10];

    int *diziPtrTek= &diziTek[10];
    int *diziPtrCift= &diziCift[10];

    srand(time(NULL));
    for(int i=0; i<10; i++)
    {
        dizi[i]=rand()%101;
        if(dizi[i]%2!=0)
            dizi[i]=diziTek;

        else
            dizi[i]=diziCift;

    }


    printf("Dizi Tek\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n",*(diziPtrTek+i));
    }

    printf("\nDizi Cift\n");
    for(int i=0; i<10; i++)
    {
        printf("%d\n",*(diziPtrCift+i));
    }

*/

//Kullanýcýdan 10 elemanlý bir dizi alan ve bu dizideki tüm çift elemanlarýn adreslerini bir dizide saklayan ve degerlerini bastiran program
/*
void ciftSayiAdres(int dizi[],int uzunluk,int* adresler[],int* sayac);

int main()
{
    int dizi[10];
    int* adresler[10];
    int sayac = 0;

    printf("10 elemanli diziyi giriniz:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&dizi[i]);
    }
    ciftSayiAdres(dizi,10,adresler,&sayac);
    printf("Cift sayilarin adresleri:\n");
    for(int i=0; i<sayac;i++){
        printf("%p adresindeki deger: %d\n",(void*)adresler[i], *adresler[i]);
    }
    return 0;
}

void ciftSayiAdres(int dizi[],int uzunluk,int* adresler[],int* sayac){
    for(int i=0;i<10;i++){
        if(dizi[i]%2==0){
            adresler[*sayac]=&dizi[i];
            (*sayac)++;
        }
    }
}
*/
/*
void characterScroll(char* characters,int size);
int main()
{
    char dizi[7]={'Y','a','z','i','l','i','m'};
    int size = sizeof(dizi)/sizeof(dizi[0]);
    characterScroll(dizi,size);
    return 0;
}
void characterScroll(char* characters,int size)
{
    int i=0, j=0;
    for(i=0;i<size+1;i++){
        for(j=i;j<size;j++){
            printf("%c",*(characters+j));//characters[j]
        }
    for(j=0;j<i;j++){
        printf("%c",*(characters+j));//characters[j]
    }
    printf("\n");
    }
}
*/
