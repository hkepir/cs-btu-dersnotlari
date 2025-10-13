#include <stdio.h>
int main(){
    float pi =3.14;
    int a;
    printf("%d\n",(int)pi);
    printf("%f\n",pi);
    a = pi;
    printf("%d\n",a);
    a = 2.15*3;
    pi= 2.15*3;
    printf("%d\n%f\n",a,pi);

    double b=200.000;
    printf("%.2f\n",b);
    printf("%.2lf\n",b);
    printf("%lf\n",b);


    float f=14.52;
    printf("%.2f\n",f);
    printf("%.2lf\n",f);

}

