#include"stdio.h"
#include"stdlib.h"

//Insertion_sort - Shell_sort
//Selection_sort - Heap_sort (Secerek Siralama)
//Bubble_sort - Quick_sort

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selection_sort(int arr[],int n){
    int i,j,min;

    for(i=0;i<n-1;i++){
        min = i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        if(min != i){
            swap(&arr[i],&arr[min]);
        }
    }
}

void heap_sort(int arr[],int n){
    for(int i = n/2-1;i>=0;i--){//koke kadar gider
        heapify(arr,n,i);//build max heap
    }
    for(i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

void insertion_sort(int dizi[],int n){
    int i,j,temp;
    for(i=1;i<n;i++){
        //j=i;
        for(j=i;j>0 && dizi[j]<dizi[j-1];j--){
            temp = dizi[j];
            dizi[j] = dizi[j-1];
            dizi[j-1] = temp;
            //swap(&dizi[j],&dizi[j-1]);
        }
    }
}

void bubble_sort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main(){

}
