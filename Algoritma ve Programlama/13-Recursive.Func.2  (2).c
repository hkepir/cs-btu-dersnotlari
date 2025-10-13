#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Seri Olustur
void seriolustur(int bas,int bit,int artis)
{
    if(bas<=bit)
    {
        printf("%d\n",bas);
        seriolustur(bas+artis,bit,artis);
    }
}

//Sirala
void sirala(int A[],int index)
{
    int temp,i;
    if(index>0)
    {
        for(i=0;i<index;i++)
        {
            if(A[i]>A[i+1])
            {
                temp = A[i+1];
                A[i+1] = A[i];
                A[i] = temp;
            }
        }
        sirala(A,index-1);
        printf("\n");


    }
}

void ucgen(int ust)
{
    int i;
    if(ust==0)
    {
        return 0;
    }
    else
    {
        for(i=0;i<ust;i++)
        {
            printf(" *");
        }
        printf("\n");
        ucgen(ust-1);
    }
}


int main()
{
    /* Klavyeden başlangıç,bitiş ve artım değeri girilen bir serinin elde edilmesini sağlayan
     C programını recursive fonksiyon kullanarak yazınız.
     Örneğin başlangıç 5 bitiş 55 ve artım 7 olan bir seri 5,12,19,26,33,40,47,54 şeklinde olacaktır.*/
    int bas,bit,artis;
    printf("***Seri Olustur***\n");
    printf("Bir baslangic degeri girin\n");
    scanf("%d",&bas);
    printf("Lutfen bitis degerini giriniz\n");
    scanf("%d",&bit);
    printf("Lutfen artis degerini giriniz\n");
    scanf("%d",&artis);
    seriolustur(bas,bit,artis);

    /*Rastgele dizide kucukten buyuge siralama*/
    int k;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&k);
    //Rastgele sayilar uretildi
    int *dizi=(int*)calloc(k,sizeof(int));
    srand(time(0));
    for(int i=0;i<k;i++){
        dizi[i]=rand() % 100;
        printf("%d\n",dizi[i]);
    }
    sirala(dizi,k-1);//k-1 dizinin son indisi
    for(int i=0;i<k;i++)
    {
        printf("%d\n",dizi[i]);
    }

    free(dizi);



    //Ucgen with recursive
    int ust;
    printf("\nUst sinir giriniz\n");
    scanf("%d",&ust);
    ucgen(ust);



    return 0;
}




