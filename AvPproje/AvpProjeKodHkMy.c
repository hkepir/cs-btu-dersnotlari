/*
#Madina Yusupova 24360859922 1.Sinif Btu-Bm
#Hilal Kepir 23360859088 1.Sinif Btu-Bm
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_AD_UZUNLUGU 50
#define MAX_SAGLIK 100
#define MAX_SEVIYE 100
#define MAX_CAN 100
#define MAX_TEMIZLIK 100
#define MAX_UYKU 100
#define MAX_TOKLUK 100
#define MAX_DENEYIM 100
#define ILK_ALTIN 10
#define MAX_BECERI 25

#define SINIR_KONTROL(deger, min, max) ((deger < min) ? min : ((deger > max) ? max : deger))

typedef struct
{
    char isim[MAX_AD_UZUNLUGU];
    char element[MAX_AD_UZUNLUGU];

    int tokluk;// temel nitelik
    int uyku;// temel nitelik
    int saglik;// eklenen 1.temel nitelik
    int temizlik;// eklenen 2.temel niteklik
    int deneyim;// eklenen 3.temel nitelik
    int seviye;// eklenen 4.temel nitelik
    int can;// eklenen 5.temel nitelik

    int guc;// beceri
    int ceviklik;// beceri
    int dayaniklilik;// beceri
    int karizma;//beceri
    int toplamaBecerisi;//beceri
    int altin;
} Karakter;

void bufferTemizle()
{ int c;
while ((c = getchar()) != '\n' && c != EOF) {}
}

void gecikme(int milisaniye)
{
    volatile long uzunSure = milisaniye * 1000000;
    while(uzunSure--);
}

void harfHarfYazdir(const char *metin)
{
    while (*metin != '\0')
    {
        printf("%c", *metin);  // Her harfi yazdir
        gecikme(100);           // 50 ms bekleme
        metin++;
    }
    printf("\n");
}//Bu fonkiyonu kullanmak icin geeksforgeeks.org websitesinden faydalandik.

void karakteriBaslat(Karakter *karakter)
{
    //Karakter Nitelikleri
    karakter->saglik = MAX_SAGLIK;
    karakter->tokluk = 50;
    karakter->uyku = 50;
    karakter->temizlik = 50;
    karakter->deneyim = 0;
    karakter->seviye = 1;
    karakter->can = 100;
    karakter->altin = ILK_ALTIN;

    //Karakter Becerileri
    //Karakter Becerierinin 3 ile baslatilmasi
    karakter->guc = 3;
    karakter->ceviklik = 3;
    karakter->dayaniklilik = 3;
    karakter->karizma = 3;
    karakter->toplamaBecerisi = 3;


    printf("**GALAKSIYAR** OYUNU BASLATMAK ISTER MISINIZ ?\n\n");
    printf("Sayi Seciniz: \n");
    printf("0.Hayir\n");
    printf("1.Evet\n");
    int cevap;
    scanf("%d",&cevap);
    char c;
    if(cevap == 1)
    {
        harfHarfYazdir("\nOyun Basliyor...\n");
        harfHarfYazdir("Dunya degisti...Her yer galaksilere bolundu.Hayatta kalmak icin galaksileri kesfedip, ogrenmelisin.");
        harfHarfYazdir("Ozel elementin ve gucun yeni dunyayi galaksiler boyunca kesfetmende sana yardimci olacak bir bonus.");
        harfHarfYazdir("Seni Galaksiler arasi bir macera bekliyor.Hazir misin?... \n");
        printf("Kahramanin adini giriniz: ");
        scanf("%s", karakter->isim);
        printf("Karakterin elementini giriniz (Ates,Su,Toprak,Hava,vb...): ");//Burada kullanici istedigini girebilir ORN: Demir, Tahta)
        scanf("%s", karakter->element);
    }
    else if(cevap == 0)
    {
        printf("Oyundan cikmak istediginizden emin misiniz? \n");
        printf("0. Hayir, Oyuna devam et\n");
        printf("1. Evet\n");
        int c;
        scanf("%d", &c);

        if(c == 1){
        printf("Oyundan Ciktiniz...\n");
        exit(0);//veya return 0; kullanilabilir
        }
        else if(c == 0)
        {
        printf("Oyuna devam ediliyor...\n");
        karakteriBaslat(karakter);
        }
        else
        {
        printf("Gecersiz secim.Oyundan Ciktiniz...\n");
        exit(0);
        }
    }
    else
    {
    printf("Gecersiz secim. Oyundan Ciktiniz...\n");
    exit(0);
    }

}

void durumGoster(Karakter *karakter)
{
    printf("\n--- Karakter Durumu ---\n");
    printf("Isim: %s\n", karakter->isim);
    printf("Element: %s\n", karakter->element);
    printf("Saglik: %d\n", karakter->saglik);
    printf("Tokluk: %d\n", karakter->tokluk);
    printf("Uyku: %d\n", karakter->uyku);
    printf("Temizlik: %d\n", karakter->temizlik);
    printf("Deneyim: %d\n", karakter->deneyim);
    printf("Seviye: %d\n", karakter->seviye);
    printf("Can: %d\n", karakter->can);
    printf("\n---Kasa---\n");
    printf("Altin: %d\n", karakter->altin);
    printf("\n---Karakter Becerileri---\n");
    printf("Guc: %d\n", karakter->guc);
    printf("Ceviklik: %d\n", karakter->ceviklik);
    printf("Dayaniklilik: %d\n", karakter->dayaniklilik);
    printf("Karizma: %d\n",karakter->karizma);
    printf("Toplayicilik: %d\n",karakter->toplamaBecerisi);
    printf("------------------------\n");
}

void dunya(Karakter *karakter)
{
    int secim;
    do
    {
        printf("\nDunya'dasiniz. Bir eylem seciniz:\n");
        printf("1- Elementini kullan\n");
        printf("2- Okyanusa dal\n");
        printf("3- Bulutlarin ustunde uyu\n");
        printf("4- Evine git\n");
        printf("5- Menuye don\n");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1:
            printf("%s Element ile gosteri yapiyor.\n", karakter->isim);
            karakter->temizlik = SINIR_KONTROL(karakter->temizlik - 5, 0, MAX_TEMIZLIK);
            karakter->karizma = SINIR_KONTROL(karakter->karizma +10,0,MAX_BECERI);
            karakter->deneyim = SINIR_KONTROL(karakter->deneyim +20,0,MAX_DENEYIM);
            karakter->guc = SINIR_KONTROL(karakter->guc -3,0,MAX_BECERI);

            int kazanilanAltin= 10 + karakter->karizma*(karakter->temizlik/100);//Proje dokumanindaki formule gore kazanilan altin hesaplandi
            printf("%s %s elementi ile gosteri yapiyor. Karizma artti, temizlik azaldi, guc azaldi.\n", karakter->isim,karakter->element);
            printf("Kazanilan altin: %d\n",kazanilanAltin);
            karakter->altin += kazanilanAltin; //kazanilan altin eklendi
            break;
        case 2:
            printf("%s Okyanusta yuzuyor.\n", karakter->isim);
            karakter->temizlik = SINIR_KONTROL(karakter->temizlik + 10, 0, MAX_TEMIZLIK);
            printf("Temizlik: %d\n",karakter->temizlik);
            break;
        case 3:
            printf("%s Bulutlarin ustunde uyuyor.\n", karakter->isim);
            karakter->uyku = SINIR_KONTROL(karakter->uyku + 20, 0, MAX_UYKU);
            karakter->guc = SINIR_KONTROL(karakter->guc +10,0,MAX_BECERI);
            karakter->temizlik = SINIR_KONTROL(karakter->temizlik - 7, 0, MAX_TEMIZLIK);
            karakter->tokluk = SINIR_KONTROL(karakter->tokluk - 10, 0, MAX_TOKLUK);

            printf("Uyku 20 artti\n");
            printf("Guc 10 artti\n");
            printf("Temizlik 7 azaldi\n");
            printf("Tokluk 8 azaldi\n");
            break;
        case 4:
            printf("Eve donuluyor...\n");
            break;
        case 5:
            printf("Ana Menuye donuluyor.\n");
            break;
        default:
            printf("Gecersiz secim!\n");
            break;
        }
    }
    while(secim!=5);
}

void macerayaAtil(Karakter *karakter)
{
    int secim;
    do
    {
        printf("\n--- Maceraya Atil ---\n");
        printf("1- Hazine Ara\n");//ekstra eklendi
        printf("2- Maceraya Atil\n");
        printf("3- Floria Galaxy'ye Git ve Sifali Bitki Topla\n");
        printf("4- Tropika Galaxy'ye Git ve Egzotik Meyve Ara\n");
        printf("5- Ana Menuye Don\n");
        printf("Bir secim yapin: ");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1:
        {
            printf("\nHazine alanina hos geldiniz!\n");//Bu bolum oyuna ekstra altin kaynagi saglamak icin eklenmistir.
            printf("Zorluk seviyesini secin:\n");
            printf("1- Kolay (10-20 altin bulma sansi)\n");
            printf("2- Orta (20-40 altin bulma sansi)\n");
            printf("3- Zor (50-80 altin bulma sansi, ama biraz yorgunluk kazanirsiniz)\n");
            int zorlukSecim;
            scanf("%d", &zorlukSecim);
            int bulunanAltin = 0;
            switch (zorlukSecim)
            {
            case 1:
                bulunanAltin = rand() % 11 + 10; // 10-20 arasinda altin
                printf("Kesif basarili! %d altin buldunuz.\n", bulunanAltin);
                karakter->altin += bulunanAltin;
                break;
            case 2:
                bulunanAltin = rand() % 21 + 20; // 20-40 arasinda altin
                printf("Kesif basarili! %d altin buldunuz.\n", bulunanAltin);
                karakter->altin += bulunanAltin;
                break;
            case 3:
                bulunanAltin = rand() % 31 + 50; // 50-80 arasinda altin
                printf("Zor kesif tamamlandi! %d altin buldunuz, uyku azaldi.\n", bulunanAltin);
                karakter->altin += bulunanAltin;
                karakter->uyku = SINIR_KONTROL(karakter->uyku - 10, 0, MAX_UYKU); // Yorgunluk artiyor
                break;
            default:
                printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
            }
        }
        break;
        case 2:
        {
            printf("Gorev secin:\n");
            printf("1- Kayip uzay haritasini bul (Kolay)\n");//Ekstra eklendi
            printf("2- Meteor alaninda kesif yap (Orta)\n");//Proje dosyasindaki Kesif kurallarina gore olusturuldu.
            printf("3- Uzayli korsanlarla savas (Zor)\n");//Proje dosyasindaki savas kurallarina gore olusturuldu.
            int gorevSecim;
            scanf("%d", &gorevSecim);
            int odul = 0;
            switch (gorevSecim)
            {
            case 1:
                odul = rand() % 11 + 10; // 10-20 arasinda altin odulu
                printf("Gorevi basariyla tamamladiniz! %d altin kazandiniz.Deneyim 30 artti.Uyku 20 azaldi\n", odul);
                karakter->altin += odul;
                karakter->deneyim = SINIR_KONTROL(karakter->deneyim + 30, 0, MAX_DENEYIM);
                karakter->uyku = SINIR_KONTROL(karakter->uyku - 20, 0, MAX_UYKU);
                break;
            case 2:
            {
                printf("\n--- Meteor Alaninda Kesif Yap ---\n");
                printf("Zorluk seviyesini secin:\n");
                printf("1- Kolay: Uzayi coplerden temizle (15-25 altin, 30 tecrube)\n");
                printf("2- Orta: Meteorlardan kac (30-50 altin, 60 tecrube)\n");
                printf("3- Zor: Gezegenleri karadeliklerden kurtar (55-75 altin, 90 tecrube)\n");
                int basariSansi = rand() % 2; // % 50 ihtimal ile basarili olma/galip gelme durumu
                int zorlukSec;
                scanf("%d", &zorlukSec);
                switch (zorlukSec)
                {
                case 1: // Kolay Kesif
                    printf("\nKolay Kesif: Uzayi coplerden temizliyorsun...\n");
                    if (basariSansi == 1)
                    {
                        int kazanilanAltin = rand() % 11 + 15; // 15-25 arasi altin
                        printf("Basarili! Uzayi temizlediniz ve %d altin kazandiniz.Deneyim 30 artti.\n", kazanilanAltin);
                        karakter->altin += kazanilanAltin;
                        karakter->deneyim = SINIR_KONTROL(karakter->deneyim + 30, 0, MAX_DENEYIM);//30 deneyim arttirimi
                        karakter->saglik = SINIR_KONTROL(karakter->saglik - 10,0,MAX_SAGLIK);
                        karakter->guc = SINIR_KONTROL(karakter->guc - 8,0,MAX_BECERI);
                    }
                    else
                    {
                        printf("Basarisiz! Uzayi temizlerken engellerle karsilastin.\n");
                    }
                    break;

                case 2: // Orta Kesif
                    printf("\nOrta Kesif: Meteorlardan kacmaya calis...\n");
                    if (basariSansi == 1)
                    {
                        int kazanilanAltin = rand() % 21 + 30; // 30-50 arasi altin
                        printf("Basarili! Meteorlardan kacmayi basardiniz ve %d altin kazandiniz. Deneyim 60 artti.\n", kazanilanAltin);
                        karakter->altin += kazanilanAltin;
                        karakter->deneyim = SINIR_KONTROL(karakter->deneyim + 60, 0, MAX_DENEYIM);//60 deneyim arttirimi
                        karakter->guc = SINIR_KONTROL(karakter->guc - 10,0,MAX_BECERI);
                        karakter->tokluk =SINIR_KONTROL(karakter->tokluk -5,0,MAX_TOKLUK);
                        printf("Gucunuz 10 azaldi. Tokluk  5 azaldi.\n");
                    }
                    else
                    {
                        printf("Basarisiz! Meteorlarin arasindan kacamadiniz.\n");
                    }
                    break;

                case 3: // Zor Kesif
                    printf("\nZor Kesif: Gezegenleri Karadeliklerden kurtarmaya calisiyorsunuz...\n");
                    if (basariSansi == 1)
                    {
                        int kazanilanAltin = rand() % 21 + 55; // 55-75 arasi altin
                        printf("Basarili! Gezegenleri karadeliklerden kurtardiniz ve %d altin kazandiniz. Deneyim 90 artti.\n", kazanilanAltin);
                        karakter->altin += kazanilanAltin;
                        karakter->deneyim = SINIR_KONTROL(karakter->deneyim + 90, 0, MAX_DENEYIM);//90 deneyim arttirimi
                        karakter->guc = SINIR_KONTROL(karakter->guc - 15,0,MAX_BECERI);
                        karakter->saglik = SINIR_KONTROL(karakter->saglik - 10,0,MAX_SAGLIK);
                        printf("Gucunuz 15 azaldi. Saglik 10 azaldi.\n");
                    }
                    else
                    {
                        printf("Basarisiz! Karadelikler cok gucluydu, gezegenleri kurtaramadin.\n");
                    }
                    break;

                default:
                    printf("Gecersiz secim. Lutfen 1-3 arasinda bir zorluk secin.\n");
                }
            }
            break;

            case 3:
            {
                printf("\nUzayli Korsanlarla Savas Basliyor!\n");

                int dusmanZorluk, dusmanGuc, dusmanDayaniklilik, dusmanCeviklik;
                printf("Dusmanin zorluk seviyesini secin:\n");
                printf("1. Acemi Korsanlar\n");
                printf("2. Savasci Korsanlar\n");
                printf("3. Imparator Korsanlar\n");
                scanf("%d", &dusmanZorluk);
                switch (dusmanZorluk)
                {
                case 1:
                    dusmanGuc = rand() % 3 + 1;       // Guc: 1-3
                    dusmanDayaniklilik = rand() % 3 + 1; // Dayaniklilik: 1-3
                    dusmanCeviklik = rand() % 3 + 1;  // Ceviklik: 1-3
                    break;
                case 2:
                    dusmanGuc = rand() % 3 + 4;       // Guc: 4-6
                    dusmanDayaniklilik = rand() % 3 + 4; // Dayaniklilik: 4-6
                    dusmanCeviklik = rand() % 3 + 4;  // Ceviklik: 4-6
                    break;
                case 3:
                    dusmanGuc = rand() % 4 + 7;       // Guc: 7-10
                    dusmanDayaniklilik = rand() % 4 + 7; // Dayaniklilik: 7-10
                    dusmanCeviklik = rand() % 4 + 7;  // Ceviklik: 7-10
                    break;
                default:
                    printf("Gecersiz secim. Kolay zorluk seviyesinde baslatiliyor...\n");
                    dusmanGuc = rand() % 3 + 1;       // Varsayilan: 1-3
                    dusmanDayaniklilik = rand() % 3 + 1; // Varsayilan: 1-3
                    dusmanCeviklik = rand() % 3 + 1;  // Varsayilan: 1-3
                }

                printf("\n---Dusman Ozellikleri---\n");
                printf("Guc: %d\nDayaniklilik: %d\nCeviklik: %d\n", dusmanGuc, dusmanDayaniklilik, dusmanCeviklik);

                int yanit;
                printf("1- Savas\n");
                printf("2- Kac\n");
                printf("Bir secim yapin: ");
                scanf("%d", &yanit);

                if (yanit == 2)
                {
                    // Kacma sansi hesaplama
                    float kacmaSans = (float)(4 * karakter->ceviklik) / 100;
                    int sans = rand() % 100; // 0-99 arasi rastgele sayi

                    if (sans < (int)(kacmaSans * 100))
                    {
                        printf("Kacis basarili! Savastan kurtuldunuz.\n");
                        break;
                    }
                    else
                    {
                        printf("Kacis basarisiz! Savas basliyor.\n");
                    }
                }

                // Savasma Durumu
                int karakterinSaldiriGucu = 4 * karakter->guc;
                int karakterinSavunmaDayaniklilik = karakter->dayaniklilik;
                int dusmanSaldiriGucu = 4 * dusmanGuc;
                int dusmanSavunmaDayaniklilik = dusmanDayaniklilik;

                // Ilk saldirani belirleme
                int karakterIlk = 0;
                if (karakter->ceviklik > dusmanCeviklik)
                {
                    karakterIlk = 1;
                }
                else if (karakter->ceviklik == dusmanCeviklik)
                {
                    karakterIlk = rand() % 2; // %50 sans
                }
                printf("Savasi %s baslatiyor!\n", karakterIlk ? karakter->isim : "Uzayli Korsanlar");

                // Savasa Girildi
                while (karakter->can > 0 && dusmanGuc > 0)
                {
                    if (karakterIlk)
                    {
                        // Karakterin saldirisi
                        printf("Karakter saldiriyor!\n");
                        int rvh = karakterinSaldiriGucu; // int rvh: rakibe verilen hasar
                        int alinanHasar = rvh - (rvh * (4 * dusmanSavunmaDayaniklilik) / 100);
                        // Burada rakibe verilen hasar PDF'teki formüle göre hesaplanmiştir
                        if (alinanHasar < 0) alinanHasar = 0;
                        printf("Dusmana %d hasar verildi.\n", alinanHasar);
                        dusmanGuc -= alinanHasar;

                        if (dusmanGuc <= 0)
                        {
                            printf("Dusman yenildi!\n");
                            break;
                        }

                        karakterIlk = 0; // Korsanlarin Saldirma Sirasi
                    }
                    else
                    {
                        printf("Dusman saldiriyor!\n");
                        int rvh = dusmanSaldiriGucu;
                        int alinanHasar = rvh - (rvh * (4 * karakterinSavunmaDayaniklilik) / 100);
                        // Burada alinan hasar PDF'teki formüle göre hesaplanmiştir.
                        if (alinanHasar < 0) alinanHasar = 0;
                        printf("%s %d hasar aldi.\n", karakter->isim, alinanHasar);
                        karakter->can -= alinanHasar;

                        if (karakter->can <= 0)
                        {
                            karakter->can = 0; // Can 0'in altina düşmesin
                            printf("Yenildiniz! Savas kaybedildi.\n");
                            break;
                        }
                                             karakterIlk = 1; // Sira kahramanda
                    }
                }
            }
            break;

            default:
                printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
            }
        }
        break;

        case 3:
        {
            // SANS formülü ile Şifali Bitki Bulma
            float sifaliBitkiSans = (float)(karakter->toplamaBecerisi * 4) / 100;
            // Şifali bitki bulma şansi Proje Dosyasindaki formüle göre hesaplandi
            int sans = rand() % 100; // 0-99 arasi rastgele sayi

            if (sans < (int)(sifaliBitkiSans * 100))
            {
                printf("Sifali bitki bulundu! Caniniz 10 puan artti.\n");
                karakter->can += 10;
                if (karakter->can > MAX_CAN)
                    karakter->can = MAX_CAN;
            }
            else
            {
                printf("Sifali bitki bulunamadi.\n");
            }
            // Kuantum Enerji Bulma Sansi (Av hayvani bulma yerine kullanildi.Sans formulu yarisi ile hesaplandi)
            sans = rand() % 100;
            if (sans < (int)((sifaliBitkiSans * 100) / 2))//
            {
                printf("Kuantum Enerjisine Rastladin! Caniniz 50 puan artti.\n");
                karakter->can += 50;
                if (karakter->can > MAX_CAN) // Manuel Sinir Kontrolü
                    karakter->can = MAX_CAN;
            }
            else
            {
                printf("Herhangi bir enerjiye rastlanmadi.\n");
            }
        }
        break;

        case 4:
        {
            // Sans formülü ile Tropik Meyve Bulma
            float tropikMeyveSans = (float)(karakter->toplamaBecerisi * 4) / 100;
            int sans = rand() % 100; // 0-99 arasinda rastgele sayi

            printf("\nTropik Meyve Toplama Denemesi...\n");
            printf("Tropik Meyve Bulma Sansiniz: %.0f%%\n", tropikMeyveSans * 100); // Kullaniciya şansi bildir

            if (sans < (int)(tropikMeyveSans * 100))
            {
                printf("Tropik meyve bulundu! Sagliginiz 10 puan artti.\n");
                karakter->saglik = SINIR_KONTROL(karakter->saglik + 10, 0, MAX_SAGLIK);
            }
            else
            {
                printf("Tropik meyve bulunamadi.\n");
            }
            printf("Kahramanin guncel sagligi: %d/%d\n", karakter->saglik, MAX_SAGLIK);
        }
        break;

        case 5:
            printf("Ana menuye donuluyor...\n");
            break;
        default:
            printf("Gecersiz Secim...\n");
            break;
        }
    }
    while (secim != 5);
}




void seviyeAtla(Karakter *karakter)
{
    if (karakter->deneyim >= 100)
    {
        karakter->seviye++;
        karakter->deneyim = 0;// Seviye atlandiginda deneyimi sifirla
        printf("Tebrikler! %s %d-> seviyeye ulasti!\n", karakter->isim, karakter->seviye);
        int yetenekPuanlari = 5;
        printf("%d yetenek puaniniz var. Dagitim yapin:\n", yetenekPuanlari);
        printf("1- Guc\n");
        printf("2- Ceviklik\n");
        printf("3- Dayaniklilik\n");
        printf("4- Karizma\n");
        printf("5-Toplama Becerisi\n");
        while (yetenekPuanlari > 0)
        {
            int yetenekSecim;
            printf("Bir yetenek secin (1-5): ");//yetenek puani dagitma
            scanf("%d", &yetenekSecim);
            if (yetenekSecim >= 1 && yetenekSecim <= 5)
            {
                switch (yetenekSecim)
                {
                case 1:
                    karakter->guc++;
                    break;
                case 2:
                    karakter->ceviklik++;
                    break;
                case 3:
                    karakter->dayaniklilik++;
                    break;
                case 4:
                    karakter->karizma++;
                    break;
                case 5:
                    karakter->toplamaBecerisi++;
                    break;
                }
                yetenekPuanlari--;
                printf("Yetenek puani verildi! Kalan puanlar: %d\n", yetenekPuanlari);
            }
            else
            {
                printf("Gecersiz secim! Tekrar deneyin.\n");
            }
        }
    }
}

void uzaypanayiri(Karakter *karakter)
{
    int secim;
    do
    {
        printf("\n--- Uzay Panayiri ---\n");
        printf("1- Yiyecek satin al ve ye.\n");
        printf("2- Icecek satin al ve ic.\n");
        printf("3- Elementin ile gosteri yap.\n");
        printf("4- Elementini degistir.\n");
        printf("5- Alis-veris yap.\n");
        printf("6- Panayirdan ayril.\n");
        printf("Bir secim yapin: ");
        scanf("%d", &secim);

        switch (secim)
        {
        case 1:   // Yiyecek Secenekleri
        {
            printf("Hangi yiyecegi satin almak istersin?\n");
            printf("1- Mars Burger (10 altin)\n");
            printf("2- Jupiter Pizza (15 altin)\n");
            printf("3- Saturn Salatasi (8 altin)\n");
            int yiyecekSecim;
            scanf("%d", &yiyecekSecim);

            switch (yiyecekSecim)
            {
            case 1:
                if (karakter->altin >= 10)
                {
                    karakter->altin -= 10;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 20, 0, MAX_SAGLIK);
                    karakter->tokluk = SINIR_KONTROL(karakter->tokluk + 10, 0, MAX_TOKLUK);
                    printf("Mars Burger satin alindi. Saglik 20 artti. Tokluk 10 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 2:
                if (karakter->altin >= 15)
                {
                    karakter->altin -= 15;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 25, 0, MAX_SAGLIK);
                    karakter->tokluk = SINIR_KONTROL(karakter->tokluk + 15, 0, MAX_TOKLUK);
                    printf("Jupiter Pizza satin alindi. Saglik 25 artti.Tokluk 15 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 3:
                if (karakter->altin >= 8)
                {
                    karakter->altin -= 8;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 15, 0, MAX_SAGLIK);
                    karakter->tokluk = SINIR_KONTROL(karakter->tokluk + 8, 0, MAX_TOKLUK);
                    printf("Saturn Salatasi satin alindi. Saglik 15 artti. Tokluk 8 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            default:
                printf("Gecersiz secim.\n");
                break;
            }
            break;
        }
        case 2:   // Icecek Secenekleri
        {
            printf("Hangi icecegi satin almak istersin?\n");
            printf("1- Venus Suyu (5 altin)\n");
            printf("2- Mars Gazozu (7 altin)\n");
            printf("3- Uranus Cayi (4 altin)\n");
            int icecekSecim;
            scanf("%d", &icecekSecim);

            switch (icecekSecim)
            {
            case 1:
                if (karakter->altin >= 5)
                {
                    karakter->altin -= 5;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 10, 0, MAX_SAGLIK);
                    printf("Venus Suyu satin alindi. Saglik 10 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 2:
                if (karakter->altin >= 7)
                {
                    karakter->altin -= 7;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 12, 0, MAX_SAGLIK);
                    printf("Mars Gazozu satin alindi. Saglik 12 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 3:
                if (karakter->altin >= 4)
                {
                    karakter->altin -= 4;
                    karakter->saglik = SINIR_KONTROL(karakter->saglik + 8, 0, MAX_SAGLIK);
                    printf("Uranus Cayi satin alindi. Saglik 8 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            default:
                printf("Gecersiz secim.\n");
                break;
            }
            break;
        }
        case 3:   // Performans Gosterimi
        {
            karakter->temizlik = SINIR_KONTROL(karakter->temizlik -5,0,MAX_TEMIZLIK);
            karakter->karizma = SINIR_KONTROL(karakter->karizma +10,0,MAX_BECERI);
            karakter->deneyim = SINIR_KONTROL(karakter->deneyim +20,0,MAX_DENEYIM);
            karakter->guc = SINIR_KONTROL(karakter->guc -3,0,MAX_BECERI);

            int kazanilanAltin= 10 + karakter->karizma*(karakter->temizlik/100);//Proje dokumanindaki formule gore kazanilan altin hesaplandi
            printf("%s %s elementi ile gosteri yapiyor. Karizma artti, temizlik 5 azaldi, guc 3 azaldi, deneyim 20 artti.\n", karakter->isim,karakter->element);
            printf("Kazanilan altin: %d\n",kazanilanAltin);
            karakter->altin += kazanilanAltin; //kazanilan altin eklendi

            break;
        }
        case 4:   // Element Degistirme Ekstra Eklendi
        {
            printf("Hangi elementi satin almak istersin?\n");
            printf("1- Su (10 altin)\n");
            printf("2- Ates (10 altin)\n");
            printf("3- Toprak (10 altin)\n");
            printf("4- Hava (10 altin)\n");
            int elementSecim;
            scanf("%d", &elementSecim);

            if (karakter->altin >= 10)
            {
                karakter->altin -= 10;
                switch (elementSecim)
                {
                case 1:
                    strcpy(karakter->element, "Su");
                    break;
                case 2:
                    strcpy(karakter->element, "Ates");
                    break;
                case 3:
                    strcpy(karakter->element, "Toprak");
                    break;
                case 4:
                    strcpy(karakter->element, "Hava");
                    break;
                default:
                    printf("Gecersiz secim.\n");
                    karakter->altin += 10; //Karakterin altini geri iade edilir
                    break;
                }
                printf("Elementiniz %s olarak degistirildi.\n", karakter->element);
            }
            else
            {
                printf("Yeterli altininiz yok.\n");
            }
            break;
        }
        case 5:   // Alis-veris Secenekleri
        {
            printf("Alis-veris yapmaya hosgeldiniz. Secenekler:\n");
            printf("1- Kiyafet Satin Al\n");
            printf("2- Aksesuar Satin Al\n");
            int alisverisSecim;
            scanf("%d", &alisverisSecim);
            switch (alisverisSecim)
            {
            case 1:   // Kiyafet Secimleri
            {
                printf("Kiyafet secenekleri:\n");
                printf("1- Pantolon-Gomlek (20 altin)\n");
                printf("2- Bot (30 altin)\n");
                printf("3- Ceket (25 altin)\n");
                int kiyafetSecim;
                scanf("%d", &kiyafetSecim);
                int fiyat = 0;
                const char* kiyafet = "";

                switch (kiyafetSecim)
                {
                case 1:
                    fiyat = 20;
                    kiyafet = "Pantolon-Gomlek";
                    break;
                case 2:
                    fiyat = 30;
                    kiyafet = "Bot";
                    break;
                case 3:
                    fiyat = 25;
                    kiyafet = "Ceket";
                    break;
                default:
                    printf("Gecersiz secim.\n");
                    continue;  //Bir sonraki iterasyona atla
                }

                if (karakter->altin >= fiyat)
                {
                    karakter->altin -= fiyat;
                    printf("%s satin alindi.\n", kiyafet);
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            }
            case 2:   // Aksesuar Secimi
            {
                printf("Aksesuar secenekleri:\n");
                printf("1- Uzay Saati (15 altin)\n");
                printf("2- Gunes Gozlugu (10 altin)\n");
                printf("3- Isin Kilici (20 altin)\n");
                printf("4- Lazer Feneri (12 altin)\n");
                printf("5- Frenaks Kolyesi (18 altin)\n");
                int aksesuarSecim;
                scanf("%d", &aksesuarSecim);
                int aksesuarFiyat[] = {0, 15, 10, 20, 12, 18};

                if (aksesuarSecim < 1 || aksesuarSecim > 5)
                {
                    printf("Gecersiz secim.\n");
                    break;
                }

                if (karakter->altin >= aksesuarFiyat[aksesuarSecim])
                {
                    karakter->altin -= aksesuarFiyat[aksesuarSecim];
                    printf("Aksesuar satin alindi.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            }
            default:
                printf("Gecersiz secim.\n");
                break;
            }
            break;
        }
        case 6:
            printf("Uzay panayirindan ayriliyorsunuz...\n");
            break;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            break;
        }
    }
    while (secim != 6);
}

void lumoriaGalaxy(Karakter *karakter)
{
    int secim;

    do
    {
        printf("\n--- Lumoria Galaxy ---\n");
        printf("1- Sifa Istasyonuna Git\n");
        printf("2- Ekipman Satin Al\n");
        printf("3- Lumoria Galaxy'den Ayril\n");
        printf("Bir secim yapin: ");
        scanf("%d", &secim);
        switch (secim)
        {
        case 1:
            printf("Sifa Istasyonu'na hos geldiniz. Sagliginiz ve yorgunlugunuz yenileniyor...\n");
            karakter->saglik = MAX_SAGLIK;
            karakter->can = MAX_CAN;
            karakter->uyku = 50;
            karakter->tokluk = 50;
            printf("Tum durumlariniz yenilendi!\n");
            printf("Saglik:%d\n",karakter->saglik);
            printf("Can:%d\n",karakter->can);
            printf("Uyku:%d\n",karakter->uyku);
            printf("Tokluk:%d\n",karakter->tokluk);
            break;
        case 2:
        {
            printf("Ekipman gelistirme secenekleri:\n");
            printf("1- Silah (25 altin)\n");
            printf("2- Zirh (20 altin)\n");
            printf("3- Beceri Artirimi (15 altin)\n");
            int ekipmanSecim;
            scanf("%d", &ekipmanSecim);
            switch (ekipmanSecim)
            {
            case 1:
                if (karakter->altin >= 25)
                {
                    karakter->altin -= 25;
                    printf("Silahiniz satin alindi! Gucun 5 artti.\n");
                    //Beceri asimi kontrolu Manuel Olarak Yapilirsa
                    karakter->guc += 5;
                    if (karakter->guc > 25)
                    {
                        karakter->guc = 25;
                        printf("Guc maksimum seviyeye (%d) ulasti.\n", 25);
                    }
                    else
                    {
                        printf("Guc artti. Yeni deger: %d\n", karakter->guc);
                    }
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 2:
                if (karakter->altin >= 20)
                {
                    karakter->altin -= 20;
                    karakter->dayaniklilik = SINIR_KONTROL(karakter->dayaniklilik + 15,0,MAX_BECERI);
                    printf("Zirh satin alindi! Artik bir zirhin var. Dayanikliliginiz 15 artti.\n");
                }
                else
                {
                    printf("Yeterli altininiz yok.\n");
                }
                break;
            case 3:
                if (karakter->altin >= 15)
                {
                    karakter->altin -= 15;
                    karakter->toplamaBecerisi += 5;// Toplama becerisini artirma
                    // Kontrol: Maksimum degeri asmamasi saglaniyor MAnuel OLarak Ayarlama makro kullanmaksizin
                    if (karakter->toplamaBecerisi > 25)
                    {
                        karakter->toplamaBecerisi = 25;
                        printf("Becerileriniz gelistirildi! Ancak toplama beceriniz maksimum seviyeye (%d) ulasti.\n", 25);
                    }
                    else
                    {
                        printf("Becerileriniz gelistirildi! Toplama beceriniz artti. Yeni deger: %d\n", karakter->toplamaBecerisi);
                    }
                }
                else

                    printf("Yeterli altininiz yok.\n");
                break;

            default:
                printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
                break;
            }
        }

        case 3:
            printf("Lumoria Galaxy'den ayriliyorsunuz...\n");
            break;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            break;
        }
    }
    while (secim != 3);
}

void menu(Karakter *karakter)
{
    int secim;
    do
    {
        printf("\n*** Galaksiyar Menu ***\n");
        printf("1-> Dunya'ya Git\n");
        printf("2-> Lumoria Galaxy Git\n");
        printf("3-> Uzay Panayiri'na Git\n");
        printf("4-> Maceraya Cik\n");
        printf("5-> Seviye Atla\n");
        printf("6-> Durumu Goster\n");
        printf("7-> Oyundan Cik\n");
        printf("Bir secim yapin: ");
        if(scanf("%d",&secim) != 1)//eger kullanici rakam yerine baska bir sey girerse
        {                          //sonsuz donguye girmemek icin alinan onlem
            bufferTemizle();
            printf("Gecersiz giris yaptiniz.Lutfen bir sayi giriniz.\n");
            continue;
        }
        switch (secim)
        {
        case 1:
            dunya(karakter);
            break;
        case 2:
            lumoriaGalaxy(karakter);
            break;
        case 3:
            uzaypanayiri(karakter);
            break;
        case 4:
            macerayaAtil(karakter);
            break;
        case 5:
            // Kullanici deneyim yetersiz olmasina ragmen seviye altama yapmak isterse bu kontrol yapilir
            if (karakter->deneyim >= 10)
            {
                seviyeAtla(karakter); // Deneyim yeterliyse seviye atla
            }
            else
            {
                // Deneyim yetersizse geri bildirim ver
                printf("Deneyiminiz yetersiz.\n");
                printf("Deneyim kazanmak icin Macera'ya atilin ve gorev alin.\n");
            }
            break;
        case 6:
            durumGoster(karakter);
            break;
        //Oyunun Bitirilmesi
        case 7:
            printf("Oyunu kapatmak istediginize emin misiniz?\n");
            printf("0.Hayir\n");
            printf("1.Evet\n");
            int cikisSecimi;
            scanf("%d",&cikisSecimi);
            if(cikisSecimi==0)
            {
                printf("Oyun basliyor...\n");
                karakteriBaslat(karakter);
            }
            if (cikisSecimi == 1)
            {
                printf("Oyun kapatiliyor...\n");
                return;
            }
            break;
        default:
            printf("Gecersiz secim! Lutfen tekrar deneyin.\n");
            break;
        }
        if (karakter->can<= 0) // can kontrolu ile oyunun bitirilmesi
        {
            printf("Can Kalmadi...Oyun Bitti...\n");
            break;
        }
        if (karakter->saglik <= 0) // saglik kontrolu ile oyunun bitirilmesi
        {
            printf("Saglik 0.Oyun Bitti...\n");
            break;
        }
        karakter->tokluk -= 5;
        karakter->uyku -= 5;
        if (karakter->tokluk <= 0)
        {
            karakter->saglik -= 20;
            printf("Acliktan oluyorsunuz!!! Saglik azaldi.\n");
        }
        if (karakter->uyku <= 0)
        {
            karakter->saglik -= 10;
            printf("Yorgunsunuz! Saglik azaldi.\n");
        }
        seviyeAtla(karakter);
    }
    while (secim != 7);
}

int main()
{
    srand(time(NULL));
    Karakter oyuncu;
    karakteriBaslat(&oyuncu);
    menu(&oyuncu);
    return 0;
}
