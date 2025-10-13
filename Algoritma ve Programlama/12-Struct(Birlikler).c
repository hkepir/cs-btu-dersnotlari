#include <stdio.h>
#include <stdlib.h>

struct bilgiler{ //üyeler
    char isim[31];
    int yas;
    float agirlik;
};

typedef struct bilgiler Ogrenci;
typedef int tamsayi;


void ogrencileri_yazdir(Ogrenci ogrencilerim[],int N){
    for(int i=0;i<N;i++){
        printf("%s\t%d\t%.2f\n",ogrencilerim[i].isim,ogrencilerim[i].yas,ogrencilerim[i].agirlik);
    }
}

Ogrenci *ogrenci_yarat(char ad[],int yas,float kilo){
    Ogrenci *ahmet_p=(Ogrenci *)malloc(1*sizeof(Ogrenci));
    (*ahmet_p).yas=yas;
    (*ahmet_p).agirlik=kilo;
    strcpy((*ahmet_p).isim,ad);
    return ahmet_p;
}

int main(){
    /*
    char isimler[50][31]; //isimleri tutan bir char matrisi
    int yaslar[50];
    float agirliklar[50];
    */

    /*
    tamsayi x=66;
    struct bilgiler ahmet;
    Ogrenci mehmet;

    ahmet.yas=18;
    ahmet.agirlik=75.6;
    strcpy(ahmet.isim,"Ahmet");

    printf("Isim: %s, yas: %d, kilo: %f\n",ahmet.isim,ahmet.yas,ahmet.agirlik);

    mehmet=ahmet; //struct kopyalamak mümkün
    strcpy(mehmet.isim,"Mehmet");
    printf("Isim: %s, yas: %d, kilo: %f\n",mehmet.isim,mehmet.yas,mehmet.agirlik);
*/
    /*
    if(mehmet.yas==ahmet.yas) //karþýlaþtýrma üyeler üzerinden yapýlýr
        ...
        */

/*
    Ogrenci ogrencilerim[50];
    for(int i=0;i<sizeof(ogrencilerim)/sizeof(ogrencilerim[0]);i++){
        ogrencilerim[i].yas=rand()%9+17;
        ogrencilerim[i].agirlik=(rand()%401)/10.0+60;
        int uzunluk=rand()%26+5;
        for(int j=0;j<uzunluk;j++)
            ogrencilerim[i].isim[j]=rand()%26+'A';
        ogrencilerim[i].isim[uzunluk]='\0';
    }

    ogrencileri_yazdir(ogrencilerim,50);
    */

    Ogrenci *donen=ogrenci_yarat("Zeynep",20,50);
    printf("%s-%d-%.2f\n",(*donen).isim,(*donen).yas,(*donen).agirlik);

    return 0;
}





//---------------

typedef struct { //üyeler
    char isim[31];
    int yas;
    float agirlik;
}Ogrenci;


Ogrenci *ogrenci_yarat(char ad[],int yas,float kilo){
    Ogrenci *ahmet_p=(Ogrenci *)malloc(1*sizeof(Ogrenci));
    ahmet_p->yas=yas;
    ahmet_p->agirlik=kilo;
    strcpy(ahmet_p->isim,ad);
    return ahmet_p;
}

int main(){
    Ogrenci *donen=ogrenci_yarat("Zeynep",20,50);
    printf("%s-%d-%.2f\n",donen->isim,donen->yas,donen->agirlik);
    return 0;
}

//------------------

#include <stdio.h>
#include <stdlib.h>

union b{
    int x;
    char y[10];
    float z;
    double q[50];
};
typedef union b birlik;

int main(){
    birlik c;
    strcpy(c.y,"Algoritma");

    c.x=88;

    char *p=&c;
    for(int i=0;i<10;i++)
        printf("%p: %d\n",p+i,*(p+i));



    return 0;
}


//-------------------

#include <stdio.h>
#include <stdlib.h>

int topla(int a,int b){
    return a+b;
}

int cikart(int a,int b){
    return a-b;
}

int carp(int a,int b){
    return a*b;
}

int bol(int a,int b){
    return a/b;
}

int main(){
    int x=9,y=4;
    int (*p[4])(int,int);
    //p, 2 int alan, 1 int döndüren bir fonksiyonun pointeri olacak
    p[0]=&topla;
    p[1]=&cikart;
    p[2]=&carp;
    p[3]=&bol;

    char operatorler[4]="+-*/";
    for(int i=0;i<4;i++)
        printf("%d%c%d=%d\n",x,operatorler[i],y,p[i](x,y));

    return 0;
}
