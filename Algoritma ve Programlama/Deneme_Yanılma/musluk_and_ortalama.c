#include <stdio.h>
int main(){
    /*float odev1, odev2, odev3;
    float quiz1, quiz2, quiz3;
    float ara_sinav1, ara_sinav2;
    float final_sinavi;

    printf("3 odev notunu yan yana gir:");
    scanf("%f %f %f", &odev1, &odev2, &odev3);
    printf("3 quiz notunu yan yana gir: ");
    scanf("%f %f %f", &quiz1, &quiz2, &quiz3);
    printf("ara sinav notunu yan yana gir: ");
    scanf("%f %f", &ara_sinav1, &ara_sinav2);
    printf("final sinav notunu gir: ");
    scanf("%f", &final_sinavi);
    float gecme_notu=0;
    gecme_notu+=(odev1+odev2+odev3)/3*0.09;
    gecme_notu+=(quiz1+quiz2+quiz3)/3*0.21;
    gecme_notu+=(ara_sinav1+ara_sinav2)/2*0.3;
    gecme_notu+=(final_sinavi)*0.4;
    printf("gecme_notu %f",gecme_notu);*/



    float a, b, c, havuzun_dolma_suresi;

    printf("a muslugu icin zaman:\n");
    scanf("%f",&a);

    printf("b muslugu icin zaman:\n");
    scanf("%f",&b);

    printf("c muslugu icin zaman:\n");
    scanf("%f",&c);

    havuzun_dolma_suresi=0;
    havuzun_dolma_suresi=1/(1/a+1/b+1/c);
    printf("Havuzu tek basina %.lf %.lf ve %.lf saatte dolduran musluklar ayni anda acilirsa havuz %.2f saatte dolar\n",a,b,c,havuzun_dolma_suresi);

    return 0;
    }

