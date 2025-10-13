#include <stdio.h>
#include <stdlib.h>

/*
      --Tek Boyutlu Sayı Dizisi Egzersizleri

      Kullanıcıdan n tane sayı alınız ve bunların ortalamasını bulunuz
      Girdiğiniz n değerinin 0 ile 100 arasında olmasına dikkat ediniz
*/

int main()
{
    /*
       int n,i;
       float sayi[100],ortalama,toplam=0.0;

       printf("Kac tane sayi gireceksiniz\n");
       scanf("%d",&n);

       while(n>=100 || n<=0){//Gecerli Giris Yapilmasi icin 2.defa kulllanilir
            printf("Kac tane sayi gireceksiniz\n");
            scanf("%d",&n);
       }

       for(i=0;i<n;i++){
           printf("%d. sayim:",i+1);
           scanf("%f",&sayi[i]);
           toplam +=  sayi[i];
       }

       ortalama = toplam/n;
       printf("Ortalama:%.2f",ortalama);

    */

//En Buyuk Eleman Bulma
/*
    int n,i;
    float sayi[100];

    printf("Kac tane sayi gireceksiniz\n");
    scanf("%d",&n);

    while(n>=100 || n<=0)
    {
        printf("Kac tane sayi gireceksiniz\n");
        scanf("%d",&n);
    }

    for(i=0; i<n; i++)
    {
        printf("%d. sayim:",i+1);
        scanf("%f",&sayi[i]);
    }
    for(i=0;i<n;i++){
        if(sayi[0]<sayi[i])//en kucugu bulmak icin sayi[0]>sayi[i]
            sayi[0]=sayi[i];
    }
    printf("Girilen Sayilardan En Buyugu %2.f",sayi[0]);
}
*/

