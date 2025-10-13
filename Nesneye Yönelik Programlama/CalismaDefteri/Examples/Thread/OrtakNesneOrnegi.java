package Thread;

public class OrtakNesneOrnegi {

    public static void main(String[] args) {
        Ornekkk ortakNesne = new Ornekkk(1, 1);

        Thread t1 = new Thread(() -> ortakNesne.toplamaVeKuvvet(), "Thread-1");
        Thread t2 = new Thread(() -> ortakNesne.toplamaVeKuvvet(), "Thread-2");
        Thread t3 = new Thread(() -> ortakNesne.toplamaVeKuvvet(), "Thread-3");

        t1.start();
        t2.start();
        t3.start();
    }
}

class Ornekkk {
    private int sayi1, sayi2;

    public Ornekkk(int sayi1, int sayi2) {
        this.sayi1 = sayi1;
        this.sayi2 = sayi2;
    }

    public void toplamaVeKuvvet() {
        synchronized (this) { // Ortak nesne senkronize ediliyor
            System.out.println(Thread.currentThread().getName() + " başlıyor");
            sayi1 += sayi2;
            System.out.println(Thread.currentThread().getName() + " Toplam: " + sayi1);

            sayi1 = (int) Math.pow(sayi1, sayi2);
            System.out.println(Thread.currentThread().getName() + " Kuvvet: " + sayi1);
            System.out.println(Thread.currentThread().getName() + " bitiyor");
        }
    }
}