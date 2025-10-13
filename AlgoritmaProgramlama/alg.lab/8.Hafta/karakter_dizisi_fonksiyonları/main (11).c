#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    //strstr()
     char can[100]="C dilini ogreniyoruz, hilal de c dilini ogreniyor.";
     char *sub;
     sub=strstr(can,"ogr");
     printf("\nArama sonrasi yeni string: %s",sub);

//sub: strstr fonksiyonunun dondurecegi alt dizinin baslangic adresini tutacak bir karakter isaretcisidir (char *).


    char*aranan_kelime;
    aranan_kelime=strstr(can,"hi");
    printf("\nAranan kelime: %s",aranan_kelime);

//strstr fonksiyonu aranan kelimeyi bulduktan sonra, bulunan kelimenin baþlangýç adresini döndürür.
//Bu adres, stringin o noktasýndan itibaren sonuna kadar (null karakter \0 dahil) kalan tüm kýsmýný ifade eder.


    return 0;
}
