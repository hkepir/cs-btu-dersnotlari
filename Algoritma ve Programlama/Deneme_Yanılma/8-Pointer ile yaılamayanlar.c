#include<stdio.h>

//Fonksiyonun pointer olarak donmesine izin verilmez

/*
int main()
{

int (*p)(void) = main;

printf("p    :%ld\n",(long int) p);
printf("p + 1:%ld\n",(long int) p+1);

return 0;
}
*/

//Kutunun tip bilgisi void adreslerde eksik oldugu icin type-casting yapýlmasý gerekir

/*
void *z;
*((int*)z)=12;

linked listelerde farkli farkli tipteki adresleir islemek icin kullanilir.
type casting ile generic adres dogru adrese cevirilmis olur.

*/
/*
char (*e)[];
//kac kutu ilerleyecegini bir sonrakine nasil gidecegini bilemez


//Ama void pointerina istedigimiz tipi koyabiliriz

void a (void);//prototip //int main fonksiyonu kaç byte

int main
{
    int i;
    void * pMain = (void *)main;
    void * pA = (void *)a;

    long int size =(char*) pA - (char*) pMain;

    printf("Size : %ld\n",size);
}
void (void a)
{
    printf("Hello Word");
}
