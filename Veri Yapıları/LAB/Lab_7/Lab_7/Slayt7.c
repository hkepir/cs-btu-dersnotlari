//Array-Stack ADT
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct{
    void** Ary;
    int count;
    int max;
    int top;
}stack;

stack* createStack(int maxSize){
    stack* s;
    s=(stack*)malloc(sizeof(stack));
    if(!s)
        return NULL;

    s->count = 0;
    s->top = -1;
    s->max = maxSize;
    s->Ary = (void**)calloc(s->max,sizeof(void*));

    if(!s->Ary){
        free(s);
        return NULL;
    }
    return s;
}

stack* destroyStack(stack* s){
    if(s->Ary){
        free(s->Ary);//once icindeki diziyi serbest birak
        free(s);//struct 'in kendisini serbest birak
    }

}

bool pushStack(stack* s,void* data){
    if(s->count == s->max)
        return false;

    (s->count)++;
    (s->top)++;
    s->Ary[s->top]=data;

    return true;
}

void* popStack(stack* s){
    void* data;

    if(s->count == 0)
        data = NULL;
    else{
        data = s->Ary[s->top];
        (s->count)--;
        (s->top)--;
    }
    return data;
}

void print_stack(stack* s){
    if(s->top == -1)
        printf("Stack's Empty\n");
    for(int i = s->top; i>=0 ; i--){
        //void* verisini int olarak yazdirmak icin casting
        printf("%d\n",(int)s->Ary[i]);
    }

}

int main()
{
    stack* my_stack;
    my_stack=createStack(6);

    //degerler cast edilmeli
    pushStack(my_stack,(void*)15);
    pushStack(my_stack,(void*)25);
    pushStack(my_stack,(void*)35);
    pushStack(my_stack,(void*)45);
    pushStack(my_stack,(void*)55);
    pushStack(my_stack,(void*)65);

    print_stack(my_stack);

    my_stack=destroyStack(my_stack);
}
