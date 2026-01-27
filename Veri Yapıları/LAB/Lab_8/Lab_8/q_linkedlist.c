#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};

//Front & Rear
struct node* front=NULL;
struct node* rear=NULL;

//enqueue
int enQ(int data){
    if(front==NULL){
        struct node* n = (struct node*)malloc(sizeof(struct node));
        n->data = data;
        n->next = NULL;

        front = rear = n;
    }else{
    //queue's not empty
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    n->next = NULL;

    rear->next = n;//dugumu bagla
    rear = n;//rear pointerini yeni dugume bagla
    }
}

int deQ(){
    if(front==NULL){
        printf("Queue is empty\n");
    }
    struct node* temp = front;
    front = front->next;
    free(temp);
}

void display(){
    if(front==NULL){
        printf("Queue is empty\n");
    }else{
    struct node* index = front;
        while(index!=NULL){
            printf("%d -> ",index->data);
            index = index->next;
        }
    }
    printf("NULL\n");

}


int main(){
    enQ(61);
    enQ(62);
    enQ(63);
    enQ(64);
    display();
    deQ(61);
    deQ(62);
    deQ(63);
    deQ(64);
    display();
}
