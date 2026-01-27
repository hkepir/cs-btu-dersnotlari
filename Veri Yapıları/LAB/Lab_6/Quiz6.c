#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;

};

struct Node* reverseList(struct Node* head){
    struct Node* p1;
    struct Node* p2;
    struct Node* p3;//3 adet isaretci pointer

    p1* = head;

    while(p1->next != NULL){//
        if()
        p1->next = p1->next;
    }


return head;
}
struct Node* reverseList(struct Node* head)
{
    if (head == NULL || head->next == NULL)
        return head;

    struct Node* p1 = NULL;
    struct Node* p2 = head;
    struct Node* next = NULL;

    while (p2 != NULL) {
        next = p2->next;
        p2->next = p1;   // Baðlantýyý ters çevir
        p1 = p2;
        p2 = next;
    }

    // p1 listenin yeni baþýdýr
    return p1;
}




int main(void){
    //Manuel liste olusturdum
    struct Node* head;//liste basini tutan eleman
    struct Node* liste = new(Node*)malloc(sizeof(Node*));
    head=liste;
    liste->data = 5;
    liste->next = NULL;


}
