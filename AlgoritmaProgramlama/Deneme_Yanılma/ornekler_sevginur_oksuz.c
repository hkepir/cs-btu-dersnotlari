//Sevgi Nur Öksüz
//Ögrenci No: 21360859073
//Bilgisayar Mühendisligi 1. Sinif
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //arr isimli bir tam sayi dizisi tanimlanir
    int arr[10]={1,1,3,3,3,5,7,9,9,9};
    int dizi[10]; //Tekrar eden karakterleri ayirmak için dizi isimli tam sayi dizisi tanimlanir.

    //for dongusu kurularak dizinin ozgun elemanlari yazdirilir.
    for(int i=0;i<10;i++){
        int temp=0; //Kontrol için temp isimli gecici degisken tanimlanir.
        for(int j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                temp++;
            }
        }
        if(temp==0){  // temp=0 ise dizi elemanlari ekrana yazdirilir.
        printf("%d ",arr[i]);
        }
    }






    char isim[8]={'s','e','v','g','i','n','u','r'}; //isim adli bir char dizisi tanimlanir.
    int i;
    int elemanSayisi=(sizeof isim/sizeof*isim); //isim dizisinin boyutu sizeofla bulunur.
    char tersIsim[elemanSayisi]; //isim dizisinin tersi yazdirilacak tersIsim dizisi tanimlanir.
    int temp=0;
    for(i=elemanSayisi-1;i>=0;i--){ //for dongusu kurulur.
        tersIsim[i]=isim[temp]; //isim dizisindeki eleman tersIsim dizisindeki elemana eþit ise temp isimli sayac bir artirilir.
        temp++;
    }
    for(int j=0;j<elemanSayisi;j++){ //for dongusu kurulur.
    printf("%c",tersIsim[j]);  //isim dizisinin tersi tersIsim dizisine yazdirilir.
    }
    return 0;
}



  int i,j;
    int arr[5]={3,6,9,12,15};  //arr isimli bir tam sayi dizisi tanimlanir.
    printf("Lutfen bir tam sayi giriniz="); //Kullanicidan bir tam sayi degeri girmesi istenir.
    scanf("%d",&i);
    int sayac=0;
    for(j=0; j<5; j++){
        if(i==arr[j]){  //Kullanicidan alinan tam sayi degeri dizide var mi kontrol edilir.
            printf("%d",j); //Kullanicidan alinan tam sayinin dizideki indisi ekrana yazdirilir.
            sayac++; //Kullanicidan alinan deger dizide varsa sayac 1 artirilir.
        }
    }
    if(sayac==0){ //Kullanicidan alinan deger dizide yoksa yani sayac=0 ise -1 yazdirilir.
        printf("-1");
    }
    return 0;




}
