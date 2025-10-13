#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *fptr;

    fptr=fopen("ogrenciler.txt","w");
    if(fptr==NULL)
        printf("Dosya acilamadi!");

    fprintf(fptr,"%s\t%s\t%d\n","Ali","Yilmaz",25);
    fprintf(fptr,"%s\t%s\t%d\n","Ayse","Kuyu",23);
    fputs("Merhaba Dunya\n",fptr);

    fclose(fptr);



    int yas;
    char ad[51],soyad[51];
    fptr=fopen("ogrenciler.txt","r+");


    fscanf(fptr,"%s\t%s\t%d\n",ad,soyad,&yas);
    printf("Ad: %s, Soyad: %s, Yas: %d\n",ad,soyad,yas);

    char satir[1001];
    fgets(satir,1000,fptr);
    printf("Okunan satir: %s",satir);


    char *kelimeler=strtok(satir,"\t");

    printf("1. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("2. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("3. kelime: %s\n",kelimeler);
    kelimeler=strtok(NULL,"\t");
    printf("4. kelime: %s\n",kelimeler);


    fclose(fptr);

    return 0;
}


//---------------------

FILE *fptr;
    fptr=fopen("metin.txt","w");
    if(fptr==NULL)
        printf("Dosya acilamadi!"),exit(1);

    char metin[]="BURSA TEKNIK UNIVERSITESI";
    for(int i=0;i<strlen(metin);i++)
        fputc(metin[i],fptr);

    fclose(fptr);


    fptr=fopen("metin.txt","r");
    if(fptr==NULL)
        printf("Dosya acilamadi!"),exit(1);

    char okunan;
    while(1){
        okunan=fgetc(fptr);
        if(okunan==EOF)//dosyayi sonuna kadar okur
            break;
        printf("%c",okunan);
    }

    fclose(fptr);


//-------------------

FILE *fptr=fopen("metin.txt","w+");
    char metin[]="BURSA TEKNIK UNIVERSITESI";
    if(fptr==NULL)
        printf("Dosya acilamadi!"),exit(1);

    for(int i=0;i<strlen(metin);i++){
        fputc(metin[i],fptr);
    }
    fseek(fptr,6,SEEK_SET);

    for(int i=0;i<strlen(metin)-6;i++){
        fputc('X',fptr);
    }


/*
    for(int i=0;i<4;i++)
        printf("%c",fgetc(fptr));

    fseek(fptr,-2,SEEK_CUR);

    for(int i=0;i<4;i++)
        printf("%c",fgetc(fptr));
*/

    //rewind(fptr);
/*
    for(int i=0;i<4;i++)
        printf("%c",fgetc(fptr));
*/

    fclose(fptr);


//------------------

    //Dosya kopyalama programý
    //argv[1]: Kaynak dosya
    //argv[2]: Hedef dosya
    FILE *kptr,*hptr;
    kptr=fopen(argv[1],"r");
    if(kptr==NULL)
        printf("Kaynak dosya acilamadi!"), exit(1);

    hptr=fopen(argv[2],"w");
    if(hptr==NULL)
        printf("Hedef dosya acilamadi!"), exit(1);

    char okunan;
    while(1){
        okunan=fgetc(kptr);
        if(okunan==EOF)
            break;
        fputc(okunan,hptr);
    }


    fclose(kptr);
    fclose(hptr);


//-----------------------------

FILE *fptr=fopen("metin.txt","r+");
    if(fptr==NULL)
        printf("Dosya acilamadi!"),exit(1);

    char okunan;
    while(1){
        okunan=fgetc(fptr);
        if(okunan==EOF)
            break;
        else if(okunan=='N')
        {
            long int konum = ftell(fptr); // Okunan karakterin konumunu al
            fseek(fptr, konum - 1, SEEK_SET); // Konuma geri git
            fputc('Y', fptr); // 'Y' harfini yaz
            fseek(fptr, konum, SEEK_SET);
        }
    }

    fclose(fptr);

/*--------------------
//HARF FREKANS HESAPLAMA

float *sirala(float D[],int ebiler[],int N){
	float *X=(float *)malloc(N*sizeof(float));
	//X buyukten kucuge sirali olmali

	for(int j=0;j<N;j++){
		float enbuyuk=D[0];
		int ebi=0;
		for(int i=1;i<N;i++){
			if(enbuyuk<D[i]){
				enbuyuk=D[i];
				ebi=i;
			}
		}
		X[j]=enbuyuk;
		D[ebi]=-1;
		ebiler[j]=ebi;
		//printf("%d ", ebi);
	}
	return X;
}

int main(){
    FILE *fptr=fopen("metin.txt","r");
    if(fptr==NULL)
        printf("Dosya acilamadi!"),exit(1);

    float sayac[26]={};
    int hs=0;

    char okunan;
    while(1){
        okunan=fgetc(fptr);
        if(okunan==EOF)
            break;
        else if((okunan>='A'&&okunan<='Z')||(okunan>='a'&&okunan<='z')){
            sayac[tolower(okunan)-'a']++;
            hs++;
        }
    }

    for(int i=0;i<26;i++){
        sayac[i]/=hs;
        printf("%c: %.3f\n",'A'+i,sayac[i]);
    }

    int ebiler[26];
    float *sirali=sirala(sayac,ebiler,26);

    for(int i=0;i<26;i++){
        printf("%c: %.3f\n",ebiler[i]+'A',sirali[i]);
    }

    return 0;

//---------------------
DOSYA SIFRELEME SEZAR

void sifrele(char X[],int K){
    FILE *fptr;
    fptr=fopen("sifreli.txt","w");
    for(int i=0;i<strlen(X);i++){
        char sifreli=(X[i]-'A'+K)%26+'A';
        fputc(sifreli,fptr);
    }
    fclose(fptr);
}
void sifrecoz(int K){
    FILE *sifreli,*sifresiz;
    sifreli=fopen("sifreli.txt","r");
    sifresiz=fopen("sifresiz.txt","w");

    while(1){
        char okunan=fgetc(sifreli);
        if(okunan==EOF)
            break;
        fputc((okunan-'A'-K+26)%26+'A',sifresiz);
    }

    fclose(sifreli);
    fclose(sifresiz);
}

int main(){
    char metin[1001];
    int K;
    printf("Sifrelenecek metni giriniz: ");
    gets(metin);
    printf("Sifreleme anahtarini gir: ");
    scanf("%d",&K);
    sifrele(metin,K);
    sifrecoz(K);

    return 0;
}

//-------------
