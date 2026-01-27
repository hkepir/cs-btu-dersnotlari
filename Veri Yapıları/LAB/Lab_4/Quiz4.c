#include<stdio.h>

//Quiz4
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};


Struct Node *head = NULL;
Struct Node *tail = NULL;
/*
Cift yonlu bagli liste yapisi kullanilarak bagli listeyi
bastan sona (forward) yazdiran fonksiyon. print_list()
*/

void print_list(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        printf("Liste bos.\n");
        //return 0; hata sebebi
        // void fonksiyonda return deger dondurmeden yazilabilir
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){

}
