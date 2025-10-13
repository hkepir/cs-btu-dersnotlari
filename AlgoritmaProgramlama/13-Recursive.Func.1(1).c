#include<stdio.h>

//Sayilari Listele
void listele(int* sayi)
{
    for(int i=*sayi; i>=0; i--)
    {
        printf("%d\n",i);
        //*sayi=i;//bu adimi eklersem her durumda girilen sayi sifirlanir
    }
}
void listele2(int sayi)
{
    for(int i=sayi; i>=0; i--)
    {
        printf("%d\n",i);
    }
}
void listeleRecursive(int r)
{
    if(r==0)
        printf("%d",r);
    else
    {
        printf("%d\n",r);
        listeleRecursive(r-1);
    }
}
//n Toplam Recursive
int topla(int n)
{
    if(n==1)
        return 1 ;
    else if(n==0)
        return 0;
    else
        return n + topla(n-1);
}
//Iki Sayinin Carpimini Carpim Sembolu Kullanmadan Hesaplayan Program
int carpim(int sayi1,int sayi2)
{
    int sonuc;
    if(sayi2==1)
        sonuc = sayi1;
    else if(sayi1==0||sayi2==0)
        sonuc = 0;
    else
        sonuc = sayi1 + carpim(sayi1,sayi2-1);
    return sonuc;
}
//Recursive Faktoriyel
int faktoriyel(int n)
{
    if(n==1)
        return 1;
    else if(n==0)
        return 0;
    else
        return faktoriyel(n-1)*n;
}
void tek(int n)
{
    if(n<1)
        return;
    if(n%2==1)
        printf("%d\n",n);
    tek(n-1);

}
//Bolme isareti kullanmadan Bolme Islemi
int bolum(int bolunen,int bolen)
{

    if(bolen==0)
    {
        return 0;
    }
    else if(bolunen-bolen==0)
    {
        return 1;
    }
    else if(bolunen<bolen)
    {
        return 0;
    }
    else
    {
        return(1+bolum(bolunen-bolen,bolen));

    }
}
//FÝbonacci Recursive Fonksiyon
int fibonacci(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return(fibonacci(n-2)+fibonacci(n-1));
    }

}
//Sifirakadar Fonksiyon
void sifirakadar()
{
    int sayi;
    printf("Lutfen bir sayi giriniz\n");
    scanf("%d",&sayi);
    if(sayi==0)
    {
        exit(0);
    }
    else
    {
        sifirakadar();
    }

}
//ikinin kuvvetleri
int ikininkuvvetleri(int n)
{
    int deger;
    if(n==0)
    {
        deger=1;
    }
    else
    {
        deger=2*ikininkuvvetleri(n-1);
    }
    printf("%d\n",deger);
    return deger;
}
//Uslu sayi hesaplama
int usluhesap(int sayi1,int sayi2)
{
    int sonuc;
    if(sayi2==1)
        return sayi1;
    else if(sayi2==0)
        return 1;
    else
       return sayi1 *usluhesap(sayi1,sayi2-1);

}


//Ana Fonksiyon
int main()
{
    int n,m;
    printf("Bir sayi giriniz:");
    scanf("%d",&n);
    listele(&n);
    printf("\n***n=%d****\n",n);//n in 0 olmasini bekliyorum
    printf("Bir sayi giriniz:");
    scanf("%d",&m);
    listele2(m);
    printf("\n***m=%d****\n",m);//m degerinin girilen deger olmasini bekliyorum
    listeleRecursive(m);
    printf("\nToplam m'e kadar sayilar %d\n",topla(m));
    printf("Carpim m x n = %d\n",carpim(m,n));
    printf("Faktoriyel m!=%d\n",faktoriyel(m));
    printf("%d ile 0 arasindaki tek sayilar \n",n);
    tek(n);

    /* Klavyeden girilen iki tamsayýnýn bölümünü (A/B) bölme sembolü kullanmadan gerçekleþtiren
    C programýný recursive fonksiyon yardýmýyla yazýnýz.*/

    int a,b;
    printf("Bolunen sayiyi giriniz\n");
    scanf("%d",&a);
    printf("Lutfen bolen sayiyiyi giriniz");
    scanf("%d",&b);
    printf("Bolum=%d\n",bolum(a,b));
    printf("Kalan =%d\n",a-(bolum(a,b)*b));

    int sayi,i;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&sayi);
    for(i=0; i<sayi; i++)
    {
        printf("%d\n",fibonacci(i));
    }
    printf("%d'ye kadar ikinin kuvvetleri \n",sayi);
    ikininkuvvetleri(sayi);

    /*Taban ve us degerleri girilecek cve sonuc bulunacak recursive fonksiyon*/
    int taban,us;
    printf("\nTaban icin Deger Giriniz:");
    scanf("%d",&taban);
    printf("\nUs icin Deger Giriniz:");
    scanf("%d",&us);
    int sonuc = usluhesap(taban,us);
    printf("%d^%d = %d\n",taban,us,sonuc);



    /* Klavyeden 0 deðeri girilinceye kadar kullanýcýdan sürekli olarak sayý girmesini isteyen
    C programýný recursive fonksiyon yardýmýyla yazýnýz*/
    sifirakadar();


    return 0;
}


//-------------------------------------------------------------------------------

//Asal Sayilari Bulan Recursive
#include <stdio.h>

// Asal sayý kontrolü için yardýmcý fonksiyon
int asalMi(int sayi, int bolen)
{
    if (sayi <= 1)
        return 0; // 1 ve 1'den küçük sayýlar asal deðildir
    if (bolen == 1)
        return 1; // Bolen 1'e kadar geldi ve tam bölünmediyse, asal
    if (sayi % bolen == 0)
        return 0; // Sayý tam bölündü, asal deðil
    return asalMi(sayi, bolen - 1); // Bir sonraki bolene geç
}

// Girilen sayýya kadar olan asal sayýlarý bulan fonksiyon
void asalSayilariBul(int sayi)
{
    if (sayi < 2)
        return; // 2'den küçük sayýlar için dur

    if (asalMi(sayi, sayi / 2))
        printf("%d\n", sayi); // Asal ise yazdýr

    asalSayilariBul(sayi - 1); // Bir önceki sayýya geçerek devam et
}

int main()
{
    int n;
    printf("Bir sayý giriniz: ");
    scanf("%d", &n);
    printf("%d'ye kadar olan asal sayýlar:\n", n);
    asalSayilariBul(n);
    return 0;
}

