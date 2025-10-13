#include<stdio.h>
#include<string.h>

void faktoriyelHesapla(int *psayi,int *psonuc)
{
    for(int i= *psayi; i>0; i--)
    {
        *psonuc *= i;
    }

    printf("Girilen Sayi:%d\n",*psayi);

}

int main()
{
    int x;
    printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz: ");
    scanf("%d",&x);
    if(x>0)
    {
    int sonuc =1;
    int *psayi=&x;
    int *psonuc=&sonuc;
    faktoriyelHesapla(psayi,psonuc);
    printf("Sonuc:%d\n",sonuc);
    }
    else
    {
        printf("Negatif bir sayi girdiniz\n");
    }
    return 0;
}

/*
void faktoriyelHesapla(int *psayi)
{
    for(int i= *psayi; i>0; i--)
    {
        *psayi *= i;
    }

    printf("%d",*psayi);

}

int main()
{
    int x;
    printf("Faktoriyeli Hesaplanacak Sayiyi Giriniz: ");
    scanf("%d",&x);
    int *psayi=&x;
    faktoriyelHesapla(x);
    printf("%d",*psayi);
    return 0;
}
*/
