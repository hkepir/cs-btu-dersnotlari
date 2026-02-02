#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

// Stack uyarlamalı heapify-up
void heapifyUp(int i) {
    int stack[MAX];
    int top = -1;

    // Yukarı çıkış yolunu stack'e push et
    while (i != 0) {
        stack[++top] = i;
        i = (i - 1) / 2;
    }
    stack[++top] = 0; // kökü de ekle

    // Şimdi stack'ten pop ederek yukarıdan aşağıya kontrol et
    while (top > 0) {
        int child = stack[top--];
        int parent = stack[top];
        if (heap[parent] < heap[child]) {
            swap(&heap[parent], &heap[child]);
        }
    }
}

void insert(int value) {
    heap[size] = value;   // sona ekle
    int i = size;
    size++;
    heapifyUp(i);         // yukarı taşı
}

void printHeap() {
    printf("Heap: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    insert(20);
    printHeap();

    insert(30);
    printHeap();

    insert(50);
    printHeap();

    insert(40);
    printHeap();

    insert(60);
    printHeap();

    return 0;
}
