#include<stdio.h>
#include<stdlib.h>

int heap[100];
int size;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ekle(int veri){
    heap[size] = veri;
    int i = size;
    size++;

    while(i>0 && heap[i]<heap[(i-1)/2]){
        swap(&heap[i],&heap[(i-1)/2]);
        i=(i-1)/2;
    }
}

void yazdir(){
    printf("Min heap dizisi: ");
    for(int i=0;i<size;i++){
        printf(" %d ",heap[i]);
    }
    printf("\n");
}

int main(){
    int veriler[]={25,15,40,10,30};
    int n = sizeof(veriler)/sizeof(veriler[0]);

    printf("Veriler sirasiyla ekleniyor...\n");

    for(int k=0;k<n;k++){
        ekle(veriler[k]);
        printf("%d eklendi -> ",veriler[k]);
        yazdir();
    }
    return 0;
}
