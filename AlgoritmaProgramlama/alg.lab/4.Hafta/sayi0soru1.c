#include <stdio.h>
int main(){
    /*int x;
    printf("Sayi gir:\n");
    scanf("%d",&x);
    if(x>0)
        printf("Sayi pozitiftir\n");
    else if(x<0)
        printf("Sayi negatiftir\n");
    else
        printf("Sayi sifira esittir\n");
    return 0;*/
    int x;
    printf("Sayi gir:\n");
    scanf("%d",&x);
    x= (x>0)? printf("Sayi pozitiftir"):(x<0)?printf("Sayi negatiftir"):printf("sayi sýfýra esittir");

}
