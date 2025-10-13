#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

/*    int a,b,c,x,s;
    printf("a,b,c,x icin sirasiyla deger giriniz: \n");
    scanf("%d %d %d %d",&a,&b,&c,&x);

    printf("Denklemin sonucu:%d\n",s=a*x*x+b*x+c);

*/

/*    int n;
    int u,h;
    //int dizi [5][5];
    printf("sectiginiz seklin numarasini giriniz:1-kare,2-ucgen\n");
    scanf("%d",&n);

    switch(n){
        case 1:
            printf("kenar uzunlugu:");
            scanf("%d",&u);
            printf("seklin alani %d,seklin cevresi %d\n",u*u,4*u);
            break;

        case 2:
            printf("taban uzunlugu ve yuksekligi giriniz:");
            scanf("%d %d",&u,&h);
            printf("alan %d",(u*h)/2);
            break;

        default:
            printf("yanlýs giris yaptiniz...");
    }
*/

 /*   int n, u, h;
    printf("Sectiginiz seklin numarasini giriniz: 1-kare, 2-ucgen\n");
    scanf("%d", &n);

    printf(n == 1 ? "Kenar uzunlugu: " : "Taban uzunlugu ve yuksekligi giriniz: ");
    n == 1 ? scanf("%d", &u) : scanf("%d %d", &u, &h);

    int alan = (n == 1 ? u * u : (u * h) / 2);
    int cevre = (n == 1 ? 4 * u : u + h + (int)sqrt(u * u + h * h)); // Üçgenin çevresi için basit bir hipotenüs hesaplamasý

    printf(n == 1 ? "Seklin alani: %d, Seklin cevresi: %d\n" : "Ucgenin alani: %d\n", alan, cevre);

*/

//birim cevirme 1 mil ---> 1.609 km

/*    float km_yol,mil_yol;
    printf("mil cinsinden gidilen yolu giriniz:\n");
    scanf("%f",&mil_yol);
    km_yol=mil_yol*(1.609);
    printf("Araba %.2f km yol gitmistir",km_yol);
*/

//dairede alan ve cevre hesabi

/*    int r;
    const float PI=3.14;
    printf("Dairenin Alanini ve Cevresini Hesaplama:\n");
    printf("Yaricapi giriniz:");
    scanf("%d",&r);
    printf("Dairenin Alani:%.3f\n",PI*r*r);
    printf("Dairenin Cevresi:%.3f\n",2*PI*r);
*/

//havuz doldurma problemi n litre kapasiteli havuz a muslugu a L/dk bosaltma/doldurma
//b muslugu b L/dk doldurma/bosaltma yapiyor
//c muslugu " ve c" muslugu

/*    int a_hizi,b_hizi,c_hizi,d_hizi,dakika;
    float sonuc;
    printf("Musluklarin doldurma/bosaltma hizlarini giriniz:");
    scanf("%d %d %d %d",&a_hizi,&b_hizi,&c_hizi,&d_hizi);
    printf("Dakika:");
    scanf("%d",&dakika);
    sonuc=dakika*(a_hizi+b_hizi+c_hizi+d_hizi);
    printf("%d dk sonra havuzdaki su miktari %.3f litredir,",dakika,sonuc);


*/
//cloud AI cevabý
/*    int N, A, B, T;
    int su_miktari = 0; // Havuz baþlangýçta boþ kabul ediliyor

    // Kullanýcýdan verileri alma
    printf("Havuzun kapasitesi (litre): ");
    scanf("%d", &N);

    printf("Dolum hizi (litre/dakika): ");
    scanf("%d", &A);

    printf("Bosaltim hizi (litre/dakika): ");
    scanf("%d", &B);

    printf("Dolum suresi (dakika): ");
    scanf("%d", &T);

    // Net dolum hýzýný hesaplama
    int net_dolum_hizi = A - B;

    // Toplam doldurulan miktarý hesaplama
    int toplam_doldurulan = net_dolum_hizi * T;

    // Son durumdaki su miktarýný hesaplama
    su_miktari += toplam_doldurulan;

    // Su miktarýný havuz kapasitesiyle sýnýrlandýrma
    if (su_miktari > N) {
        su_miktari = N;
    } else if (su_miktari < 0) {
        su_miktari = 0;
    }

    printf("Dolum suresi sonunda havuzdaki su miktari: %d litre\n", su_miktari);

*/

