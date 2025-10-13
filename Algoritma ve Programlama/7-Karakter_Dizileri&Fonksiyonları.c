#include <stdio.h>

int main()
{

    /*Matris toplama örneði
        int M[3][2]={10,20,30,40,50,60};
        int N[3][2]={1,2,3,4,5,6};
        int O[3][2];

        int M_buyukluk=sizeof(M);
        int M_es=M_buyukluk/sizeof(M[0][0]);
        int M_sutun=sizeof(M[0])/sizeof(M[0][0]);
        int M_satir=M_es/M_sutun;

        printf("M'nin buyuklugu: %d bayt\n",M_buyukluk);
        printf("M'nin eleman sayisi: %d\n",M_es); //24/4=6
        printf("M'nin sutun sayisi: %d\n",M_sutun);
        printf("M'nin satir sayisi: %d\n",M_satir);

        int N_buyukluk=sizeof(N);
        int N_es=N_buyukluk/sizeof(N[0][0]);
        int N_sutun=sizeof(N[0])/sizeof(N[0][0]);
        int N_satir=N_es/N_sutun;

        if(M_satir==N_satir && M_sutun==N_sutun){
            for(int row=0;row<N_satir;row++){
                for(int column=0;column<N_sutun;column++){
                    O[row][column]=M[row][column]+N[row][column];
                    printf("%d\t",O[row][column]);
                }
                printf("\n");
            }
        }
        else
            printf("Matrisler toplanamaz (Boyut uyumsuzlugu!)");
    ---------------------*/

    /*Iki matrisi carpan kod blogu

        int A[3][2]={1,2,3,4,5,6};
        int B[2][4]={1,2,3,4,5,6,7,8};
        int C[3][4]={}; //full 0 olsun

        int A_satir=3,A_sutun=2,B_satir=2,B_sutun=4;

        for(int r=0;r<A_satir;r++){
            for(int c=0;c<B_sutun;c++){
                for(int h=0;h<A_sutun;h++){
                    C[r][c]+=A[r][h]*B[h][c];
                }
                printf("%d\t",C[r][c]);
            }
            printf("\n");
        }
    ---------------------*/

    /*Bir grup ogrenci üzerinden sýnav ortalamalarinin hesabi

        int ogr_sayisi=10000;
        int sinav_sayisi=3;
        float ortalama=0.0;

        int notlar[ogr_sayisi][sinav_sayisi];

        for(int i=0;i<ogr_sayisi;i++){
            for(int j=0;j<sinav_sayisi;j++){
                notlar[i][j]=rand()%101;
                printf("%d\t",notlar[i][j]);
            }
            printf("\n");
        }

        for(int j=0;j<sinav_sayisi;j++){
            ortalama=0.0;
            for(int i=0;i<ogr_sayisi;i++)
                ortalama+=notlar[i][j];
            ortalama/=ogr_sayisi;

            printf("%d. sinavin ortalamasi: %f\n",j,ortalama);
        }
    ---------------------*/

    /*Metnin konsola yazim sekilleri
        char kelime[100]="ANKARA";
        char kelime2[1000]={'B','U','R','S','A','\0'};

        printf("Metin: %s\n",kelime2);
        puts(kelime2); //put string
        printf(kelime2);

        for(int i=0;;i++){
            if(kelime[i]=='\0')
                break;
            else
                printf("%c",kelime[i]);
        }
    ---------------------*/
//Satranc Tahtasi
/*
    int boyut;
    printf("Boyut Giriniz:");
    scanf("%d",&boyut);
    for(int i=0; i<=boyut; i++)
    {
        for(int j=0; j<=boyut; j++)
        {
            if((i+j)%2==0)
                printf("#");
            else
                printf(".");
        }
        printf("\n");
    }
*/


//-----------------------------------------------------------------------

    /*Char dizisine veri okutma

        char metin[200];

        printf("Bir metin giriniz: ");
        //scanf("%s",metin); //veya scanf("%s",&metin[0]);
        gets(metin);
        printf("Girdiginiz metin: %s",metin);

        int uzunluk=0;
        for(;;uzunluk++)
            if(metin[uzunluk]=='\0')
                break;

        //veya int uzunluk=strlen(metin); string length

        printf("Girdigin %s metninin uzunlugu %d\n",metin,strlen(metin));
    */

    /*
        char isimler[5][20]={"ALI","BERNA","MUHAMMED","MAHMUT",{'S','E','M','A','\0'}  };


        puts(isimler[1]);
        printf("Yeni bir isim gir: ");
        gets(isimler[3]);
        puts(isimler[3]);
        */

    /*STRCMP'yi ogrenelim
    char isimler[5][20]={"ALI","MAHMUT","MUHAMMED","MAHMUT",{'S','E','M','A','\0'}  };

    for(int i=0;i<4;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            int fark=strcmp(isimler[i],isimler[j]);
            //eðer isimler[i]<isimler[j] ise fark: -1 olur
            //eðer isimler[i]==isimler[j] ise fark: 0 olur
            //eðer isimler[i]>isimler[j] ise fark: +1 olur
            //bu yazdýklarým windowstaki strcmp için
            //linuxta +7 veya -11 gibi sayýlar görülebilir

            if(fark==0)
                printf("%s ile %s ayni isim\n",isimler[i],isimler[j]);
            else if(fark>0)
                printf("%s, %s'den sonra gelir\n",isimler[i],isimler[j]);
            else
                printf("%s, %s'den once gelir\n",isimler[i],isimler[j]);
        }
    }
    ---------------------*/

    /*
        char dizi1[100]="BURSA";
        char dizi2[100]=" TEKNIK UNIVERSITESI";

        printf("Before: %s\n",dizi1);
        strcat(dizi1,dizi2); //dizi1'in sonuna dizi2'yi ekle
        //ama dizi1'in kapasitesi yeterli ayarlanmalý!!!!

        printf("After: %s\n",dizi1);
    */

//strcat örneði
    /*
        char isimler[5][200]={"ALI","BERNA","MUHAMMED","MAHMUT",{'S','E','M','A','\0'}  };

        for(int i=0;i<4;i++){
            strcat(isimler[0]," ");
            strcat(isimler[0],isimler[i+1]);
        }

        puts(isimler[0]);
    */
//---------------------

    /*
        char isimler[5][200]={"ALI","BERNA","MUHAMMED","MAHMUT",{'S','E','M','A','\0'}  };

        strcpy(isimler[1],isimler[0]); //strcpy(hedef,kaynak);

        //puts(isimler[1]);
        for(int i=0;i<200;i++)
            printf("%c",isimler[1][i]);

        strcpy(isimler[0],"SERKAN");

        strncpy(isimler[1],isimler[0],2);
        puts(isimler[1]);
    ---------------------*/
    /*
        char kelime[]="BURSA";

        strrev(kelime);

        printf("%s",kelime);
        //strrev, parametre olarak aldýðý char dizisini kalýcý olarak deðiþtirir



        printf("\n h harfinin buyugu %c dir",'h'-32);
        //ASCII tablosuna gore h:104 H:72 degerindedir
    */

    return 0;
}
