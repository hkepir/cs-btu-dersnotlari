#include <stdio.h>

// Iki sayiyi degistirme fonksiyonu
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// HEAPIFY: Alt aðacý Max-Heap haline getiren fonksiyon
// n: Dizinin boyutu, i: Düzeltilecek kök düðümün indeksi
void heapify(int arr[], int n, int i) {
    int largest = i;       // En büyüðü kök olarak varsay
    int left = 2 * i + 1;  // Sol çocuk indeksi (Formül)
    int right = 2 * i + 2; // Sað çocuk indeksi (Formül)

    // Sol çocuk var mý ve kökten büyük mü?
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Sað çocuk var mý ve þu anki en büyükten daha mý büyük?
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Eðer en büyük eleman kök deðilse (çocuklardan biriyse)
    if (largest != i) {
        swap(&arr[i], &arr[largest]); // Yer deðiþtir

        // Yer deðiþtirdiðimiz alt dalda düzen bozulmuþ olabilir
        // O yüzden orayý da düzelt (Recursive)
        heapify(arr, n, largest);
    }
}

// HEAP SORT ANA FONKSIYON
void heapSort(int arr[], int n) {
    // 1. Diziyi önce Max-Heap haline getir
    // (n/2 - 1) son ebeveyn düðümdür. Sondan basa doðru düzeltiyoruz.
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 2. Elemanlarý teker teker çek
    for (int i = n - 1; i > 0; i--) {
        // Geçerli kökü (en büyüðü) son elemanla deðiþtir
        swap(&arr[0], &arr[i]);

        // Azaltýlmýþ yýðýnda (i. eleman artýk sýralý olduðu için hariç)
        // kökü tekrar düzelt
        heapify(arr, i, 0);
    }
}

// Test Fonksiyonu
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    printf("Siralanmis Dizi: \n");
    printArray(arr, n);
}
