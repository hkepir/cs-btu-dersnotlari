void dizi_yazdir(int *ad,int N){
    for(int i=0;i<N;i++)
        printf("%d ",ad[i]);
}

int main(){
    int kelime[20]={}; //statik dizi -stack memory

    //int *kelime2=(int *)malloc(20*sizeof(int));
    //dinamik dizi - heap memory

    /*
    for(int i=0;i<20;i++)
        kelime2[i]=0;
        */

    int *kelime2=(int *)calloc(20,sizeof(int));
    for(int i=0;i<20;i++)
        kelime2[i]=i+1;

    //realloc ile kelime2'nin kapasitesini
    //20'den 40'a çýkarttýk.
    kelime2=(int *)realloc(kelime2,40*sizeof(int));

    for(int i=20;i<40;i++)
        kelime2[i]=i+1;

    dizi_yazdir(kelime,20);
    printf("\n");
    dizi_yazdir(kelime2,40);

    free(kelime2);
    //Program hâlâ devam ediyor olsun
    //ama bu satýrdan sonra kelime2 dizisine
    //ihtiyacým yok

    return 0;
}

//--------------------------

#include <stdio.h>
#include <stdlib.h>

//statik matris
void matris_yazdir(int r,int c,int X[][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%3d",*(*(X+i)+j));
        printf("\n");
    }
}
//dinamik matris
void matris_yazdir2(int r,int c,int **X){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%3d",X[i][j]);
        printf("\n");
    }
}

int main(){
    int satir=3;
    int sutun=4;
    int M[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    matris_yazdir(satir,sutun,M);


    //Dinamik matris
    int **M2=(int **)malloc(satir*sizeof(int *));

    for(int i=0;i<satir;i++)
        *(M2+i)=(int *)malloc(sutun*sizeof(int));

    int sayac=1;
    for(int i=0;i<satir;i++)
        for(int j=0;j<sutun;j++)
            //M2[i][j]=sayac++;
            *(*(M2+i)+j)=sayac++;

    for(int i=0;i<satir;i++)
        *(M2+i)=(int *)realloc(*(M2+i),(sutun+1)*sizeof(int));

    M2[0][4]=13;
    M2[1][4]=14;
    M2[2][4]=15;

    M2=(int **)realloc(M2,(satir+1)*sizeof(int *));
    M2[3]=(int *)malloc((sutun+1)*sizeof(int));

    M2[3][0]=20;
    M2[3][1]=21;
    M2[3][2]=22;
    M2[3][3]=23;
    M2[3][4]=24;

    //matris_yazdir2(satir+1,sutun+1,M2);

    return 0;
}
//-----------------------

#include <stdio.h>
#include <stdlib.h>
char *SubString(char *dizikopya, int pozisyon, int uzunluk){
    char *yeni_dizi=(char *)malloc((uzunluk+1)*sizeof(char));
    strncpy(yeni_dizi,dizikopya+pozisyon,uzunluk);
    yeni_dizi[uzunluk]='\0';
    return yeni_dizi;
}

int main(){
    char metin[100];
    int p,u;
    printf("Metni gir: ");
    gets(metin);
    printf("Kopyalamaya kacinci indisden baslansin: ");
    scanf("%d",&p);
    printf("Kac karakter kopyalansin: ");
    scanf("%d",&u);
    char *donen=SubString(metin, p, u);
    printf("Alt metin: %s",donen);
