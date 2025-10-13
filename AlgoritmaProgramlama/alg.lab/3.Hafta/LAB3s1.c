#include <stdio.h>

int main() {
    double A, B, C, D, T;
    double minNegative;

    printf("a muslugu havuzu kac saatte doldurur/bosaltir? ");
    scanf("%lf", &A);
    printf("b muslugu havuzu kac saatte doldurur/bosaltir? ");
    scanf("%lf", &B);
    printf("c muslugu havuzu kac saatte doldurur/bosaltir? ");
    scanf("%lf", &C);
    printf("d muslugu havuzu kac saatte doldurur/bosaltir? ");
    scanf("%lf", &D);

    // Tüm musluklar negatifse en büyük negatif deðeri pozitife dönüþtür
    if (A < 0 && B < 0 && C < 0 && D < 0) {
        minNegative= A;
        if (B > minNegative) minNegative = B;
        if (C > minNegative) minNegative = C;
        if (D > minNegative) minNegative = D;

        // En büyük negatif deðeri pozitife dönüştür
        if (minNegative == A) A = -A;
        else if (minNegative == B) B = -B;
        else if (minNegative == C) C = -C;
        else if (minNegative == D) D = -D;
    }

    T = (1/A + 1/B + 1/C + 1/D);

    if (T > 0) {
        printf("Havuzu tek basina %.1f, %lf, %.1f ve %.1f saatte dolduran dort musluk birlikte acilirsa havuz %.2f saatte dolar.\n", A, B, C, D, T);
    } else if (T < 0) {
        printf("Havuzu tek basina %.1f, %.1f, %lf ve %.1f saatte bosaltan dort musluk birlikte acilirsa havuz %.2f saatte bosalir.\n", A, B, C, D, T);
    } else {
        printf("Havuz Doldurulamaz!\n");
    }

    return 0;
}

















/*#include <stdio.h>
 int main(){

    double A,B,C,D,T;
    printf("a muslugu havuzu kac saatte doldurur/bosaltir?");
    scanf("%lf",&A);
    printf("b muslugu havuzu kac saatte doldurur/bosaltir?");
    scanf("%lf",&B);
    printf("c muslugu havuzu kac saatte doldurur/bosaltir?");
    scanf("%lf",&C);
    printf("d muslugu havuzu kac saatte doldurur/bosaltir?");
    scanf("%lf",&D);
    T=(1/A+1/B+1/C+1/D);
    if(T>0)
    printf("Havuzu tek basina %.1f, %.1f ve %.1f saatte dolduran uc musluk birlikte acilirsa havuz %.2f saatte dolar.\n", A, B, C, T);

        else if(T<0)
    printf("Havuzu tek basina %.1f, %.1f ve %.1f saatte bosaltan uc musluk birlikte acilirsa havuz %.2f saatte bosalýr.\n", A, B, C, T);

    else
    printf("Havuz Doldurulamaz!");

    return 0;
}*/
