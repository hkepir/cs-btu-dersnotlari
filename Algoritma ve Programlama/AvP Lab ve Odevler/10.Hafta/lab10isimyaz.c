#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
    double sonuc = 0.0;
    char oprt = argv[1][0];//1.arguman operator
    // printf("%c",oprt); karakteri gorebildim mi bakmak icin
    double sayi1 = atof(argv[2]);
    double sayi2 = atof(argv[3]);//sayi2 arguman 3 un degerini alir
    // printf("%lf",sayi1);

    switch(oprt)
    {
    case '+':
        sonuc = sayi1 + sayi2;
        break;
    case '-':
        sonuc = sayi1 - sayi2;
        break;
    case 'x':
        sonuc = sayi1 * sayi2;
        break;
    case '/':
        if(sayi2==0)
        {
            printf("0'a Bolum Hatasi");
            break;
        }
        sonuc = sayi1 / sayi2;
        break;

    }

    printf("%lf",sonuc);

}
