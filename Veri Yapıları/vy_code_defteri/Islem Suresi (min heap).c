#include<stdio.h>
#include<stdlib.h>

int heap[50];
int size;

void swap(int* a,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

void ekle(int eleman){
    heap[size] = eleman;
    int cur_size = size;
    size++;

    while(cur_size>0 && heap[cur_size] < heap[(cur_size-1)/2]){//min heap
        swap(&heap[cur_size],&heap[(cur_size-1)/2]);
        cur_size = (cur_size-1)/2;
    }
}

void print_heap(){
    for(int i=0;i<size;i++){
        printf("%d ",heap[i]);
    }
    printf("\n");
}

int main(){
    int inputs[]={25,15,40,10,30};
    int n = sizeof(inputs)/sizeof(inputs[0]);

    printf("Veriler ekleniyor...\n");
    for(int i=0;i<n;i++){
        ekle(inputs[i]);
        printf("%d -> eklendi ",inputs[i]);
        print_heap();
    }
    return 0;
}
