#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    int yuk;
    struct n* next_vagon;
}n;

n* vagon_yukle(int yuk){
    n* vg = (n*)malloc(sizeof(n));
    vg->yuk = yuk;
    vg->next_vagon = NULL;
    return vg;
}


int main(){
    n* head = vagon_yukle(10);
    n* second = vagon_yukle(20);
    n* third = vagon_yukle(30);

    head->next_vagon = second;
    second->next_vagon = third;

    printf("vagon1 %d \n",head->yuk);
    printf("vagon2 %d \n",second->yuk);
    printf("vagon3 %d \n",third->yuk);


}
