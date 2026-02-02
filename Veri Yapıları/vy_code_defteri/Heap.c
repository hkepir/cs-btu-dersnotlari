#include<stdio.h>
#include<stdlib.h>

//Global degiskenler tanimlandi
//Global degiskenler dosya disinda tanimlanir
//varsayilan olarak initialize edilir,baslangic degeri vermek zorunda degiliz

int heap[100];
int size;

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ekle(int veri){
    int i;

    heap[size] = veri;
    i = size;
    size++;


    while(i!=0){//i suanki heap indexini tutuyor
        int parent = (i-1)/2;
        if(heap[parent]<heap[i]){
            swap(&heap[parent],&heap[i]);
            i=parent;
        }else{
            break;
        }
    }
}

int silMax(){
    int root;

    if(size==0){
        printf("Heap bos!\n");
        return -1;
    }

    root = heap[0];
    heap[0]=heap[size-1];
    size--;

    int i = 0;
    while(1){
        int left = 2*i+1;
        int right = 2*i+2;
        int largest = i;

        if(left<size && heap[left]>heap[largest])
            largest = left;

        if(right<size && heap[right]>heap[largest])
            largest = right;

        if(largest!=i){
            swap(&heap[i],&heap[largest]);
            i = largest;
        }else{
            break;
        }
    }
    return root;
}

void printHeap(){
    for(int i=0;i<size;i++){
        printf(" %d ",heap[i]);
    }
    printf("\n");
}

int main(){
    ekle(10);
    ekle(30);
    ekle(20);
    ekle(50);
    ekle(40);

    printf("Heap: ");
    printHeap();

    printf("Silinen (max): %d\n",silMax());

    printf("Heap: ");
    printHeap();

    return 0;
}

