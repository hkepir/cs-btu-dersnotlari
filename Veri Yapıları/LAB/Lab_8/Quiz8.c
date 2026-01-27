#include<stdio.h>

int stack[10];
int top = -1;

void push(int x){
    stack[++top]=x;
}

int pop(){
    return stack[top--];
}

int main(){
    char postfix[]="23+5*";
    int i=0;

    while(postfix[i] != '\0'){
        if(postfix[i] >= '0' && postfix[i] <= '9')
            push(postfix[i]-'0');
        else{
            int b = pop();
            int a = pop();
            if(postfix[i] == '+')
                push(a+b);
            else if(postfix[i] == '*')
                push(a*b);
        }
        i++;
    }
    printf("Sonuc: %d",pop());
    return 0;
}
