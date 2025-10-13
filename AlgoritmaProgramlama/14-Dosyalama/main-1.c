#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;

    file = fopen("veri_kaydet.txt","w");//Dosya Veri_Kaydet
    char metin[]="Bu dosya sifresizdir: Sifresiz";
    int dondurulen = fprintf(file,"%s",metin);
    printf("%d karakter var\n",dondurulen);
    printf("strlen saglamasi: %d",strlen(metin));
    fclose(file);

    file = fopen("carpimTablosu.txt","w");//Dosya Carpim Tablosu
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            fprintf(file,"%d x %d = %d\n",i,j,i*j);
        }
        fprintf(file,"\n");
    }
    fclose(file);

    file = fopen("veri_kaydet.txt","a");
    char isim[20],okul[50],bolum[50];
    printf("Adiniz:");
    fgets(isim,sizeof(isim),stdin);

    printf("Okulunuz:");
    fgets(okul,sizeof(okul),stdin);

    printf("Bolumunuz:");
    fgets(bolum,sizeof(bolum),stdin);

    fprintf(file," %s\n %s\n %s\n",isim,okul,bolum);
    fputs("Bu is tamam!Conguralation!",file);

    fclose(file);
    return(0);
}
