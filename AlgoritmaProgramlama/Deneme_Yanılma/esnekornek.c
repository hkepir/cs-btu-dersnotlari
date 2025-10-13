#include<stdio.h>
#include<stdarg.h>

int IsimYaz (int sayi,...)
{
    va_list args;
    va_start(args, sayi);
    for(int i=0; i<sayi; i++)
    {
        char *isim = va_arg(args, char*);//printf("Isim %d: %s\n",i+1, va_arg(args, int));
        printf("Isim %d: %s\n",i+1, isim);
    }
    va_end(args);
}
int main()
{
    IsimYaz(3,"Ali","Veli","Ayse");

}
