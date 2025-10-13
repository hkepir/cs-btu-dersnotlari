#include <stdarg.h>
#include<stdio.h>

int topla(int N,...)
{
    int toplam = 0;
    va_list liste;
    va_start(liste,N);

    for(int i=0;i<N;i++){
        toplam += va_arg(liste,int);
    }
    va_end(liste);

    return toplam;
}

void kelimeYaz(int N,...)
{
    char *dizi = (char*)calloc(N,sizeof(char));
    va_list metin;
    va_start(metin,N);
    for(int i=0;i<N;i++){
        dizi[i]=va_arg(metin,int);
    }
    for(int i=0;i<N;i++){
        printf("%c",*(dizi+i));//printf("%c",dizi[i]);
    }

    va_end(metin);
    free(dizi);
}

int main()
{
    printf("Toplam: %d\n",topla(3,1,2,3));
    printf("Toplam: %d\n",topla(7,1,1,1,1,0,0,0));

    kelimeYaz(5,'A','l','i','A','K');
}

