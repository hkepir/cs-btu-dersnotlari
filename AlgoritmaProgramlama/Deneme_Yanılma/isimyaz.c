#include<stdio.h>
#include<stdarg.h>

//char isim[50]="Ali";
//printf("Benim adim %s 'dir",isim);
//char a[3]={"A","B","C"};
//char b='A';
//char c[][]={"Ali","Veli"};
//argc arguman sayisini
//argv bu argumanlari tutar
//vektorlerin icinde gezinerek kac vektor oldugunu bulacagiz


int main(int argc, char *argv[])
{
    printf("Programa %d adet arguman gonderildi.\n",argc-1);
    printf("Bu arguman %s 'dir\n",argv[0]);
    printf("Benim adim ");
    for(int i=1; i<argc; i++)
        printf(" %s ",argv[i]);
    printf("'dir.");

}
/*
C:\Users\hkepi\Desktop> isimyaz Ali Ahmet Mehmet
Programa 3 adet arguman gonderildi.
Bu arguman isimyaz 'dir
Benim adim  Ali  Ahmet  Mehmet 'dir.
*/
