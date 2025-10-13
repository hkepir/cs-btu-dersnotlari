#include <stdio.h>

int main() {

    int i,tek=0,cift=0;
    int n;

    printf("eleman sayisi giriniz:\n");
    scanf("%d",&n);

    int dizi[n];
    printf("%d elemanli tam sayi dizisi girin\n",n);


    for (i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Girilen dizi: ");
    for(i = 0; i < n; i++){
    printf(" %d",dizi[i]);
    }
    printf(" \n ");
    for (i = 0; i < n; i++) {
        if(dizi[i]%2==0){
        printf("%d cifttir\n", dizi[i]);
        tek+=dizi[i];
        }
        else{
        printf("%d tektir\n",dizi[i]);
        cift+=dizi[i];
        }
    }
    printf("cift sayilar toplami %d\n",tek);
    printf("tek sayilar toplami %d\n",cift);


return 0;
}



/* int dizi[10];
    int i,eb,ek, toplam=0;
    float ort;

    printf("10 adet tam sayi giriniz:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &dizi[i]);
    }
    printf("Girilen dizi: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    printf("Dizideki en buyuk degeri bulma\n");

     eb=dizi[0];
     ek=dizi[0];
     for(i=0;i<10;i++){
        if(dizi[i]<ek)
            ek=dizi[i];
            if(dizi[i]>eb)
                eb=dizi[i];
     }
    printf("Dizideki en kucuk deger:%d\n",ek);
    printf("Dizideki en buyuk deger:%d\n",eb);

    for(i=0;i<10;i++){
    toplam+=dizi[i];
    }
    ort=toplam/10;
    printf("Dizinin ortalamasi:%.2f\n",ort);

    //dizinin ortalamdan buyuk-kucuk-esit olma durumu
    for(i=0;i<10;i++){
        if(dizi[i]<ort)
        printf("%d ortalamadan kucuktur\n",dizi[i]);
l
        else if(dizi[i]>ort)
        printf("%d ortalamadan buyuktur\n",dizi[i]);

        else
        printf("%d ortalamaya esittir\n",dizi[i]);
        }*/




