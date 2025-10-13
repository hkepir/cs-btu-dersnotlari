//Dizinin Fonksiyonda kullanilmasi

#include <stdio.h>
#include <stdlib.h>

//ZOR Diziyi tersine çeviren fonksiyon

//_________________________________________________________Dinamik bellek kullanarak

void diziTersine(int dizi[], int uzunluk) {
    // Eger dizi boşsa veya tek elemanliysa, oldugu gibi döndur
    if (uzunluk <= 1) {
        return;
    }

    // Yeni bir dizi oluştur
    int *dizi2 = (int*)malloc(uzunluk * sizeof(int));

    // Diziyi tersine çevirme
    for (int i = 0; i < uzunluk; i++) {
        dizi2[i] = dizi[uzunluk - 1 - i];
    }

    // Sonuçlari orijinal diziye kopyala
    for (int i = 0; i < uzunluk; i++) {
        dizi[i] = dizi2[i];
    }

    // Dinamik bellegi serbest birakma
    free(dizi2);
}

int main() {
    int dizi[] = {2, 3, 4, 5};
    int uzunluk = sizeof(dizi) / sizeof(dizi[0]); // Dizinin eleman sayisini hesaplar

    diziTersine(dizi, uzunluk);

    // Sonucu yazdir
    for (int i = 0; i < uzunluk; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}
*/

//____________________________________________________Statik bellek kullanarak

void diziTersine(int dizi[], int uzunluk) {
    for (int i = 0; i < uzunluk / 2; i++) {
        int temp = dizi[i];
        dizi[i] = dizi[uzunluk - 1 - i];
        dizi[uzunluk - 1 - i] = temp;
    }
}

int main() {
    printf("Dizi Boyutunu Giriniz:\n");
    int n;
    scanf("%d", &n);

    int dizi[n];

    printf("Sayilari giriniz.\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    // Diziyi tersine çevir
    diziTersine(dizi, n);

    // Tersine çevrilmiş diziyi yazdir
    printf("Tersine Cevrilmis Dizi:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}

*/
//ORTA

void tersDizi (int dizi[],int uzunluk)
{
 for(int i=0;i<uzunluk/2;i++)// 2'ye bolme islemi yapilmazsa tekrar ayni dizie elde edilir
 {
     int temp = dizi[i];
     dizi[i] = dizi[uzunluk-1-i];
     dizi[uzunluk-1-i] = temp;
 }
}


int main()
{
    printf("Dizi Boyutunu Giriniz:\n");
    int n;
    scanf("%d",&n);

    int dizi[n];

    printf("Sayilari giriniz.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    tersDizi(dizi,n);
    for(int i=0;i<n;i++)
    {
        printf("%d",dizi[i]);
    }
}


//KOLAY

double ortalamaHesapla (int dizi[],int uzunluk);

int main()
{
    printf("Dizi Boyutunu Giriniz:\n");
    int n;
    scanf("%d",&n);

    int dizi[n];

    printf("Sayilari giriniz.\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&dizi[i]);
    }
    printf("Girilen sayilarin ortalamasi: %.2lf",ortalamaHesapla(dizi,n));
}
double ortalamaHesapla(int dizi[],int uzunluk)
{
    double toplam = 0;
    for(int i=0;i<uzunluk;i++)
    {
    toplam +=dizi[i];
    }
    return toplam/uzunluk;
}



int main()
{
    int dizi[5];
    int *p;
    p=dizi;//&dizi

    srand(time(0));

    for(int i=0;i<5;i++)
    {
        dizi[i]=rand()%50;
    }

    printf("Dizi Elemanlari:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));//dizi[i]
    }

    printf("\n");
     for(int i=0;i<5;i++)
    {
        printf("\n%d",*p+i);//Bu kullanimi dizi ile yapabilir miyim??????????????___________________________________________________________
    }




    //dizinin her elemani bir arttirilir
    printf("\n");
     for(int i=0;i<5;i++)
    {
        printf("\n%d",dizi[i] +=1);
    }

    printf("\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i)+1);//dizi[i]+1
    }


    printf("\n");
     for(int i=0;i<5;i++)
    {
        printf("\n%d",*(dizi+i));//adresleri yazdirir
    }



    //En Buyuk Elemani Bulma

    int* enBuyukElemanAdres(int dizi[],int uzunluk)
    {
     int* x =dizi;
     for(int i=0;i<uzunluk;i++){
     if(dizi[i]> *x)
        x = &dizi[i];
     }
    return x;
    }

    int main()
    {
     int dizi[5];
     int *p;

     printf("5 elemanli diziyi giriniz:\n");
     for(int i=0;i<5;i++){
     scanf("%d",&dizi[i]);
     }

     p = enBuyukElemanAdres(dizi,5);
     if(p !=NULL){
        printf("Dizideki en buyuk eleman: %d\n",*p);
     }else{
        printf("Dizi bos veya gecersiz\n");
     }
    return 0;
}


//Quiz Sorusu

#include <stdio.h>

void isimYazdir(char dizi[][10]);
void toUpperCase(char dizi[][10], int satir);

int main() {
    char isim[2][10] = {"Ali", "Veli"};

    isimYazdir(isim);
    toUpperCase(isim, 2); // Diziyi büyük harfe çevir
    for (int i = 0; i < 2; i++) {
        printf("%s\n", isim[i]); // Büyük harfe çevrilmiş halini yazdır
    }
    return 0;
}

void isimYazdir(char dizi[][10]) {
    int* ptr = dizi;
    //printf("deneme %c\n",*(ptr+1));
    for (int i = 0; i < 2; i++) {       // 2 satır için
        for (int j = 0; j < 10; j++) {  // 10 sütun için
            if (*(*(dizi + i) + j) == '\0')    // '\0' ile karşılaşırsa dur
                break;
            printf("%c", *(*(dizi + i) + j)); // Harf harf yazdır dizi[i][j]
        }
        printf("\n"); // Her kelime sonunda yeni satır
    }
}



void toUpperCase(char dizi[][10], int satir) {
    char* ptr = &dizi[0][0]; // Dizinin ilk elemanını işaret eden pointer
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < 10; j++) {
            if (*(ptr + i * 10 + j) == '\0') // '\0' ile karşılaşınca döngüden çık
                break;
            if (*(ptr + i * 10 + j) >= 'a' && *(ptr + i * 10 + j) <= 'z') {//97 122
                *(ptr + i * 10 + j) -= 32; // Küçük harfi büyük harfe çevir
            }
        }
    }
}

#include<stdlib.h>
int main()
{
    char selam[] = "Merhaba";
    printf("sizeSizeof = %d\n", sizeof(selam));
    printf("sizeStrlen = %d\n", strlen(selam));

}
//----------------------------------------------------------------------------------------
//MUKEMMEL SAYI FONKSIYON

#include <stdio.h>

// Mukemmel sayiyi kontrol eden yardimci fonksiyon
int mukemmelSayiMi(int sayi) {
    int toplam = 0;
    for (int i = 1; i < sayi; i++) {
        if (sayi % i == 0) { // Eger i, sayinin böleniyse
            toplam += i;
        }
    }
    return toplam == sayi; // Mukemmel sayi ise 1 döner, degilse 0
}

// Bir dizideki her elemanin mukemmel olup olmadigini kontrol eden fonksiyon
void mukemmelKontrol(int dizi[], int boyut, int sonuc[]) {
    for (int i = 0; i < boyut; i++) {
        sonuc[i] = mukemmelSayiMi(dizi[i]); // Her eleman için kontrol yap
    }
}

int main() {
    int dizi[] = {6, 28, 12, 15, 496, 9}; // Kontrol edilecek dizi
    int boyut = sizeof(dizi) / sizeof(dizi[0]); // Dizinin boyutunu hesapla
    int sonuc[boyut]; // Sonuçlari tutacak dizi (1: mukemmel, 0: degil)

    // Mukemmel sayi kontrolu yap
    mukemmelKontrol(dizi, boyut, sonuc);

    // Sonuçlari ekrana yazdir
    printf("Dizideki mukemmel sayi analizi:\n");
    for (int i = 0; i < boyut; i++) {
        printf("Eleman: %d - %s\n", dizi[i], sonuc[i] ? "Mukemmel" : "Degil");
    }

    return 0;
}
//--------------------------------------------------------------------------------


#include <stdio.h>
#include <stdarg.h>

// İsimleri çeviren fonksiyon
    void isimleri_cevir(int n, ...)
    {
        va_list args;
        va_start(args, n);

        for (int i = 0; i < n; i++)
        {
            char *isim = va_arg(args, char*);

            // İsmi çevirme işlemi
        for (int j = 0; isim[j] != '\0'; j++)
        {
            if (isim[j] >= 'a' && isim[j] <= 'z')
            {
                isim[j] = isim[j] - ('a' - 'A');
            }
            else if (isim[j] >= 'A' && isim[j] <= 'Z')
            {
                isim[j] = isim[j] + ('a' - 'A');
            }
        }

        printf("Cevirilmis isim: %s\n", isim);
    }

    va_end(args);
  }

    int main()
    {
        // İsimler
        char isim1[] = "Gonca";
        char isim2[] = "MEHMET";
        char isim3[] = "aLI";

        // İsimleri çevir ve yazdır
        isimleri_cevir(3, isim1, isim2, isim3);

        return 0;
    }
































