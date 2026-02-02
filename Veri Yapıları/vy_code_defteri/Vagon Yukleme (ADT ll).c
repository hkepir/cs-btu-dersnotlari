#include <stdio.h>
#include <stdlib.h>

typedef struct n{
    int yuk;
    struct n* next;
} node;

node* vagon_olustur(int veri){
    node* yeni = (node*)malloc(sizeof(node));
    yeni->yuk = veri;
    yeni->next = NULL;
    return yeni;
}

void yazdir(node* r){
    node* iter = r;

    printf("Tren Yukleri: ");
    while(iter != NULL){
        printf("%d -> ", iter->yuk);
        iter = iter->next;
    }
    printf("NULL\n");
}

void sona_ekle(node* r, int veri){
    node* iter = r;

    while(iter->next != NULL){
      iter = iter->next;
    }

    iter->next = vagon_olustur(veri);
//
//    node* temp = (node*)malloc(sizeof(node));
//    temp->yuk = veri;
//    temp->next =NULL;
//    iter->next = temp;

}

void sil(node* r, int silinecek_veri){
    node* iter = r;

    while(iter->next != NULL && iter->next->yuk != silinecek_veri){
        iter = iter->next;
    }

    if(iter->next != NULL){
        // Su an 'iter' 20'de duruyor. 'iter->next' ise 30 (silinecek olan).
        node* silinecek = iter->next;
        iter->next=iter->next->next;
        free(silinecek); // Hafizayi temizle
    }
}

int main(){
    node* root;
    root = vagon_olustur(10); // ilk vagon (Lokomotif)

    // Artýk fonksiyonla ekliyoruz
    sona_ekle(root, 20);
    sona_ekle(root, 30);
    sona_ekle(root, 40);

    yazdir(root);
    // Beklenen Cikti: 10 -> 20 -> 30 -> 40 -> NULL

    return 0;
}
