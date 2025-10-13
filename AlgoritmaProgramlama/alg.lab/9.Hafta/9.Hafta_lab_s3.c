#include<stdio.h>
int main(){

    int n;
    printf("Faktoryel degeri hesaplanacak pozitif sayiyi giriniz:");
    scanf("%d",&n);
    printf("Faktoryel sonucu %d",faktoryel_hesabi(n));
}
    int faktoryel_hesabi(int n)
    {
    if(n<=1)
        return 1;
    else
        return n*faktoryel_hesabi(n-1);

    }
