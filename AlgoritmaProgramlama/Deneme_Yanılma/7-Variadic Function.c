#include<stdio.h>
#include<stdarg.h>

/*
//main fonksiyonuna Parametre Aktarimi
//CMD de calısan kod

int main(int argsay, char *argvek[])


{
    int toplam;
    if(argsay < 3){
        printf("Eksik parametre !\n");
        exit(1);
    }
    if(argsay > 3){
        printf("Cok Fazla Parametre !\n");
        exit(1);
    }
    toplam = atoi(argvek[1]) + atoi(argvek[2]);

    printf("Toplamlari %d\n");
    return 0;
}
*/

/*
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
*/
/*

// Esnek argumanli toplam fonksiyonu
int toplam(int n, ...) {
    va_list args;
    int toplam = 0;

    va_start(args, n);
    for (int i = 0; i < n; i++) {
        toplam += va_arg(args, int);
    }
    va_end(args);

    return toplam;
}

int main() {
    printf("Toplam (2 sayi): %d\n", toplam(2, 5, 10));        // 2 sayi
    printf("Toplam (4 sayi): %d\n", toplam(4, 1, 2, 3, 4));  // 4 sayi

    return 0;
}
*/

//Esnek Argumanli Fonksiyon Soru 2
/*
double islem (char oprt,int n,...)
{
    va_list args;
    va_start(args,n);

    double sonuc = (oprt == '*')? 1:0;

    for(int i=0; i<n; i++)
    {
        double sayi = va_arg(args,double);
        switch(oprt)
        {
        case'+':
            sonuc+=sayi;
            break;
        case'*':
            sonuc*=sayi;
            break;
        }
    }
    va_end(args);
    return sonuc;
}

int main()
{
    double toplam =islem('+',3,1.8,5.0,7.2);
    double carpim =islem('*',3,2.0,3.0,6.0);

    printf("Toplam: %.2f\n",toplam);
    printf("Carpim: %.2f\n",carpim);

    return 0;
}
*/

#include <stdio.h>
#include <stdarg.h>

void karakterSayici(char *metin, int kacKarakter, ...)
{
    printf("Metin: %s\n",metin);
    printf("Karakter Sayimlari\n");

    va_list args;
    va_start(args, kacKarakter);

    for (int i = 0; i < kacKarakter; i++)
    {
        char karakter = (char) va_arg(args, int);
        int sayac = 0;


        for (int j = 0; metin[j] != '\0'; j++)
        {
            if (metin[j] == karakter)
            {
                sayac++;
            }
        }
        printf("Karakter '%c': %d kez gecti.\n", karakter, sayac);
    }

    va_end(args);
}

int main()
{

    char *metin1 = "\"Merhaba dunya!\"";
    karakterSayici(metin1, 3, 'a', 'e', 'n');

    char *metin2 ="\"C dilinde programlama.\"";
    karakterSayici(metin2, 3, 'k', 'i', 'l');

    char *metin3 ="Esnek Argumanlarla Calisiyoruz";
    karakterSayici(metin3,3,'A','C','k');

    char *metin4 ="Hilal isimli ogrencinin odevi";
    karakterSayici(metin4,4,'H','e','o','i');

    return 0;
}



































