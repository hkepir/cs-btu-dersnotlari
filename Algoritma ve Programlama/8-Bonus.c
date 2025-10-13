#include <stdio.h>

int kelime_ara(char m1[],char m2[],int m1i,int m2i,int m1s,int m2s){
//m2'yi m1'in içinde arýyoruz
//m1i, m1 metninde karþýlaþtýrmaya BAÞLANAN indisi
//m2i, m2 metninde karþýlaþtýrmaya BAÞLANAN indisi
//m1s, m1 metninde karþýlaþtýrmaya baþlanan indisi ne kadar GEÇTÝÐÝMÝZÝ
//m2s, m2 metninde karþýlaþtýrmaya baþlanan indisi ne kadar GEÇTÝÐÝMÝZÝ
//gösterir.

/*1*/   if((m1[m1i+m1s]=='\0')&&(m2[m2i+m2s]=='\0'))
            return 1;
/*2*/   else if(m1[m1i+m1s]=='\0')
            return 0;
/*3*/   else if(m2[m2i+m2s]=='\0')
            return 1+kelime_ara(m1,m2,m1i+1,0,0,0);
/*4*/   else if(m1[m1i+m1s]==m2[m2i+m2s])
            return 0+kelime_ara(m1,m2,m1i,m2i,m1s+1,m2s+1);
/*5*/   else
            return 0+kelime_ara(m1,m2,m1i+1,0,0,0);
}

/*
kelime_ara için 5 tane senaryomuz var:
1-  m1: BUGUN HAVA COK GUZEL HAVA(\0)
    m2:                      HAVA(\0)

Bu senaryoda m2'yi tam olarak m1'in sonunda buluyoruz.
Bu senaryoda m1i=21, m1s=4, m2i=0, m2s=4 olur.
m1[m1i+m1s]=m1[21+4]=m1[25]=(\0)'dýr
m2[m2i+m2s]=m2[0+4]=m2[4]=(\0)'dýr
Yani, m2="HAVA" kelimesinin tüm harflerini m1'deki karþýlýðýyla
eþleþtirebildiðimizi, her iki metinde de \0'a ulaþtýðýmýzý gösterir
O yüzden bu son eþleþme için 1 döndürüyoruz ("Burda 1 tane
eþleþme oldu." manasýnda)

2-  m1: BUGUN HAVA COK GUZEL HAVA(\0)
    m2:                       HAV A  (\0)

Bu senaryoda m2'nin sonuna (\0) ulaþamadan m1'in sonuna geldiðimizi
kabul ediyoruz. Bu durumda, BU POZÝSYONDAN ÝTÝBAREN baþka bir eþleþme
mümkün deðildir. O yüzden "BU POZÝSYONDAN ÝTÝBAREN eþleþme sayýsý 0'dýr"
deyip 0 döndürüyoruz.

3-  m1: BUGUN HAVA    COK GUZEL HAVA(\0)
    m2:       HAVA(\0)

Bu senaryoda m2:HAVA'nýn sonunda \0 karakterine ulaþabildik. Yani,
m1[m1i+0]'dan m1[m1i+3]'e kadar olan tüm karakterler
m2[0+0]'dan m2[0+3]'e kadar olan tüm karakterlerle baþarýyla eþleþmiþtir
Yani m2'yi m1'in içinde bulduk. Bunun için bulunma sayýsýna 1 eklemeliyiz.
Bu nedenle return 1+kelime_ara(m1,m2,m1i+1,0,0,0); diyoruz
Burada aradýðýmýzý bulduktan sonra
m1: BUGUN HAVA  C  OK GUZEL HAVA(\0)
m2:        HAVA(\0)
þeklinde m2'yi 1 saða kaydýrarak aramaya devam etmeliyiz.
Bu yüzden kelime_ara(m1,m2,m1i+1,0,0,0) kýsmýnda m1i+1 diyoruz

4-Eðer ilk 3 senaryo gerçekleþmemiþse ve bu senaryodaki
m1[m1i+m1s]==m2[m2i+m2s] koþulu gerçekleþmiþse bunun anlamý
m2'nin þimdiye kadar m2s+1 tane karakteri m1'dekilerle eþleþmiþtir
Yani m1'deki HAV ile m2'deki HAV eþleþti gibi düþünün.
Daha eþleþtirilmeye çalýþacak A harfleri var.
Bu durumda henüz bir tam eþleþme olmadý. Her iki metinde de
1 pozisyon ileri bakýlmalý. O yüzden m1s+1, m2s+1->
return 0+kelime_ara(m1,m2,m1i,m2i,m1s+1,m2s+1); olmalý.
0+ ... denmesinin nedeni bu karþýlaþtýrma adýmýnda tam eþleþme
olmamasý

5-Eðer 4. senaryo olmazsa o zaman bu, m1[m1i+m1s]!=m2[m2i+m2s]
anlamýna gelir. Bu ne zaman gerçekleþir?->

m1: BUGUN HAVA COK GUZEL HAVA(\0)
m2: HAVA(\0)

Daha ilk B-H karþýlaþtýrmasýnda bu senaryo gerçekleþir. m2'yi
saða 1 poziyon kaydýrmak lazým. m1i+1 yaparak BUGUN'deki B'den
sonra gelen U harfine geçeriz ve ->

m1: BUGUN HAVA COK GUZEL HAVA(\0)
m2:  HAVA(\0)

Bu sefer U ile H'ý kýyaslayabiliriz. Ýþte bu ayarlamayý
return 0+kelime_ara(m1,m2,m1i+1,0,0,0);
ile yapýyoruz. 0+... olmasýnýn nedeni B ile H eþleþmediði
için bu denemede 0 tane eþleþme bulmuþ olmamýzdan
*/

void main(){
    char cumle[]="BUGUN HAVA COK GUZEL HAVA";
    char aranan[]="HAVA";
    int sayac=kelime_ara(cumle,aranan,0,0,0,0);
    printf("Cumlede %s kelimesi %d kez geciyor.",aranan,sayac);
}
