package Question10;

public class QueueTest {
    public static void main(String[] args) {
        Queue queue = new Queue();

        // 1'den 20'ye kadar olan sayıları kuyruğa ekleyelim
        for (int i = 1; i <= 20; i++) {
            queue.enqueue(i);
        }

        // Kuyruktaki tüm sayıları çıkar ve ekrana yazdır
        System.out.println("Kuyruktan çıkarılan öğeler:");
        while (!queue.empty()) {
            System.out.print(queue.dequeue() + " ");
        }
    }
}

