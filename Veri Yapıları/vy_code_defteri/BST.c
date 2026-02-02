//Konu Anlatimi

//TREE

//General Tree: root and child. don't have cycle.
//BST: Each node can have at most two children.
// O(log n) best case and O(n) worst case.
//AVL: balanced verison of BTS.
//Balance factor: 1 0 -1 and Rotation operation

//SORTING ALGORITHMS

//Bubble Sort: Swaps adjacent elements repeatedly. O(n²)
//Insertion Sort: Inserts elements into their correct position in a sorted subarray. O(n²)
//Selection Sort: Selects the minimum and places it at the correct position. O(n²)

#include<stdio.h>
#include<stdlib.h>

typedef struct n{
    int data;
    struct n* left;
    struct n* right;
}n;

n* new_node(int data){
    n* node = malloc(sizeof(node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

n* insert(n* root,int data){
    if(root == NULL)
        return new_node(data);

    if(data<root->data)
        root->left = insert(root->left,data);
    else
        root->right = insert(root->right,data);

    return root;
}

void inorder(n*root){
    if(root != NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

n* search(n* iter,int key){
    if(iter==NULL || iter->data == key){
     return iter;
    }
    if(key < iter->data){
        return search(iter->left,key);
    }
        return search(iter->right,key);

}

void bubbleSort(int arr[],int n){
    int i,j,temp;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void bubbleSort2(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        // BURAYA BIR KONTROL DEGISKENI EKLE
        int sirali_mi = 1;

        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sirali_mi=0;
                // DEGİSKENİ GUNCELLE
            }
        }
        if(sirali_mi==1)//the best case O(n) de calisir.
            break;
        // EGER HIC SWAP OLMADIYSA DONGUYU KIR
    }
}
void insertionSort(int arr[],int n){
    int i,key,j;

    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j = j - 1;
        }
    }
    arr[j+1] = key;
}

void selectionSort(int arr[],int n){
    int i,j,min_idx,temp;

    for(i=0;i<n-1;i++){
        min_idx = i;

        for(j=i+1;j<n;j++){
          if(arr[j]<arr[min_idx]){
            min_idx = j;
          }
        }
        if(min_idx != i){
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

int findMax(n* root) {
    if(root==NULL){
        return -1;
    }

    while(root->right != NULL){
     root = root->right;
    }
    printf("\nMax eleman: %d",root->data);
    return root->data;
}

// count: Şu ana kadar kaç düğüm gezdiğimizi tutan sayaç (pointer olarak gelir)
// k: Hedef sıra
// result: Sonucu kaydedeceğimiz değişken



void kthSmallest(n* root, int* count, int k, int* result) {
    if (root == NULL) return;

    // 1. Önce en sola (en küçüklere) git
    kthSmallest(root->left, count, k, result);

    // 2. ORTA (Ziyaret Sırası)
    (*count)++; // Bir sayı daha saydık (1., 2., 3. ...)

    if (*count == k) {           // Saydığımız sayı 'k' mı?
        *result = root->data;    // Evetse, cevabı kaydet.
        return;
    }

    // 3. Sonra sağa git
    kthSmallest(root->right, count, k, result);
}

int main(){
    n* root = NULL;
    root = insert(root,50);
    insert(root,30);
    insert(root,20);
    insert(root,40);
    insert(root,70);
    insert(root,60);
    insert(root,80);

    inorder(root);
    printf("\nMax eleman: %d",findMax(root));
    return 0;
}
