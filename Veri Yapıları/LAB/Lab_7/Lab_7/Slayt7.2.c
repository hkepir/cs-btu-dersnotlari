#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Decimal to Binary
typedef struct{
    void** Ary;
    int count;
    int max;
    int top;
} stack;

stack* createStack(int maxSize){
    stack* s = (stack*)malloc(sizeof(stack));
    if(!s) return NULL;
    s->count = 0;
    s->top = -1;
    s->max = maxSize;
    s->Ary = (void**)calloc(s->max, sizeof(void*));
    return s;
}

bool pushStack(stack* s, void* data){
    if(s->count == s->max) return false;
    s->count++;
    s->top++;
    s->Ary[s->top] = data;
    return true;
}

void* popStack(stack* s){
    if(s->count == 0) return NULL;
    void* data = s->Ary[s->top];
    s->count--;
    s->top--;
    return data;
}

// --- Yeni Main: Çevirme Ýþlemi ---
int main() {
    int sayi;
    stack* s = createStack(32); // 32 bitlik bir sayý için yeterli alan

    printf("Binary'e cevirmek istediginiz desimal sayiyi girin: ");
    scanf("%d", &sayi);

    if (sayi == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // 1. ADIM: Bölme iþlemi ve kalanlarý Stack'e atma
    int gecici = sayi;
    while (gecici > 0) {
        int kalan = gecici % 2;
        pushStack(s, (void*)(long)kalan); // Kalaný (0 veya 1) stack'e itiyoruz
        gecici = gecici / 2;
    }

    // 2. ADIM: Stack'ten çekerek (Pop) ekrana yazdýrma
    printf("%d sayisinin binary karsiligi: ", sayi);
    while (s->count > 0) {
        int bit = (int)(long)popStack(s);
        printf("%d", bit);
    }
    printf("\n");

    // Belleði temizle
    free(s->Ary);
    free(s);

    return 0;
}