//maas hesaplama
//haftalik calisma saati saatlik ucreti eger calýsma suresi 40 saatten fazla--->mesai ucreti saatlik*1.5

/*   int maas=0,h,wt,s,mesai;//hour,work-time

    printf("Haftalik calisma saati: \n");
    scanf("%d",&h);

    printf("Saatlik ucret: \n");
    scanf("%d",&s);

    printf("Calisma surenizi giriniz:\n");
    scanf("%d",&wt);

        if(wt>h){

        mesai=(wt-h)*s*(1.5);
        maas=mesai+h*s;

        }else{

        maas=wt*s;
        }
    printf("Maas:%d\n",maas);
*/

//BMI hesaplama(vucut kitle indeksi)


/*    float k,b,BMI=0;
    printf("BKI calculator\n");
    printf("Metre Cinsinden Boy:\n");
    scanf("%f",&b);
    printf("Kilogram Cinsinden Kutle:\n");
    scanf("%f",&k);
    BMI=k/(b*b);
    printf("Vucut Kitle Indeksi:%.2f",BMI);
    if(BMI>30)
        printf("kilolu");

    else if(BMI==30)
        printf("normal");

    else
        printf("zayif");

*/

//faktoriyel hesaplama

/*    int i,n,sonuc=1;

    printf("n:");
    scanf("%d",&n);

    i=1;
    while(i<=n){
     sonuc=sonuc*i;
     i++;
    }
    printf("%d! = %d",n,sonuc);
*/

//kullanicidan bir sayi araligi al min-max ve bu araliktaki asal sayilari bulduran algoritmayi yaz

/*    int min,max,i;

    printf("sirayla en kucuk-en buyuk degeri giriniz:");
    scanf("%d %d",&min,&max);

    printf("%d ile %d arasindaki asal sayilar\n",min,max);

    for(i=min;i<=max;i++){
       if(i<2)
        continue;
        int flag=1;
        for(int j=2;j<=(i/2);j++){
           if(i%j==0){
            flag=0;
            break;
            }
        }
        if(flag==1){
            printf("%4d",i);
            }
    }
*/

//cLOUD AI____________CEVAP_________________ASAL_FLAG_____



/*    int min,max;

    printf("Sirayla en kucuk-en buyuk degeri giriniz: ");
    scanf("%d %d", &min, &max);

    printf("%d ile %d arasindaki asal sayilar: ", min, max);

    for (int i = min; i <= max; i++) {
        if (i < 2) continue; // 2'den küçük sayýlar asal deðildir.

        int flag = 1; // Baþlangýçta sayýyý asal kabul ediyoruz.
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0; // Tam bölünürse asal deðil.
                break;    // Döngüden çýk.
            }
        }

        if (flag == 1) {
            printf("%d ", i); // Sayý asal ise ekrana yazdýr.
        }
    }

    printf("\n");
*/

//CEVAP___________________________VERSÝON2_______

/*int min, max, i;

    printf("Sirayla en kucuk-en buyuk degeri giriniz: ");
    scanf("%d %d", &min, &max);

    printf("%d ile %d arasindaki asal sayilar: ", min, max);

    for (i = min; i <= max; i++) {
        int flag = 1; // Her yeni sayý için flag'i sýfýrlamalýyýz
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1 && i > 1) { // 1'den büyük asal sayýlar
            printf("%d ", i);
        }

}printf("\n");

*/


//Kullanicidan tam sayi dizisi alip tersine cevirme


//Buble Sort ile Siralama________kullanicidan bir dizi alýp
//lineer source
//binary source

//En Buyuk En Kucuk Elemani Bulma____dizi elemanlari kullanicidan alinarak dizide en buyuk ve en kucuk elm bul


//Satranc Tahtasi____kullanicidan boyut alarak #. ile satranç karakterleri olusturulacak




































































}
