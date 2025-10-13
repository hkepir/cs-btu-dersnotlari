#include<stdio.h>

//fprintf ile dosyaya veri yazma
int main()
{
    FILE *fp;
    fp = fopen ("hangiyilayiz.txt","w+");
    if(fp == NULL)
    {
        printf("hangiyildayiz.txt dosyasi acilmadi. !\n");
        exit(1);
    }
    fprintf(fp,"%s %d %s","Bu sene",2015,"yilindayiz");
    fclose(fp);

    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fptr;

    fptr=fopen("ogrenciler.txt","w");
    if(fptr==NULL)
        printf("Dosya acilamadi!");

    fprintf(fptr,"%s\t%s\t%d\n","Ali","Yilmaz",25);
    fprintf(fptr,"%s\t%s\t%d\n","Ayse","Kuyu",23);
    fputs("Merhaba Dunya\n",fptr);

    fclose(fptr);



   //veriyi kullanicidan alma

    int yas;
    char ad[51],soyad[51];
    fptr=fopen("ogrenciler.txt","r+");


    fscanf(fptr,"%s\t%s\t%d\n",ad,soyad,&yas);
    printf("Ad: %s, Soyad: %s, Yas: %d\n",ad,soyad,yas);

    char satir[1001];
    fgets(satir,1000,fptr);
    printf("Okunan satir: %s",satir);


    char *kelimeler=strtok(satir,"\t");

    printf("1. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("2. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("3. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("4. kelime: %s\n",kelimeler);


    fclose(fptr);

    return 0;
}
















