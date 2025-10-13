package Question10;

public class Queue {
    private int[] elements;
    private int size;
    private final int DEFAULT_CAPACITY = 8;

    public Queue() {
        elements = new int[DEFAULT_CAPACITY]; // Varsayılan kapasite 8
        size = 0;
    }

    public void enqueue(int v) {
        if (size >= elements.length) {
            // Kapasite doldu, diziyi iki katına çıkar
            int[] newElements = new int[elements.length * 2];
            System.arraycopy(elements, 0, newElements, 0, size);
            elements = newElements;
        }
        elements[size++] = v; // Yeni öğeyi ekle
    }

    public int dequeue() {
        if (size == 0) {
            throw new IllegalStateException("Queue is empty!");
        }
        int removedValue = elements[0];

        // Öğeleri sola kaydır
        for (int i = 1; i < size; i++) {
            elements[i - 1] = elements[i];
        }
        size--; // Eleman çıkarıldı

        return removedValue;
    }

    public boolean empty() {
        return size == 0;
    }

    public int getSize() {
        return size;
    }
}
/*

--------------------------------
|          Queue               |
--------------------------------
| - int[] elements             |
| - int size                   |
--------------------------------
| + Queue()                    |
| + enqueue(int v)             |
| + dequeue() : int            |
| + empty() : boolean          |
| + getSize() : int            |
--------------------------------

*/