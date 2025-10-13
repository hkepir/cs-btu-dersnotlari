#include<stdio.h>

//Dinamik Dizi Slayttaki Kodlar
//Dinamik Dizi Ortalama Hesabi

int main()
{
    int n;
    float toplam = 0;

    printf("Dizi Boyutunu Giriniz:");
    scanf("%d",&n);

    int *dizi = (int*)malloc (sizeof(int)*n);

    for(int i=0;i<n;i++)
    {
        printf("%d. eleman giriniz:",i+1);
        scanf("%d",&dizi[i]);
    }

    for(int i=0; i<n;i++){
        toplam += dizi[i];
    }

    printf("\nToplam: %1.f\n",toplam);
    printf("Ortalama: %3.f\n",(toplam/n));

    free(dizi);
    return 0;
}


//malloc() ve calloc() farki

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,i;
    // p = calloc(15,sizeof(int));

    p = (int *)malloc (sizeof(int)*15);

    for(i=0; i<15; i++)
        printf("%d.eleman ---> %d\n",i+1,p[i]);

    free(p);
    return 0;
}

//realloc

int main()
{
    char *str;

    str = (char*)malloc(10);
    strcpy(str,"Algoritma");
    printf("Deger = %s, Adres = %u\n",str,str);

    //Reallocating Memory

    str = (char*)realloc(str,25);
    strcat(str,"ve Programlama");
    printf("Deger = %s, Adres = %u\n",str,str);

    free(str);
    return 0;
}
