//LinkedList-Stack ADT
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node{
    int data;
    struct node* link;
}node;

typedef struct{
    int count;
    node* top;
}stack;

stack* createStack(){
    stack* s;

    s = (stack*)malloc(sizeof(stack));
    if(s){
        s->count=0;
        s->top=NULL;
    }
    return s;
}

bool push(stack* s,int dataInPtr){
    node* newPtr;
    newPtr=(node*)malloc(sizeof(node));
    if(!newPtr)
        return false;

    newPtr->data = dataInPtr;
    newPtr->link = s->top;
    s->top = newPtr;
    (s->count)++;

    return true;
}

bool pop(stack* s,int* poppedVal){
    if(s->count == 0){
        printf("Stack is Empty\n");
        return false;
    }
        node* temp = s->top;
        *poppedVal = temp->data;
        s->top = temp->link;
        free(temp);
        (s->count)--;

    return true;
}

bool peek(stack* s,int* topValue){
    if(s->count == 0)
        return false;
    else{
        *topValue = s->top->data;
        return true;
    }
}

bool emptyStack(stack* s){
    return (s->count == 0);
}

bool fullStack(stack* s){
    node* temp = (node*)malloc(sizeof(*(s->top)));
    if(temp){
        free(temp);
        return false;
    }
    return true;
}

int countStack(stack* s){
    return s->count;
}

stack* destroyStack(stack* s){
    node* temp;

    if(s){
        while(s->top != NULL){
           // free(s->top->data);

            temp = s->top;
            s->top = s->top->link;
            free(temp);
        }
        free(s);
    }
    return NULL;
}

void bastir(stack* s){
    node* iter = s->top;
    while(iter!=NULL){
        printf("%d\n",iter->data);
        iter = iter->link;
    }
    printf("NULL\n");
}


int main(){
    stack* s = createStack();

    printf("Push Islemleri\n");
    push(s,30);
    push(s,31);
    push(s,32);

    printf("Stack Eleman Sayisi: %d\n",countStack(s));

    int Val ;
    peek(s,&Val);
    printf("Top eleman: %d\n",Val);

    printf("\n-Stack Elemanlari-\n");
    bastir(s);

    printf("Pop Islemleri\n");
    while(!emptyStack(s)){
        pop(s,&Val);
        printf("Cikarilan: %d\n",Val);
    }
    destroyStack(s);
    return 0;
}
