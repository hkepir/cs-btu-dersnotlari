#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int sessizMi(char ch){

    char sessizHarfler[] = {'b', 'c', 'ç', 'd', 'f', 'g', 'ð', 'h', 'j', 'k',
                        'l', 'm', 'n', 'p', 'r', 's', 'þ', 't', 'v', 'y', 'z'};
    ch=tolower(ch);
    for(int i=0; i<21;i++){
        if(ch==sessizHarfler[i]){//tek bir harfin sesli mi sessiz mi kontrolu
            return 1;
        }
    return 0;
    }
}

int harfMi(char ch){
    return (ch >='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>=-64&&ch<=-1);//Turkce karakterler icin genisletildi
}//harfse 1 degilse 0 dondurur



void analiz(char dizi[]){
    int ayniKarakterSayisi=1;
    int ardArdaSessizSayisi=0;
    int i=0;
    int ihlalVar=0;
    char onceki='\0';

    while(dizi[i]!='\0'){
        char ch=tolower(dizi[i]);

        if(!harfMi(ch)){
            i++;
            continue;//bosluk ve noktalama atlanir
        }
        //Ayni Karakter Kontrolu
        if(ch==onceki){
            ayniKarakterSayisi++;
            if(ayniKarakterSayisi>=3){
                printf("Kural ihlati: 3 ardisik '%c'\n",ch);
                ihlalVar=1;
                break;
            }
        }else{
            ayniKarakterSayisi=1;
        }
        //Sessiz Harf Kontrolu
        if(sessizMi(ch)){
            ardArdaSessizSayisi++;
            if(ardArdaSessizSayisi>=4){
                printf("Kural ihlali: 4 ardýþýk sessiz harf\n");
                ihlalVar=1;
                break;
            }
        }else{
            ardArdaSessizSayisi=0;
        }
        onceki = ch;
        i++;
    }

   if(!ihlalVar){
    printf("Metin duz dile uygundur.\n");
   }
}

int main(){

    char metin[100];
    printf("Bir metin giriniz\n");
    fgets(metin,100,stdin);

    printf("Girilen metnin analizi\n");

    analiz(metin);

    return 0;
}
