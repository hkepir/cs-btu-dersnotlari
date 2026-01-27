#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* data;      // dinamik dizi
    int front;      // kuyruk baþý (sirabasi)
    int rear;       // kuyruk sonu (bir sonraki boþ yer)
    int capacity;   // dizinin toplam boyutu
} Queue;

Queue* createQueue(int initialCapacity){
    Queue* q = (Queue*)malloc(sizeof(Queue));

    q->capacity = initialCapacity;
    q->data = (int*)malloc(sizeof(int) * q->capacity);
    q->front = 0;
    q->rear  = 0;

    return q;
}

int isEmpty(Queue* q){
    return q->front == q->rear;
}

int size(Queue* q){
    return q->rear - q->front;
}

void resize(Queue* q, int newCapacity){
    int count = size(q);
    int* newData = (int*)malloc(sizeof(int) * newCapacity);

    for(int i = 0; i < count; i++){
        newData[i] = q->data[q->front + i];
    }

    free(q->data);
    q->data = newData;
    q->capacity = newCapacity;
    q->front = 0;
    q->rear  = count;
}

void enqueue(Queue* q, int value){
    if(q->rear == q->capacity){
        resize(q, q->capacity * 2);
    }

    q->data[q->rear++] = value;
}

int dequeue(Queue* q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
        return -1;
    }

    int value = q->data[q->front++];

    int count = size(q);
    if(count > 0 && count <= q->capacity / 4){
        resize(q, q->capacity / 2);
    }

    return value;
}

void printQueue(Queue* q){
    printf("Queue: ");
    for(int i = q->front; i < q->rear; i++){
        printf("%d ", q->data[i]);
    }
    printf("\n(front=%d rear=%d cap=%d)\n",
           q->front, q->rear, q->capacity);
}

void freeQueue(Queue* q){
    free(q->data);
    free(q);
}

int main(){
    Queue* q = createQueue(2);

    for(int i = 0; i < 20; i++){
        enqueue(q, i * 10);
    }
    printQueue(q);

    for(int i = 0; i < 10; i++){
        printf("%4d", dequeue(q));
    }
    printf("\n");
    printQueue(q);

    for(int i = 0; i < 20; i++){
        enqueue(q, i * 10);
    }
    printQueue(q);

    for(int i = 0; i < 30; i++){
        printf("%4d", dequeue(q));
    }
    printf("\n");
    printQueue(q);

    freeQueue(q);
    return 0;
}
