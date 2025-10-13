#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/*

int main()
{
    char word[10];
    printf("Write a word:");
    //scanf("%s",word);//bosluk karakterine kadar calisir
    gets(word);
    puts(word);
    //printf("%s",word);

    char name_2 [4][10]={"ayse","ahmet","mehmet","canan"};
    int size = sizeof(name_2)/sizeof(name_2[0]);//Dizi satir sayisi

    printf("Harf harf yazdirma\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<10 && name_2[i][j] !='\0'; j++){
            printf("%c",name_2[i][j]);
        }
    printf("\n");
    }

    printf("Satir satir string olarak yazdirma\n");
    for(int i=0;i<size;i++){
        puts(name_2[i]);//name_2+i
    }

    //Pointer ile yazdir
    //int* ptr =name_2;


    printf("Harf harf yazdirma\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<10 && *(*(name_2+i)+j)!='\0'; j++){
            printf("%c",*(*(name_2+i)+j));
        }
    printf("\n");
    }

    //char(* ptr)[10] = name_2;
    printf("Satir satir string olarak yazdirma\n");
    for(int i=0;i<size;i++){
        puts(ptr+i);
    }
      return 0;
}

*/
//**********************************************ONEMLI**BILGI******
/*
int main() {
    char dizi[4][10] = {
        "ayse",
        "ahmet",
        "mehmet",
        "canan"
    };

    int satirSayisi = sizeof(dizi) / sizeof(dizi[0]);
    int sutunSayisi = sizeof(dizi[0]) / sizeof(dizi[0][0]);

    printf("Satir Sayisi: %d\n", satirSayisi);
    printf("Sutun Sayisi: %d\n", sutunSayisi);

    return 0;
}
*/
//********************************************************************
/*
    int main()
    {
    char kelime[11];
    scanf("%s",kelime);//bosluk karakterini okumaz
    printf("1.Kelime:%s\n",kelime);

    scanf("%7s",kelime);//ornegin kelime olarak programlama girilirse bellekte daha 3 byte yer olmasina ragmen okuma yapmaz
    printf("2.Kelime:\n");
    puts(kelime);//program

    gets(kelime);//lama      basar boyut asildigi icin
    printf("3.Kelime:\n");
    puts(kelime);

    }
*/
//Ýki boyutlu dizide pointer aritmetigi
int main()
{
    int elma[2][2]= {{10,20},{30,40}};
    printf("elma[0][0] adresi: %d\n",elma);
    printf("elma[0][0] degeri: %d\n",**(elma));
    printf("elma[0][1] degeri: %d\n",*(*(elma+0)+1));
    printf("elma[1][1] degeri: %d\n",*(*(elma+1)+1));

}

//Diziyi Pointer ile Fonksiyona Gönderme
//Burada ille de pointer aritmetigi kullanmak zorunda degiliz!!!


#include <stdio.h>

// Sesli harfleri bulma fonksiyonu
void sesliHarfBul(char (*dizi)[10], int satirSayisi) {
    printf("Sesli Harfler:\n");

    for (int i = 0; i < satirSayisi; i++) {
        for (int j = 0; dizi[i][j] != '\0'; j++) {
            char c = dizi[i][j];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o') {
                printf("%c ", c);
            }
        }
        printf("\n");
    }
}

int main() {
    // Ýki boyutlu karakter dizisi
    char isimler[4][10] = {
        "ayse",
        "ahmet",
        "mehmet",
        "canan"
    };

    // Dizinin satýr sayýsýný belirleme
    int satirSayisi = sizeof(isimler) / sizeof(isimler[0]);

    // Sesli harfleri bulma fonksiyonunu çaðýrma
    sesliHarfBul(isimler, satirSayisi);

    return 0;
}


//Diziyi Fonksiyona Gönderme

#include <stdio.h>

// Sesli harfleri bulma fonksiyonu
void sesliHarfBul(char dizi[][10], int satirSayisi) {
    printf("Sesli Harfler:\n");

    for (int i = 0; i < satirSayisi; i++) {
        for (int j = 0; dizi[i][j] != '\0'; j++) {
            char c = dizi[i][j];
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o') {
                printf("%c ", c);
            }
        }
        printf("\n");
    }
}

int main() {
    // Ýki boyutlu karakter dizisi
    char isimler[4][10] = {
        "ayse",
        "ahmet",
        "mehmet",
        "canan"
    };

    // Dizinin satýr sayýsýný belirleme
    int satirSayisi = sizeof(isimler) / sizeof(isimler[0]);

    // Sesli harfleri bulma fonksiyonunu çaðýrma
    sesliHarfBul(isimler, satirSayisi);

    return 0;
}

