//Hedefe Giden Yolu Yazdir
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct n{
    int data;
    bool is_goal;//Bu dugum hedef mi
    bool is_branch;//Dal mi?
    struct n* next;
}node;




void bastir(node* r)
{
    node* root = r;
    while(root!= NULL){
        printf("%d ->",root->data);
        root = root->next;
    }
}

node* pop(node* root){
    int rvalue;
    if(root == NULL){//Empty stack
        printf("Empty Stack");
        return NULL;
    }
    if(root->next == NULL){//son node
       rvalue = root->data;
       printf("%4d",rvalue);
       free(root);
       return NULL;
    }
    //other situation
    node* iter = root;
    while(iter->next->next != NULL){
        iter = iter->next;
    }
    node* temp = iter->next;
    rvalue = temp->data;
    printf("%4d",rvalue);
    iter->next = NULL;
    free(temp);
    return root;
}

node* push(node* root,int a){
    if(root == NULL){
        root=(node*)malloc(sizeof(node));
        root->data = a;
        root->next = NULL;
        return root;
    }
    node* iter = root;
    while(iter->next != NULL){//sona ekleme yapar
        iter=iter->next;
    }
    node* temp = (node*)malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    iter->next = temp;
    return root;
}

void seekGoal(node* start_node, int max_size){

   //Bos bir yigin olusturur
    stack* s = createStack(max_size);
    node* p_map = start_node;
    bool goalNotFound = true;
    //dongu bos degil ve hedef bulunamadi
    while(p_map != NULL && goalNotFound){

        if(p_map->is_goal){
            goalNotFound = false;//Hedef bulundu
            s= pushStack(s,(void*)p_map);
        }else if(p_map->is_branch){
            //eger dallanma noktasi ise
        }
        else{
           s= pushStack(s,(void*)p_map);//Hedef degilse yigina ekle devam et
        }

        p_map = p_map->next;//bir sonraki dugume gec
    }
    //sonuclari yazdirma
    if(s->count ==0 || goalNotFound)
        printf("Hedefe giden yol yok\n");
    else{
        printf("Hedefe giden yol (sondan basa)\n");
        //yigin bosalana kadar poped ve yazdir.
        while(s->count > 0){
            node* pathNode = (node*)popStack(s);
            if(!pathNode->is_branch){
                printf("Durak: %d\n",pathNode->data);
            }
            printf("Yolun sonu\n");
        }
        free(s->Ary);
        free(s);
    }
}

int main(){
    node* s = NULL;
    s = push(s,1);
    s = push(s,2);
    s = push(s,3);
    s = push(s,4);
    s = push(s,5);
    s = push(s,6);

    printf("stack\n");
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    pop(s);

    printf("\nListeyi Bastir\n");
    bastir(s);

}


