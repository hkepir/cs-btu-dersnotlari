#include<stdlib.h>
#include<stdio.h>

int main()
{
    char metin[1000];

    FILE *fptr;
    fptr = fopen("metin.txt","r");
    //char dizi[]="BURSA TEKNIK UNIVERSITESI"

    char harf
    int sayac=0;
    char *dizi = (char *)malloc(sizeof(char)*(sayac+1));
    rewind(fptr);

    int i=0;
    while(i)

    fclose(fptr);
    return 0;

}

//char dizi[sayac]; gibi statik dizi kulanmamamizin nedeni bazi compailer larda calisip bazi compailerlarda calismamasi
//char *dizi = (char *)malloc(sizeof(char)*(sayac+1)); rewind(fptr);
