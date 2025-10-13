#include<stdio.h>
#include<stdlib.h>

//Pointer adresi arttirma
void main(){
    int dizi[]={10,20,30,40,50}//5*4=20 byte
    int *ptr=&dizi[0];//int *ptr=dizi;

    for(int i=0;i<5;i++)
        printf("Adres: %p Deger:%d\n",ptr+i,(*ptr+i));//%p yerine %X kullanilarak hexadecimal sistemde yazdirabiliriz

}
