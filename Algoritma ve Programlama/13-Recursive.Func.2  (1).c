#include <stdio.h>
#include <stdlib.h>

//Karakter Sayisi
int karakter(char*s)
{
    if(*s=='\0')
    {
        return 0;
    }
    else
    {
        return (1+ karakter(s+1));
    }
}

//Ters Cumle
void terscumle(char* metin,int boy)
{
    if(boy==0)
    {
        printf("%c",metin[boy]);
    }
    else
    {
    printf("%c",metin[boy]);
    terscumle(metin,boy-1);
    }
}


int main()
{
    /*Klavyeden girilen cumle tersten okunusu */
    char cumle[100];
    printf("Bir cumle giriniz:");
    fgets(cumle,sizeof(cumle),stdin);
    terscumle(cumle,strlen(cumle)-1);

    //Klavyeden girilen cumlenin kac karakterden olustugu (bosluk karakteri dahil) bulan C programi
    char cumle2[100];
    printf("\nCumle giriniz:");

    fgets(cumle2,sizeof(cumle2),stdin);
    printf("\nKarakter sayisi = %d\n",karakter(cumle2));

    return 0;
}
