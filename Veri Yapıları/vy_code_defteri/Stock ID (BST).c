#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    int data;
    struct n* sol;
    struct n* sag;
}tree;

tree* olustur(int data){
    tree* yeni = (tree*)malloc(sizeof(tree));
    yeni->data = data;
    yeni->sag = NULL;
    yeni->sol = NULL;
    return yeni;
}

tree* ekle(tree* root,int data){

    if(root==NULL){
        root = olustur(data);
        return root;
        //return olustur(data);
    }
    if(data < root->data){
        root->sol = ekle(root->sol,data);
        return root;
    }
    if(data > root->data){
        root->sag = ekle(root->sag,data);
        return root;
    }
}

void dolas(tree* root){
    if(root!=NULL){
        dolas(root->sol);
        printf("%d ",root->data);
        dolas(root->sag);
    }
}

int main(){
    tree* kok = NULL;
    int stock_id[] = {50,30,20,40,70,60,80};

    for(int i=0;i<7;i++){
        kok = ekle(kok,stock_id[i]);
    }

    printf("BTS ile Siranlanmis Cikti(inorder):\n");
    dolas(kok);
}
