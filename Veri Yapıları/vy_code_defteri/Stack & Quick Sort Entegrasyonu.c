#include"stdio.h"
#include"stdlib.h"

typedef struct node {
    int data;
    struct node* next;
} node;

typedef struct {
    node* top;
} Stack;


void push(Stack* s, int val);
int pop(Stack* s);
void quickSort(int arr[], int left, int right);

void swap(int*a,int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr,int low,int high){
    //pivotu dogru yere koymak icin
}

void quickSort(int arr[],int low,int high){
    if(low < high){
        int pi = partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

void sortStackWithQuickSort(Stack* s, int n) {
    // 1. Dinamik bir dizi olustur ve Stack'ten verileri diziye aktar
    int* tempArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        tempArr[i] = pop(s); // Stack'ten elemanlari cikariyoruz
    }

    // 2. Diziyi Quick Sort ile sirala (O(n log n) verimlilik)
    quickSort(tempArr, 0, n - 1);

    // 3. Verileri Stack'e geri yukle.
    // NOT: En ustte (top) EN KUCUK olsun istiyorsak,
    // Stack'e once EN BUYUGU atmaliyiz (LIFO mantigi).
    for (int i = n - 1; i >= 0; i--) {
        push(s, tempArr[i]);
    }

    free(tempArr); // Bellegi temizleyelim
}

void initStack(Stack* s){
    s->top = NULL;
}

void push(Stack* s,int val){
    node* yeni_node = (node*)malloc(sizeof(node));
    if(yeni_node == NULL){
        printf("Bellek yetersiz\n");
    }
    yeni_node->data = val;
    yeni_node->next = s->top;//o anki en basa baglandi
    s->top = yeni_node;//simdi en bas yeni node oldu

    //uc degerin de ayni olmasini bekliyorum ?
    printf("%d eklendi.\n",s->top->data);//val
    printf("%d eklendi.\n",val);//val
    printf("%d eklendi.\n",yeni_node->data);//val

}

int pop(Stack* s){
    if(s->top == NULL){
        printf("Stack bos\n");
        return -1;
    }

    node* temp = s->top;
    int poppedVal = temp->data;

    s->top = s->top->next;
    free(temp);
    //free(s->top); dersek silmek istedigimiz elemandan bir sonraki eleman silinir.
    return poppedVal;
}



int main(){
    Stack my_stack;
    initStack(my_stack);

    push(&my_stack,74);
    push(&my_stack,87);
    push(&my_stack,78);
    push(&my_stack,45);
    push(&my_stack,14);
    push(&my_stack,22);
    push(&my_stack,62);
    int n = 7;

    printf("Siralama Oncesi Stack Hazirlandi.\n");

    sortStackWithQuickSort(&my_stack,n);

    printf("Siralama Sonrasi Stack:\n");

    while(my_stack.top != NULL){
        printf("%d ",pop(&my_stack));
    }
    printf("\n");

return 0;
}
