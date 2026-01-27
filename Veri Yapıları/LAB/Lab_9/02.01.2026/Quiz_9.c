
#include<stdio.h>
#include<stdlib.h>

struct n{
    int data;
    struct n* sol;
    struct n* sag;
};

typedef struct n node;

node* ekle(node* agac, int x){
    if(agac==NULL){
        node* root = (node*)malloc(sizeof(node));
        root->sol =NULL;
        root->sag =NULL;
        root->data = x;
        return root;
    }
    if(agac->data < x){//x>agac->data
        agac->sag = ekle(agac->sag,x);
        return agac;
    }
    agac->sol = ekle(agac->sol,x);
    return agac;
}

void dolas(node* agac){
    if(agac == NULL){
        return;
    }
    dolas(agac->sol);//Left
    printf("%d ",agac->data);//Node
    dolas(agac->sag);//Right

}

int max(node* agac){
    while(agac->sag != NULL){
        agac = agac->sag;
    }
    return agac->data;
}

int min(node* agac){
    while(agac->sol != NULL){
        agac = agac->sol;
    }
    return agac->data;
}

node* sil(node* agac, int x){
    if(agac==NULL)
        return NULL;
    if(agac->data==x){
        if(agac->sol==NULL&&agac->sag==NULL)
            return NULL;

        if(agac->sag!=NULL){
            agac->data=min(agac->sag);
            agac->sag=sil(agac->sag,min(agac->sag));
            return agac;
        }else{
            agac->data=max(agac->sol);
            agac->sol=sil(agac->sol,max(agac->sol));
            return agac;
        }
    }
    if(agac->data < x){
        agac->sag=sil(agac->sag,x);
        return agac;
    }else{
        agac->sol=sil(agac->sol,x);
        return agac;
    }
}

int main(){

    node* my_tree = NULL;
    my_tree = ekle(my_tree,45);
    my_tree = ekle(my_tree,25);
    my_tree = ekle(my_tree,70);
    my_tree = ekle(my_tree,15);
    my_tree = ekle(my_tree,30);
    my_tree = ekle(my_tree,60);

    my_tree = sil(my_tree,25);

    dolas(my_tree);//inorder dolasma

}
