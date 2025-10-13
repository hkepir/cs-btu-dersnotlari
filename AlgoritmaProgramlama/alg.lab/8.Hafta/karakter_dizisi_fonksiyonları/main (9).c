#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //strrev()
    char metin[100];

    printf("Lutfen bir text giriniz\n");
    scanf("%s",&metin);

    printf("Girdiginiz ifade %s\n",metin);
    printf("Girdiginiz ifadenin ters cevrilmis hali %s\n",strrev(metin));


    return 0;
}
