#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Customer {
    int id;
    int arrivalTime;
    int serviceTime;
    struct Customer* next;
} Customer;

typedef struct {
    Customer* front;
    Customer* rear;
    int count;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    q->count = 0;
    return q;
}

void enqueue(Queue* q, int id, int arrivalTime, int serviceTime) {
    Customer* newC = (Customer*)malloc(sizeof(Customer));
    newC->id = id;
    newC->arrivalTime = arrivalTime;
    newC->serviceTime = serviceTime;
    newC->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newC;
    } else {
        q->rear->next = newC;
        q->rear = newC;
    }
    q->count++;
}

Customer* dequeue(Queue* q) {
    if (q->front == NULL) return NULL;
    Customer* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) q->rear = NULL;
    q->count--;
    return temp;
}

int main() {
    srand(time(NULL));
    Queue* q = createQueue();
    int totalMinutes = 30; // kýsa simülasyon: 30 dakika
    int serverBusy = 0;
    int currentService = 0;
    Customer* currentCustomer = NULL;
    int customerId = 1;

    // Ýstatistikler
    int totalWaitTime = 0;
    int servedCustomers = 0;

    for (int minute=1; minute<=totalMinutes; minute++) {
        // Ortalama her 4 dakikada bir müþteri gelir
        if (rand()%4 == 0) {
            int serviceTime = (rand()%10)+1; // 1–10 dakika
            enqueue(q, customerId, minute, serviceTime);
            printf("[%d.dk] Yeni müþteri %d geldi (servis süresi=%d). Kuyruk uzunluðu=%d\n",
                   minute, customerId, serviceTime, q->count);
            customerId++;
        }

        // Sunucu boþsa sýradaki müþteriyi al
        if (!serverBusy && q->front != NULL) {
            currentCustomer = dequeue(q);
            currentService = currentCustomer->serviceTime;
            serverBusy = 1;
            int waitTime = minute - currentCustomer->arrivalTime;
            totalWaitTime += waitTime;
            servedCustomers++;
            printf("[%d.dk] Müþteri %d iþlemine baþladý (bekleme=%d dk, servis=%d dk). Kuyruk uzunluðu=%d\n",
                   minute, currentCustomer->id, waitTime, currentService, q->count);
        }

        // Eðer sunucu meþgulse servis süresini azalt
        if (serverBusy) {
            currentService--;
            if (currentService == 0) {
                printf("[%d.dk] Müþteri %d iþlemi tamamlandý\n", minute, currentCustomer->id);
                free(currentCustomer);
                serverBusy = 0;
            }
        }
    }

    // Simülasyon sonunda istatistikler
    printf("\n--- Simülasyon Özeti ---\n");
    printf("Toplam hizmet verilen müþteri: %d\n", servedCustomers);
    if (servedCustomers > 0)
        printf("Ortalama bekleme süresi: %.2f dk\n", (double)totalWaitTime/servedCustomers);
    printf("Simülasyon sonunda kuyrukta kalan müþteri sayýsý: %d\n", q->count);

    return 0;
}
