#include<stdio.h>

    int main(){
    int n;
    printf("Pozitif veya Negatif bir sayi giriniz: ");
    scanf("%d",&n);
    fonk(n);
    }

    fonk(int sayi){
    int sonuc=(sayi<0)? sayi*sayi: sayi*sayi*sayi;    //if(sayi<0)return sayi*sayi; else return sayi*sayi*sayi;
    printf("\n%d",sonuc);
    }

