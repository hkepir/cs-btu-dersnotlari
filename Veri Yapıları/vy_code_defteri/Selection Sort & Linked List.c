#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}n;

n* selection_sort(n* root){
    n* iter=root;
    int min;
    n* depo;//yeni linked list te sırali elemanları tutacağım
    while(iter->next != NULL){
        min = iter->data;
        if(min>iter->next->data){
            min = iter->next->data;
            depo->data = min;
        }
    }

    return root;
}

/*void selection_sort(n* root) {
    n *i, *j, *minNode;
    int temp;

    // Dış döngü "duvarı" temsil eder [cite: 78, 79]
    for (i = root; i != NULL && i->next != NULL; i = i->next) {
        minNode = i; // Başlangıçta en küçük, duvarın başındaki eleman olsun

        // İç döngü sırasız listenin en küçüğünü arar [cite: 76, 77]
        for (j = i->next; j != NULL; j = j->next) {
            if (j->data < minNode->data) {
                minNode = j; // Daha küçük bir eleman bulduk!
            }
        }

        // En küçük eleman bulunduysa, duvarın başındakiyle veriyi takas et
        temp = i->data;
        i->data = minNode->data;
        minNode->data = temp;
    }
}*/

/*
n* selection_sort(n *root) {
    n *wall, *j, *minNode;
    int temp;

    if (root == NULL || root->next == NULL)
        return root;

    // wall: sıralı ve sırasız kısmı ayırır
    for (wall = root; wall->next != NULL; wall = wall->next) {

        minNode = wall;

        // sırasız kısımda en küçüğü ara
        for (j = wall->next; j != NULL; j = j->next) {
            if (j->data < minNode->data) {
                minNode = j;
            }
        }

        // data swap (basit linked list mantığı)
        temp = wall->data;
        wall->data = minNode->data;
        minNode->data = temp;
    }

    return root;
}

*/
int main(){

}

