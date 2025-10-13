#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char can[100][100]={"bir","iki","uc","dort","bes"};

    printf("Dizimin dorduncu elemani %s\n",can[3]);//____indis numarasi eleman numarasi - 1_____
    printf("Dizimin dorduncu elemaninin ucuncu karakteri %c\n",can[3][2]);
    printf("Dizinin dorduncu elemani %c\n",can[3][0]);//____dikkat:burada %s kullanilmaz, %c kullanilmalidir____


    return 0;
}
