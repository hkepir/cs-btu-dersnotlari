#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int uzunluk(char dizi[])
{
    int i;
    for(i=0; dizi[i]!='\0'; i++);//Noktali virgul kullanmak ile dongu govdesini bos biraktmak ayni seydir.
    return i;
}

void bulharf(char* ptr1,char* ptr2)
{
   /* for(int i=0;ptr1[i]!='\0';i++)
        for(int j=0;ptr2[j]!='\0';j++){*/
        /*if(ptr1[i]==ptr2[j]){
        printf("%c",ptr1[i]);
        break;*/
        for(int i=0;*(ptr1+i)!='\0';i++){
            for(int j=0;*(ptr2+j)!='\0';j++)
           (*(ptr1 + i) == *(ptr2 + j)) ? printf("%c ", *(ptr1 + i)) : 0;
        }

}

int main()
{
    char metin1[MAX];
    char metin2[MAX];

    printf("Bir kelime veya cumle giriniz\n");
    gets(metin1);
    printf("Uzunluk: %d\n",uzunluk(metin1));

    printf("Bir kelime veya cumle giriniz\n");
    gets(metin2);

    printf("1.metin ve 2.metinde ayni olan harf\n");
    bulharf(metin1,metin2);

    return 0;
}

//Ayni harf yoksa yok yazdirmak icin
//--------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int uzunluk(char dizi[])
{
    int i;
    for(i=0; dizi[i]!='\0'; i++);
    return i;
}

void bulharf(char* ptr1, char* ptr2)
{
    int found = 0; // Bulunan harfleri kontrol etmek için bir deðiþken
    for(int i = 0; *(ptr1 + i) != '\0'; i++) {
        for(int j = 0; *(ptr2 + j) != '\0'; j++) {
            if(*(ptr1 + i) == *(ptr2 + j)) {
                printf("%c ", *(ptr1 + i));
                found = 1; // Eslesme bulunduðunu isaretle
                break; // Ayný harfi bulduktan sonra dýþ döngüdeki bir sonraki harfe geç
            }
        }
    }
    if(!found) {
        printf("Ayný harf yok\n"); // Eðer eslesme bulunmadiysa
    }
}

int main()
{
    char metin1[MAX];
    char metin2[MAX];

    printf("Bir kelime veya cumle giriniz\n");
    gets(metin1);
    printf("Uzunluk: %d\n", uzunluk(metin1));

    printf("Bir kelime veya cumle giriniz\n");
    gets(metin2);

    printf("1.metin ve 2.metinde ayni olan harf\n");
    bulharf(metin1, metin2);

    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------
//Matris Olusturma Maximum ve Minimum
//--------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define X 3
#define Y 2

void matrisTablo(int matris[X][Y])
{
    int i,j;
    printf("%d x %d boyutunda bir matris giriniz\n",X,Y);
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            scanf("%d",&matris[i][j]);
        }
    }
    printf("Matris Olustulurdu!\n");
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            printf("%4d",matris[i][j]);
        }
    printf("\n");
    }
}

void calculate(int matris[X][Y],int* max,int* min,int* toplam)
{
    int i,j;
    *max=matris[0][0];
    *min=matris[0][0];
    *toplam=0;
    for(int i=0;i<X;i++){
        for(int j=0;j<Y;j++){
            if(matris[i][j]>*max)
                *max=matris[i][j];
            if(matris[i][j]<*min)
                *min=matris[i][j];
            *toplam= *toplam+ matris[i][j];
        }
    }

}
int main()
{
    int min,max,toplam;
    int matris[X][Y];
    matrisTablo(matris);
    calculate(matris,&max,&min,&toplam);
    printf("Maximum: %d\n",max);
    printf("Minimum: %d\n",min);
    printf("Toplam : %d\n",toplam);
}
//--------------------------------------------------------------------------------------------------------------------------------
//Karakter dizileri
//--------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX 40


int dizinin_boyu(char tab[MAX])
{
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}
void bosluklar(char dizi[])
{
    gets(dizi);
    int i, j=0;
    char yenidizi[20];
    for(i=0; i<strlen(dizi); i++)
    {
        if(dizi[i]!=' ')
            yenidizi[j++]=dizi[i];//bosluk haricindeki elemanlar yeni diziye
    }

    yenidizi[j]='\0';
    puts(yenidizi);
}

void cumleyi_oku(char dizi[MAX])
{
    int i=0;
    scanf("%c", &dizi[i]);
    while((dizi[i] !='\n') && i<MAX)//kullanicidan bir karakter okur ve dizi ye yerlestirir
    {
        i++;
        scanf("%c", &dizi[i]);
    }
    dizi[i]='\0';
}

void cumleyi_oku2(char tab[], int max)
{
    int i;
    for (i = 0; i < max - 1; i++)//for dongulu hali
    {
        scanf("%c", &tab[i]);
        if (tab[i] == '\n')
        {
            break;
        }
    }
    tab[i] = '\0';
}
void tersine_cevir( char duz[MAX], char ters[MAX])
{
    int i;
    int j =dizinin_boyu(duz)-1;//Dizinin son karakteri
    for(i=0; duz[i]!='\0'; i++)
    {
        ters[i]=duz[j];
        j--;
    }
    printf("\nDizinin tersine cevrilmis hali: ");
    for (i = 0; i<dizinin_boyu(ters); i++)
        printf("%c",ters[i]);
}
int palindrome(char dizi[MAX])
{
    int i=0, L, test=0;
    char gecici[MAX];
    bosluklar(dizi);
    L=dizinin_boyu(dizi);
    tersine_cevir(dizi, gecici);
    for (i=0; i<L; i++)
    {
        if (gecici[i]!=dizi[i])
            test=0;
        else
            test=1;
    }
    return test;
}
int main()
{
    char metin[20];
    int a;
    printf ("Lutfen bir cumle veya kelime girin \n" );
    bosluklar(metin);
     a=palindrome (metin);
     if (a==1)
         printf ("\nBu bir palendromdur \n");
     if (a==0)
         printf ("\nBu bir palendrome degildir \n");
    return 0;
}
//--------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------
