#include <stdio.h>

int main(){
    /*
    const int BOYUT=40;
    int dizim[BOYUT];

    //Dizi indisleri 0 ~ N-1 arasýnda deðiþir.
    for(int i=0;i<BOYUT;i++)
        dizim[i]=i;

    for(int i=0;i<sizeof(dizim)/sizeof(dizim[0]);i++)
    {
        printf("%d\n",dizim[i]);
    }
    */

/*
    double X[10]={}; //tamami 0 olan 10 kapasiteli bir dizi

    char kelime[20]={'B','U','R','S','A','\0'};

    int i=2;
    X[i++]=5.9; //X[2]=5.9; -> 2++

    X[(int) X[2]]=4.9;  //casting yapildi X[5]'e 4.9 atandi

    float y=8.0;
*/
/*
    int A[10];
    int i;

    for(i=0;i<10;i++){
        printf("A[%d] = ",i);
        scanf("%d",&A[i]);

        if(A[i]==0)
            break;
    }

    for(int j=0;j<i;j++)
            printf("A[%d]: %d\n",j,A[j]);
*/


/*
    int d[]={19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int kapasite=sizeof(d)/sizeof(d[0]);

    for(int i=0;i<kapasite;i++){
        printf("%d. eleman degeri:\t%d -->",i,d[i]);
        for(int j=0;j<d[i];j++)
            printf("*");
        printf("\n");
    }
*/
    //Random number generator'imizi sistem saatine baglamak lazim
/*
    srand(time(NULL));
    //srand: Seed rand

    //20 elemanli bir dizimiz olsun
    //ve dizi elemanlari [1,100] araligindan olsun
    const int BOYUT=20;
    int dizi[20];
    int sirali_dizi[20]={};

    for(int i=0;i<BOYUT;i++){
        int rs=rand()%100+1;
        dizi[i]=rs;
        for(int k=0;k<i;k++)
            if(rs==dizi[k]) //bu rasgele sayiyi daha önce ürettiysen
            {
                i--;
                break;
            }
    }

    printf("Dizinin sirasiz hali:\n");
    for(int i=0;i<BOYUT;i++)
        printf("%d  ",dizi[i]);


    //Bu içiçe döngü siralama kodudur
    for(int j=0;j<BOYUT;j++){
        int pozisyon=0;
        for(int k=0;k<BOYUT;k++){
            if(dizi[j]>dizi[k])
                pozisyon++;
        }
        sirali_dizi[pozisyon]=dizi[j];
    }

    printf("\nDizinin sirali hali:\n");
    for(int i=0;i<BOYUT;i++)
        printf("%d  ",sirali_dizi[i]);


    int anahtar;
    printf("\nAranacak sayiyi gir: ");
    scanf("%d",&anahtar);

    int bas,orta,son;
    bas=0;
    son=BOYUT-1;
    orta=(bas+son)/2;

    while(bas<=son){
        if(anahtar<sirali_dizi[orta])
            son=orta-1;
        else if(anahtar>sirali_dizi[orta])
            bas=orta+1;
        else{
            printf("Aradigini %d. indiste buldun!!!\n",orta);
            break;
        }
        orta=(bas+son)/2;
    }

    if(bas>son)
        printf("Aradigini bulamadin!!!");



    /*
    //BU kod linear search'e ait.
    int anahtari_kac_kere_buldum=0;

    for(int i=0;i<BOYUT;i++)
        if(anahtar==dizi[i]){
            printf("%d, %d. pozisyonda bulundu!\n",anahtar,i);
            anahtari_kac_kere_buldum++;
        }

    if(anahtari_kac_kere_buldum==0)
        printf("Anahtar bu dizide yok!!!!");
    */


    /*2 boyutlu dizi bilmeden bunu yazdim
    int ogr1Not[3],ogr2Not[3],ogr3Not[3],ogr4Not[3];

    for(int not=0;not<3;not++){
        printf("1. ogrencinin %d. sinavini gir: ",not+1);
        scanf("%d",&ogr1Not[not]);
        printf("2. ogrencinin %d. sinavini gir: ",not+1);
        scanf("%d",&ogr2Not[not]);
        printf("3. ogrencinin %d. sinavini gir: ",not+1);
        scanf("%d",&ogr3Not[not]);
        printf("4. ogrencinin %d. sinavini gir: ",not+1);
        scanf("%d",&ogr4Not[not]);
    }

    double sinav1_ort=ogr1Not[0]+ogr2Not[0]+ogr3Not[0]+ogr4Not[0];
    sinav1_ort/=4;
    printf("1. sinavin ortalamasi: %lf\n",sinav1_ort);

    double sinav2_ort=ogr1Not[1]+ogr2Not[1]+ogr3Not[1]+ogr4Not[1];
    sinav2_ort/=4;
    printf("2. sinavin ortalamasi: %lf\n",sinav2_ort);

    double sinav3_ort=ogr1Not[2]+ogr2Not[2]+ogr3Not[2]+ogr4Not[2];
    sinav3_ort/=4;
    printf("3. sinavin ortalamasi: %lf\n",sinav3_ort);
    */

    const int OGRS=4;
    const int SINS=3;
    int ogrNot[OGRS][SINS];


    for(int not=0;not<SINS;not++) //sinav boyunca doner
        for(int ogrenci=0;ogrenci<OGRS;ogrenci++){//ogrenci boyunca doner
            printf("%d. ogrencinin %d. notunu gir: ",ogrenci+1,not+1);
            scanf("%d",&ogrNot[ogrenci][not]);
        }

    for(int not=0;not<SINS;not++){ //sinav boyunca doner
        double ortalama=0.0;
        for(int ogrenci=0;ogrenci<OGRS;ogrenci++){
            ortalama+=ogrNot[ogrenci][not];
        }
        ortalama/=OGRS;
        printf("%d. sinavin ortalamasi: %lf\n",not+1,ortalama);
    }



    /*

        */




    return 0;
}