//--------------------------------------------------------------------
//Dersteki orneklerden
int palindrommu(char *X){
    char *Y=X+strlen(X)-1;
    int s=1; //s=1 ise X metni palindromdur

    while(X<Y){
        if(*X!=*Y){
            s=0;
            break;
        }
        X++;
        Y--;
    }
    return s;
}

int uzunluk(char *X){
    int s=0;

    while(*X!='\0'){
        s++;
        X++;
    }

    return s;
}


int main(){

char metin1[10];
printf("metin giriniz:\n");
gets(metin1);


printf("Metin1 uzunlugu: %d\n",uzunluk(metin1));

int sonuc =  palindrommu(metin1);
(sonuc==0)? printf("%s palindrom degil\n",metin1):printf("%s palindromdur\n",metin1);
}
//---------------------------------------------------------------------------------------

//Nergiz Cagiltay dizgiler
#include<stdio.h>
#include<string.h>
int main(){
char cumle[]="Bu bir ornek cumledir";
char* gstr;
gstr =strstr(cumle,"ornek");//strstr arama yapar

strncpy(gstr,"basit",5);//gstr gosterd,g, adresten itibaren 5 karakter birlestir

puts(cumle);
}

//-------------------------------------------------------------------------------------

//Kullanicidan iki dizgi iste ve karsilastir
int main(){
    char dizgi1[100];
    printf("Birinci dizgiyi giriniz: ");
    gets(dizgi1);

    char dizgi2[100];
    printf("\nIkinci dizgiyi giriniz: ");
    gets(dizgi2);

    if(strcmp(dizgi1,dizgi2)==0)
        printf("\n%s = %s",dizgi1,dizgi2);
    else
        printf("\n%s ile %s ayni kelime degil",dizgi1,dizgi2);
    return 0;
}
//-------------------------------------------------------------------------------------
//*************************************************************************************
//-------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

//String tersine cevirme strstr strncpy kullanarak

int main(){
char str1[30],str2[50];
int i,uzunluk;
printf("Bir Dizgi Giriniz:");
gets(str1);
uzunluk = strlen(str1);

for(int i=0;i<=uzunluk;i++){
    strncpy(&str2[i],&str1[uzunluk-i-1],1);
}
printf("\nDizginin ters cevrilmis hali: %s",str2);

}

//-------------------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>

// String'i tersine çeviren fonksiyon pointerlar ile
void tersCevir(char *strx) {
    char *ptr1 = strx;
    char *ptr2 = strx + strlen(strx) - 1;
    char temp;

    while (ptr1 < ptr2) {
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
        ptr1++;
        ptr2--;
    }
}

int main() {
    char kelime[] = "Merhaba";

    printf("Orijinal Kelime: %s\n", kelime);

    tersCevir(kelime);

    printf("Ters Cevirilmis Kelime: %s\n", kelime);

    return 0;
}
//-------------------------------------------------------------------

//Sadece dizi kullanarak bu islemi yap
#include <stdio.h>
int main() {
    char kelime[] = "Merhaba";
    int uzunluk = 0;

    // Dizinin uzunluðunu hesapla (strlen kullanmadan)
    while (kelime[uzunluk] != '\0') {
        uzunluk++;
    }

    // Diziyi tersine çevirme
    for (int i = 0; i < uzunluk / 2; i++) {
        char temp = kelime[i];
        kelime[i] = kelime[uzunluk - 1 - i];
        kelime[uzunluk - 1 - i] = temp;
    }

    printf("Tersine Cevirilmis Kelime: %s\n", kelime);

    return 0;
}

//----------------------------------------------------------------
#include <stdio.h>
#include <string.h>

int main() {
    char kelime[] = "Merhaba";

    printf("Orijinal Kelime: %s\n", kelime);

    // strrev fonksiyonunu kullanarak diziyi tersine çevirme
    strrev(kelime);

    printf("Tersine Cevirilmis Kelime: %s\n", kelime);

    return 0;
}


//-------------------------------------------------------------------------------------
//*************************************************************************************
//-------------------------------------------------------------------------------------
#include<stdio.h>

int uzunluk(char*);//prototip

int main()
{
    char* isimler[]={"Ercil","Selbes","Tokdemir","Turhan"};
    char* uzunisim;
    int max=0,boyut;

    for(int i=0;i<4;i++)
    {
        boyut=uzunluk(*(isimler+i));
        printf("Uzunluk: %d\n",boyut);

    if(boyut>max){
        max = boyut;
        uzunisim =isimler[i];
        }
    }
    printf("En uzun isim: %s, boyut: %d",uzunisim,max);
}

