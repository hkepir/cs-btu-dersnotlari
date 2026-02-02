#include<stdio.h>
#include<stdlib.h>

#define max 5 //kuyrugun max kapasitesi

typedef struct{
    int items[max];
    int front;
    int rear;
}Queue;

void initQueue(Queue* q){
    q->front = -1;
    q->rear = -1;
}

int isFull(Queue* q){
    if(q->rear == max-1)
        return 1;//dolu
    return 0;
}

int isEmpty(Queue* q){
    if(q->front == -1)
        return 1;//bos
    return 0;
}

void enqueue(Queue* q,int val){
    if(isFull(q)){
        printf("Kuyruk dolu.");
    }
        q->front = 0;
        //front ilk elemani gosterir
        q->rear++;//rear eklenen elemani gosterir.
        q->items[q->rear] = val;
        printf("Enqueue -> Dosya ID: %d eklendi.\n",val);
}

int dequeue(Queue* q){
    if(isEmpty(q)){
        printf("Cikarilacak dosya yok\n");
        return -1;
    }else{
        int veri = q->items[q->front];
        q->front++;

        //eger son elemani da cikardiysak kuyrugu sifirla
    if(q->front > q->rear){
        q->front = -1;
        q->rear = -1;
    }
    return veri;
  }
}

void display(Queue* q){
    if(isEmpty(q)){
        printf("Kuyruk bos\n");
    }
    printf("Yazici Kuyrugu: [");

    for(int i=q->front;i<=q->rear;i++){
        printf("%d ",q->items[i]);
    }
    printf("]\n");
}

int main(){
    Queue yazici;
    initQueue(&yazici);

    printf("---YAZICI SISTEMI BASLATILDI---\n");

    enqueue(&yazici,101);
    enqueue(&yazici,102);
    enqueue(&yazici,103);
    display(&yazici);


    int cikan = dequeue(&yazici);
    printf("Yazdirildi: Dosya ID %d kuyruktan cikti.\n",cikan);

    display(&yazici);

    return 0;
}
