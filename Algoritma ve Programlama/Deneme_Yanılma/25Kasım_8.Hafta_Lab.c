#include<stdio.h>
#include<stdlib.h>
int main(){

/*    char sentence[100];
    int i;
    printf("Cumle giriniz:");
    gets(sentence);

    //strrev(sentence);
    //fonksiyonu kullanmadan

    for(i= strlen(sentence);i>=0;i--){
       printf("%c",sentence[i]);

    }

    //printf("Girilen cumlenin ters hali:%s\n\n",sentence);
*/

//Harf Arama

/*    char cumle[100];
    char aranan_harf;
    int harf_pozisyon[100];
    int sayac=0;

    printf("Cumle giriniz:");
    gets(cumle);

    printf("Aranamak istenen harfi giriniz:");
    scanf("%c",&aranan_harf);

    for(int i=0;cumle[i]!='\0';i++){

        if(cumle[i]==aranan_harf){
        harf_pozisyon[sayac]=i+1;//pozisyonlari 1 den baslatarak dizide sakliyoruz
        sayac++;
        }
    }

    printf("cumlede '%c' harfi %d kez bulunuyor.\n",aranan_harf,sayac);
     printf("Bu harfin cumledeki pozisyonlari:\n");
    for(int i=0;i<sayac;i++){
        printf("%d\n",harf_pozisyon[i]);

    }

*/

//Bi tik Degisik version

/*  char cumle[100];
    char aranacakHarf;
    int pozisyonlar[100];
    int sayac = 0;

    // Kullanicidan cümleyi alma (dikkat: gets güvenli degildir)
    printf("Bir cümle giriniz: ");
    gets(cumle); // gets kullanimi, bu fonksiyon güvensiz oldugu için genellikle onerilmez

    // Kullanicidan aranacak harfi alma
    printf("Aranacak harfi giriniz: ");
    scanf(" %c", &aranacakHarf);

    // Döngü ile cümlenin her karakterini kontrol etme
    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == aranacakHarf) {
            pozisyonlar[sayac] = i + 1; // Pozisyonlari 1'den baslatarak dizide sakliyoruz
            sayac++;
        }
    }

    // Sonuçlari ekrana yazdirma
    if (sayac == 0) {
        printf("Aradiginiz harf bulunamadi\n");
    } else {
        printf("Toplam bulunan harf sayisi: %d\n", sayac);
        printf("Harfin bulundugu pozisyonlar: ");
        for (int i = 0; i < sayac; i++) {
            printf("%d ", pozisyonlar[i]);
        }
        printf("\n");
    }


*/

//Girilen Bir Cumlenin Kelimelerinin Bas Harfini Buyuk Harf Yapma


/*    char  kelimeDizisi[100];
    char dizininBuyuk[100];

    printf("Lutfen bir cumle giriniz:\n");
    gets(kelimeDizisi);

    for(int i=0;strlen(kelimeDizisi)>=i;i++){
        if(kelimeDizisi[i]==' ')
            kelimeDizisi[i+1]=toupper(kelimeDizisi[i+1]);


        //otomatik olarak ilk harfi buyuk yapma
        else
        if(i==0)
            kelimeDizisi[i]=toupper(kelimeDizisi[i]);
    }
    printf("\nCumle: %s",kelimeDizisi);

*/



























}