int uzunluk(char* s)
{
    int n =0;
    for( ;*s != '\0'; s++){
        n++;
   }
    return (n);
}

//---------------------------------------------------------
//Kitap Sonu Ornekleri

int main ()
{
    char dizgi1[]="Hosca";
    char dizgi2[]="kal";
    char dizgi3[30];

    strcat(dizgi1,dizgi2);
    printf("%s\n",dizgi1);//Hoscakal

    strcpy(dizgi3,strcat(dizgi1,dizgi2));
    printf("%s\n",dizgi3);//Hoscakalkal

    strncpy(dizgi3,"AAAAAA",6);
    printf("%s\n",dizgi3);//AAAAAAalkal

    strncat(dizgi3,dizgi1,4);
    printf("%s\n",dizgi3);//AAAAAAalkalHosc

    return 0;
}

//---------------------------------------------------------

#include<string.h>
#include<stdio.h>

int main()
{
    char metin[]="still learning c language but lm happy to learn new information";
    char aranan[]="still";

    char* konum= strstr(metin,aranan);//strstr buldugu yerdeki adresi dondurur
    //Yani konum pointeri bir adres tutar

    if(konum!=NULL){
        int pozisyon = konum - metin;//metin[0]
        printf("%s kelimesi %d. karakterden basliyor\n",aranan,pozisyon+1);
        printf("%s kelimesi %d. karakterden basliyor\n",aranan,pozisyon);
    }
    else
        printf("%s kelimesi metinde bulunamadi\n",aranan);

    return 0;
}

//---------------------------------------------------------------------------------
//SORU 4

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Tekrarlayan isim fonksiyonu
void tekrarlayan_isim(char *isim, char *sonuc) {//void tekrarlayan_isim(char isim[], char sonuc[])
    int uzunluk = strlen(isim);
    int index = 0;

    for (int i = 0; i < uzunluk; i++) {
        for (int j = 0; j <= i; j++) {
            sonuc[index] = isim[j];
            index++;
        }
    }
    sonuc[index] = '\0'; // Sonucu sonlandýr
}

int main() {
    char isim[100];
    printf("Ýsim giriniz: ");
    scanf("%s", isim);//gets(isim);

    char sonuc[1000]; // Sonucun uzunluðunu belirlemek için büyük bir dizi
    tekrarlayan_isim(isim, sonuc);

    printf("Tekrarlayan isim: %s\n", sonuc);
    return 0;
}

//-----------------------------------------------------------------------------
//Girilen cumlede her harften kac tane oldugunu Dizilerle veren kod Fehmi_Uyar Ders79

#include<stdio.h>

int main()
{
    char x[100];
    int y[26],i=0;
    printf("Enter a sentence with dot:");

    do{
        scanf("%c",&x[i]);
        i++;
    }while(x[i-1] !='.');

    countCharacters(x,y);

    for(i=0;i<26;i++){
        printf("%c/%c: %d\n",'A'+i,'a'+i,y[i]);//Hepsini yazdir
    }
    return 0;
}

void countCharacters(char x[],int y[]){
    int i,j;
    for(i=0;i<26;i++){
        y[i]=0;
    }

    for(i=0;x[i]!='.';i++){
        if(x[i]>='A'&&x[i]<='Z')
           y[(int)x[i]-(int)'A']++;//ornegin x[0] int ve ondan a nin int degerini cikararak
       if(x[i]>='a'&&x[i]<='z')
           y[(int)x[i]-(int)'a']++;                           //65-65=0 66-65=1 67-65=2 ... 67:C nin asc2 degeri
    }
}
//-------------------------------------------------------------------------------------------------------
//Ders 112 Programlamada Girilen Cümlede Harflerin Kacar Kez Kullanildigini Bulma
//tum cumleyi kucuk veya buyuk harfe cevirme sebebi sabit bir farki cikarip diziye erisme
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void hesapla(char* ptr);

int main()
{
    char message[100];
    puts("Enter a sentence:");
    gets(message);
    hesapla(message);
    return 0;
}

void hesapla(char* ptr)
{
    int letters[26],i=0,length;
    char activeLetter;
    length=strlen(ptr);

    for(i=0;i<26;i++){
        letters[i]=0;
    }
    for(i=0;i<length;i++){
        activeLetter=tolower(*(ptr+i));
        letters[activeLetter-97]++;
    }
    printf("Letter\Repeat\n");
    printf("------\------\n");

    for(i=0;i<26;i++){
        if(letters[i]!=0){
            printf("%c\t%d\n",i+97,letter[i]);
        }
    }
}



























