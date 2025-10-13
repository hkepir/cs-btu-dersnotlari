#include <stdio.h>
int main(){
    int yasim, dogum_tarihin, tarih;
    printf("Dogum tarihini ogrenmek ister misin?\n");
    printf("Bugunun tarihini gir:\n");
    scanf("%d",&tarih);
    printf("Yasini gir:\n");
    scanf("%d",&yasim);
    dogum_tarihin=tarih-yasim;
    printf("Dogum yiliniz %d yilidir",dogum_tarihin);
}
