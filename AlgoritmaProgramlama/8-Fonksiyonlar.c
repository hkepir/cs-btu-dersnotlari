#include <stdio.h>

int global_degisken;


float PI_dondur(){ //<- bu fonksiyonun ilk satýrýna "prototip" denir.
    return 3.14;
}


int topla(int a,int b){
    //a ve b, topla'nýn yerel deðiþkenleridir.
    //sadece topla fonksiyonu içinde tanýmlýdýrlar.

    return a+b;
}

int kendi_strlenimiz(char kelime[]){
    int u=0;
    while(kelime[u]!='\0'){
        u++;
    }
    return u;
}

void geriye_birsey_dondurmuyorum(){
    printf("Global degiskenin degerini gir: ");
    scanf("%d",&global_degisken);
}



void main(){
    /*
    int x,y;
    printf("Iki sayi gir: ");
    scanf("%d %d",&x,&y);
    printf("Toplam: %d",topla(x,y));
    */
    /*
    char metin[]="BURSA TEKNIK";
    printf("%s'in uzunlugu %d",metin,kendi_strlenimiz(metin));
    */
    //printf("PI sayisi: %f",PI_dondur());

    geriye_birsey_dondurmuyorum();
    printf("global degiskenin degeri: %d",global_degisken);

}
