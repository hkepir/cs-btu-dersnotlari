#include<stdio.h>
#include<string.h>
#define max 100

typedef struct{
    int top;
    char data[max]
}stack;

void push(stack *ps,char x){
    if(ps->top == max-1){
        printf("Stack's overflow\n");
    }else{
        ps->data[++(ps->top)] = x;//top = -1 bos stack ilk top arttir
    }

}

void pop(stack *s){
    if(s->top == -1){
        printf("Stack's empty\n");
    }else{
        printf("%c\n",s->data[s->top--]);
    }
}




int main(){
    stack my_stack;
    my_stack.top = -1;//Bos

    char kelime[max];
    printf("Bir kelime giriniz\n");
    scanf("%s",&kelime);

    int kelime_boyut = strlen(kelime);

    //push
    for(int i = 0; i<kelime_boyut; i++)
        push(&my_stack,kelime[i]);
    //pop
    for(int i = 0; i<kelime_boyut; i++){
        pop(&my_stack);
    }
}
