#include<stdio.h>
#include<stdlib.h>
int main(){

    char kelime[100];
    char kelime_ters[100];
    char birlesik_kelime[200];
    char kopyalanan_kelime[200];

    printf("Kelime Giriniz:");
    gets(kelime);
    printf("Kelimenin Uzunlugu:%d\n",strlen(kelime));

   //Kelimenin Tersi Ýçin
   strcpy(kelime_ters,kelime);//orijinal kelime yedeklemesi
    strrev(kelime_ters);//yedegin tersi
    printf("Kelimenin Tersi:%s\n",kelime_ters);


    printf("Kelime Palindrom mu?");
    if(strcmp(kelime,kelime_ters)==0){
        printf("Evet\n");

        strcpy(birlesik_kelime,kelime);
        strcat(birlesik_kelime,kelime_ters);
        printf("Birlestirilmis Kelime:%s\n",birlesik_kelime);

        strcpy(kopyalanan_kelime,birlesik_kelime);
        printf("Kopyalanmis Kelime:%s\n",kopyalanan_kelime);

    }else
        printf("Hayir");

    return 0;
}
