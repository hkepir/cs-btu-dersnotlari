#include <stdio.h>
int main(){
    int urunfiyati1, urunfiyati2, urunfiyati3, maliyet;
    scanf("%d",&urunfiyati1);
    scanf("%d",&urunfiyati2);
    scanf("%d",&urunfiyati3);//%d burada sayi karsidan sayi degeri alır
    printf("\n urunfiyati1:%d \n urunfiyati2:%d \n urunfiyati3:%d \n", urunfiyati1,urunfiyati2,urunfiyati3);
    maliyet=0;
    maliyet= maliyet+urunfiyati1+urunfiyati2+urunfiyati3;
    printf("maliyet: %d\n",maliyet);//%d burada sayi degiskeninin degerini yazdirir
    return 0;
}

