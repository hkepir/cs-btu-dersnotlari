#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

struct node* yeniDugum(int veri){
    struct node* temp = (struct node*)malloc(sizeof(node));
    temp->data = veri;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct node* ekle(struct node* dugum,int veri){
    if(dugum==NULL){
        return yeniDugum(veri);
    }
    if(veri<dugum->data){
        dugum->left = ekle(dugum->left,veri);
        return dugum;
    }
    if(veri>dugum->data){
        dugum->right = ekle(dugum->right,veri);
        return dugum;
    }
}

void inOrder(struct node* dugum){
    if(dugum != NULL){
        inOrder(dugum->left);//once sola git
        printf("%d  ",dugum->data);
        inOrder(dugum->right);//en son saga git
    }
}

int main(){

 struct node* ogrenci_notlari = NULL;

 ogrenci_notlari = ekle(ogrenci_notlari,45);
 ekle(ogrenci_notlari,25);
 ekle(ogrenci_notlari,65);
 ekle(ogrenci_notlari,35);
 ekle(ogrenci_notlari,15);
 ekle(ogrenci_notlari,55);
 ekle(ogrenci_notlari,75);

 printf("BTS ile Siranlanmis Cikti(inorder):\n");
 inOrder(ogrenci_notlari);

 return 0;
}
