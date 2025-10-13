#include<stdio.h>
#include<stdlib.h>

void main()
{
char kelime[]="BURSA";
char *k_ptr = &kelime[0];

*(k_ptr+3)='D';
puts(kelime);//aslinda gets puts scanf pointer

//final sorusu
/*
char *k_ptr = &kelime[2];//kelime 2 nin fiziksel adresini tutacak k_ptr
puts(k_ptr);
*/

//u harfini scanf ile degistirme
scanf("%c",kelime+1);//scanf("%c",&kelime[1]);
puts(kelime);
}
