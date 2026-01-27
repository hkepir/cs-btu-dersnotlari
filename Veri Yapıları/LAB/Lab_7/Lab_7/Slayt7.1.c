//Stack Applications
//Reversing
//Parsing
//Postponing
//Backtracking

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>


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
    int limit, sayi;

    printf("Stack kapasitesini giriniz: ");
    scanf("%d", &limit);

    my_stack = createStack(limit);

    printf("%d adet sayi giriniz:\n", limit);
    for(int i = 0; i < limit; i++) {
        printf("%d. sayi: ", i + 1);
        scanf("%d", &sayi);

        // 'sayi' deðiþkenini void* tipine dönüþtürüp stack'e yolluyoruz
        // Not: (long) cast iþlemi 64-bit sistemlerde güvenli dönüþüm saðlar
        if(!pushStack(my_stack, (void*)(long)sayi)) {
            printf("Stack dolu, %d eklenemedi!\n", sayi);
            break;
        }
    }

    printf("\nStack icerigi (Sondan basa):\n");
    print_stack(my_stack);

    destroyStack(my_stack);
    return 0;
}
