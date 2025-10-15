#include <stdio.h>
int main(){
    int ogrenci1,ogrenci2,ogrenci3,ogrenci4,ogrenci5,t;
    /* ogrenci1 1.ögrencinin yasini temsil etmektedir*/
    printf("ogrenci1 yasi nedir?");
    scanf("%d",&ogrenci1);
    printf("ogrenci2 yasi nedir?");
    scanf("%d",&ogrenci2);
    printf("ogrenci3 yasi nedir?");
    scanf("%d",&ogrenci3);
    printf("ogrenci4 yasi nedir?");
    scanf("%d",&ogrenci4);
    printf("ogrenci5 yasi nedir?");
    scanf("%d",&ogrenci5);
    t=0;
    t+=ogrenci1;
    t+=ogrenci2;
    t+=ogrenci3;
    t+=ogrenci4;
    t+=ogrenci5;
    t/=5;
    int ortalama;
    ortalama=t;
    printf("ortalama %d", ortalama);
}
