#include<stdio.h>

int main(){
int sayi1,sayi2,sayi3;
int en_buyuk;
printf("Lutfen 3 adet sayi giriniz: ");
scanf("%d %d %d",&sayi1,&sayi2,&sayi3);
en_buyuk=fonk(sayi1,sayi2,sayi3);
}

int fonk(int x,int y,int z){

if(x>y&&x>z)
    printf("Girilen en buyuk sayi %d",x);

else if(y>x&&y>z)
    printf("En buyuk sayi %d",y);
else
    printf("En buyuk sayi %d",z);
}

//sayilarda en buyuk recurisive

