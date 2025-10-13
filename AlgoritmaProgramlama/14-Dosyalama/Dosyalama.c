#include<stdio.h>
#include<stdlib.h>

typedef struct{
    char ad[21],soyad[21];
    int maas;
}Personel;

void personel_uret(Personel *X,int S){
    for(int i=0;i<S;i++){
        X[i].maas = rand()%50001+50000;//(X+i)->maas veya (*(X+i)).maas 50,000 ile 100,000 arasinda 51,000 personel var
        int u = rand()%16+5;
        for(int j =0;j<u;j++)
            (*(X+i)).ad[j]=rand()%26+'A';
        (*(X+i)).ad[u]='\0'
    }
}
int main(){
    int N;
    printf("Kac personel yaraltilacak: ");
    scanf("%d",&N);

    Personel *dizi = (Personel *)malloc(sizeof(Personel)*N);
    personel_uret(dizi,N);
    personelleri_yazdir(dizi,N);

    FILE *fptr;
    fptr = fopen("personel.txt","w");

    for(int i=0;i<N;i++){
        fprintf(fptr,"%s %s %d\n",dizi[i].ad,dizi[i].soyad,dizi[i].maas);
    }
    printf("Dosyalama tamamlandi!!!!");//Dosyayi Kapattik
    fclose(fptr);

    printf("\n\nVerileri Dosyadan Geri Okumak Istersek...\n\n");

    FILE *okumaptr;//içindekibilgileri okumak istiyorum
    okumaptr = fopen("personel.txt","r");
    int omaas;
    char oad[21],osoyad[21];

    for(int i=0;i<N;i++){
        fscanf(okumaptr,"%s %s %d\n",oad,osoyad,&omaas);
        printf("Okunan %d: %s %s %d\n",i+1,oad,osoyad,omaas);
    }

    fclose(okumaptr);
}

//fgets satir satir bir dosyayi okur
//bir satiri komple okur bosluklarla birlikte
//kendisine verilen pointeri dondurur veya null dondurur.

    char okunacak[1001];

    while(1){
        char *d=fgets(okunacak)
        if(d==NULL)
            break;
        puts(okunacak);
        }

//fopen
//fclose
//fprintf
//fscanf
//fgets
//rewind : dosya acikken dosya basina gider
//fseek
//SEEK_CUR kac byte ileri gidilsin
//SEEK_SET
//SEEK_END

int main(){
    char okunansatir[1000];

    FILE *fptr;
    fptr = fopen("personel.txt","+r");


    fclose(fptr);
    return 0;

}
//Bir dosyayi r + modunda actin eski veriyi rewrite eder
//Ornek Kullaným: Maasin kacinci byte ta oldugunu bilyorsan maas bilgisini guncelleyebilirsin.
