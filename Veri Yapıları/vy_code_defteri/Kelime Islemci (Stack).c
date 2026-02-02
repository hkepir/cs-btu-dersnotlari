#include<stdio.h>
#include<stdlib.h>

char stack[30];
int top = -1;

void push(char item){
    stack[++top]=item;
}

char pop(){
    return stack[top--];
}

/*
char pop(){
    char silinen = stack[top];
    stack[top] = '\0';
    top--;
    return silinen;
}
*/

int main(){

    printf("notebook\n");
    push('A');
    push('B');
    push('C');
    pop();//geri al
    push('D');
    push('E');
    pop();
    pop();

    for(int i=0;i<=top;i++){
        printf("%c ",stack[i]);
    }

}
