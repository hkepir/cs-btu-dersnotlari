#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* sol;
    struct node* sag;
}tree;

typedef struct{
    int bas;
    int son;
    tree* parent;
    int sol_mu;//sol=1, sag=0,kok=-1
}Frame;

tree* dengeliBST_iterative(int dizi[],int boyut){
    if(boyut <= 0)
        return NULL;

    Frame stack[100];
    int top = -1;

    tree* kok = NULL;


    stack[++top] = (Frame){0, boyut - 1, NULL, -1};

    while (top >= 0) {
        Frame f = stack[top--];

        if (f.bas > f.son)
            continue;

        int orta = (f.bas + f.son) / 2;
        tree* yeni = (tree*)malloc(sizeof(tree));
        yeni->data = dizi[orta];
        yeni->sol = yeni->sag = NULL;

        if (f.parent == NULL) {
            kok = yeni;
        } else if (f.sol_mu) {
            f.parent->sol = yeni;
        } else {
            f.parent->sag = yeni;
        }

        // sað alt aðaç (sonra iþlenecek)
        stack[++top] = (Frame){orta + 1, f.son, yeni, 0};

        // sol alt aðaç
        stack[++top] = (Frame){f.bas, orta - 1, yeni, 1};
    }

    return kok;
}
void inOrder( tree* dugum){
    if(dugum != NULL){
        inOrder(dugum->sol);//once sola git
        printf("%d  ",dugum->data);
        inOrder(dugum->sag);//en son saga git
    }
}

int main() {
    int dizi[] = {10,20,30,40,50,60,70};
    int boyut = sizeof(dizi)/sizeof(int);

    tree* kok = dengeliBST_iterative(dizi, boyut);
    inOrder(kok);
}

