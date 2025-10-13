#include <stdio.h>

int counter=0;

//bul_rec'i main'den önce tanýmlamazsanýz hata veriyor.
int bul_rec(char m[],char k,int i){
    if(m[i]=='\0')
        return 0;
    else if(m[i]==k)
        return 1+bul_rec(m,k,i+1); //bu pozisyonda 1 tane k buldum. ekle
    else
        return 0+bul_rec(m,k,i+1); //bu pozisyonda 0 tane k buldum. ekleme
}


void main(){
    /*
    int K=5;
    printf("%d!=%d\n",K,F1(K));
    printf("%d!=%d\n",K,F2(K));
    */
    /*
    printf("Fibo(7)=%d\n",Fibo_rec(7));
    printf("Sayac: %d",counter);
    */

    char metin[]="Persembe";
    printf("%s'in uzunlugu %d\n",metin,uzunluk_rec(metin,0));

    char harf='e';
    printf("%s'de %d tane %c var",metin,  bul_rec(metin,harf,0),  harf);


}


int uzunluk_rec(char x[],int indis){
    if(x[indis]=='\0')
        return 0;
    else
        return 1+uzunluk_rec(x,indis+1);
}









int Fibo_rec(int indis){
    printf("Ben Fibo_rec(%d)'yim\n",indis);
    counter++;
    if(indis==0 || indis==1)
        return 1;
    else
        return Fibo_rec(indis-1)+Fibo_rec(indis-2);
}



int F2(int N){
    if(N==0 || N==1)    //base condition
        return 1;
    else            //general condition
        return F2(N-1)*N;
}



int F1(int N){
    int sonuc=1;

    for(int i=1;i<=N;i++)
        sonuc=sonuc*i;

    return sonuc;
}
