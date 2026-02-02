#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    char data;
    struct node* left;
    struct node* right;
}node;

typedef struct stack{
    node* dizi[20];
    int top;
}stack;

void initstack(stack* s){
    s->top = -1;
}

void push(stack* s,node* n){
    s->dizi[++s->top]=n;
}

node* pop(stack* s){
    return s->dizi[s->top--];
}

int isEmpty(stack* s){
    return s->top == -1;
}

node* yeni_node(char data){
    node* n = (node*)malloc(sizeof(node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void agaciStackAt(stack* s){
    push(s,yeni_node('A'));
    push(s,yeni_node('B'));
    push(s,yeni_node('C'));
    push(s,yeni_node('D'));
    push(s,yeni_node('E'));
    push(s,yeni_node('F'));
}
/*
node* bst(stack* s){
    node* F = pop(s);
    node* E = pop(s);
    node* D = pop(s);
    node* C = pop(s);
    node* B = pop(s);
    node* A = pop(s);

    A->left = B;
    B->right = C;
    C->right = D;
    C->left = E;
    E->right = F;
    return A;
}
*/
void preorder(node* root){
    if(root == NULL) return;

    printf("%c",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main(){
    stack harfler;
    initstack(&harfler);

    agaciStackAt(&harfler);

    node* F = pop(&harfler);
    node* E = pop(&harfler);
    node* D = pop(&harfler);
    node* C = pop(&harfler);
    node* B = pop(&harfler);
    node* A = pop(&harfler);

    A->left = B;
    B->right = C;
    C->right = D;
    C->left = E;
    E->right = F;
    //node* root = bst(&harfler);

    printf("preorder: ");
    preorder(A);
    return 0;
}

