//Hilal Kepir
//23360859088
#include<stdio.h>

    int main()

    {
    int n,sonuc;
    printf("Lutfen bir sayi giriniz:");
    scanf("%d",&n);
    sonuc=seri_top(n);
    printf("%d sayisi seri toplami %d dir",n,sonuc);

    }

    int seri_top(int x){
    int toplam=0;

    for(int i=0;i<x;i++){
        toplam+=i;
    }
        return toplam;

}
