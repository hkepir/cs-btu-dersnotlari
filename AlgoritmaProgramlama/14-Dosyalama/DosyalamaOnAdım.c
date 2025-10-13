#include<stdlib.h>
#include<stdio.h>

int main()
{
    char okunansatir[1000];

    FILE *fptr;
    fptr = fopen("okunacak.txt","+r");
    fgets(okunansatir,1000,fptr);

    for(int i=0; i<strlen(okunansatir); i++)
    {
        if(okunansatir[i]=='A')
        {
            fseek(fptr,i,SEEK_SET);//dosyanin basindan itibaren i'nci satira git.
            fprintf(fptr,"%c",'X');
        }
    }

    fclose(fptr);
    return 0;

}
//NOTLAR

//Uzerinde calistigin dosya cok buyuk oldugunda
//r de r+ da dosya vardý
//w veya w+
//futs -1 donduruyorsa hata var demektir
