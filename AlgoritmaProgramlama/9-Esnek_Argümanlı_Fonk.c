#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> //1. ekleme

//topla() bir esnek argümanli fonksiyon olacak
double topla(int N, ...){
    double toplam=0.0;
    va_list listem; //2. ekleme
    va_start(listem,N); //3. ekleme


    for(int i=0;i<N;i++)
        toplam+=va_arg(listem,double); //5. ekleme

    va_end(listem);  //4. ekleme
    return toplam;
}


double P(int N,double x,...){
    double sonuc=0.0;
    va_list listem; //2. ekleme
    va_start(listem,N); //3. ekleme

    for(int i=0;i<N;i++)
        sonuc+=va_arg(listem,double)*pow(x,i);

    va_end(listem);  //4. ekleme
    return sonuc;
}

void esnek_yazdir(int N,...){
    va_list listem;
    va_start(listem,N);

    for(int i=0;i<N;i++)
        printf("%c",va_arg(listem,int));//char için özel durum

    printf("\n");
    va_end(listem);
}


void main(){
    /*
    printf("Toplam: %lf\n",topla(3,10.1,20.2,30.3));
    printf("Toplam: %lf\n",topla(4,10.1,20.2,30.3,40.4));
    printf("Toplam: %lf\n",topla(5,10.1,20.2,30.3,40.4,50.5));
    */
    /*
    printf("P(3.2)=%lf\n",P(4,3.2,1.1,2.2,3.3,4.4));
    printf("P(3.2)=%lf\n",P(3,3.2,1.1,2.2,3.3));
    */

    esnek_yazdir(5,'B','U','R','S','A');
    esnek_yazdir(4,'B','U','R','S');
    esnek_yazdir(2,'B','U');
}

//-------------------------

void main(int argc,char *argv[]){
    printf("Bana %d tane parametre geldi\n",argc);
    printf("Benim adim %s\n",argv[0]);

    if(argc==3){
        printf("Toplam: %d",atoi(argv[1])+atoi(argv[2]));
    }
    else
        printf("Hatali sayida parametre girildi!!!");
}

//----------------------------


//Pointer-Isaretci-Göstergec
//Pointerlar adres tutan degiskenlerdir

void main(){
    int sayi;
    printf("Bir sayi girin:");
    scanf("%d",&sayi); //address of sayi

    printf("Girilen sayi: %d\n",sayi);
    printf("Sayi degiskeninin adresi %p\n",&sayi);

    int *p_sayi=&sayi;
    printf("p_sayinin icinde ne var?: %p\n",p_sayi);

    *p_sayi=55; //value at p_sayi
    //*pointer demek pointerin gösterdigi adresteki deger
    //demektir

    //*&sayi bu ifade sayi demektir
    //yani * ve & birbirini iptal eder

    printf("Sayinin son hali %d\n",sayi);

}


//------------------

#include <stdio.h>
#include <stdlib.h>

//pointer aritmetigi
void main(){
    int sayi=555555;
    char *p_sayi=&sayi;

    for(int i=0;i<sizeof(sayi);i++)
        printf("Adres: %p, Deger: %X\n",p_sayi+i,*(p_sayi+i));
        //(p_sayi+i) ile yeni bir adres hesapliyoruz.
        //bu isleme pointer aritmetigi denir.

}
