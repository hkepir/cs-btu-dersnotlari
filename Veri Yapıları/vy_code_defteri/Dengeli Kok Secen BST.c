#include<stdlib.h>
#include<stdio.h>

//Tum verileri onceden biliyoruz.
//verileri sirala
//ortadaki veriyi sec, sol yaridan sol alt agac
//sag yaridan sag alt agac olusturulur.
//Bu yapi AVL degildir ancak baslangicta dengeli bir bts uretir.

typedef struct node{
    int data;
    struct node* sol;
    struct node* sag;
}tree;

tree* yeni_tree(int data){
    tree* temp = (tree*)malloc(sizeof(tree));
    temp->data = data;
    temp->sag = NULL;
    temp->sol = NULL;
    return temp;
}

void inOrder( tree* dugum){
    if(dugum != NULL){
        inOrder(dugum->sol);//once sola git
        printf("%d  ",dugum->data);
        inOrder(dugum->sag);//en son saga git
    }
}


tree* dengeliBST(int dizi[],int bas,int son){
    if(bas>son)
        return NULL;

    int orta = (bas+son)/2;

    tree* kok = yeni_tree(dizi[orta]);

    kok->sol = dengeliBST(dizi,bas,orta-1);
    kok->sag = dengeliBST(dizi,orta+1,son);

    return kok;

}

int main(){

    int ogr_nots[]={10,20,30,40,50,60,70,80,90,100};
    int boyut = sizeof(ogr_nots)/sizeof(ogr_nots[0]);

    inOrder(dengeliBST(ogr_nots,0,boyut-1));
}
