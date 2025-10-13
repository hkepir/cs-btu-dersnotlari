#include<stdio.h>

int main()
{
    int dizi [10];
    for(int i=0; i<10; i++)
    {
        dizi[i]=i+1;
    }
    printf("Dizi Elemanlari\n");
    for(int i=0; i<10; i++)
    {
        printf(" %d ",dizi[i]);
    }
    kare(dizi);//hata dizi[]

}

void kare(int dizi[])

{

    for(int i=0; i<10; i++) //for(;i<=9;)
    {
        dizi[i]=(i+1)*(i+1);
    }
    printf("\nKareli hali \n");
    for(int i=0; i<10; i++)
    {
        printf("%d ",dizi[i]);
    }


}
