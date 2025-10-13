package Thread;

import java.util.concurrent.locks.ReentrantLock;

public class ReentrantLockOrnek extends Thread {
	
	private int sayi1, sayi2;
    private static final ReentrantLock lock = new ReentrantLock(); // tüm thread'ler aynı kilidi paylaşır

    public ReentrantLockOrnek(int sayi1, int sayi2, String isim) {
        super(isim);
        this.sayi1 = sayi1;
        this.sayi2 = sayi2;
        start();
    }

    public void toplama() {
        sayi1 = sayi1 + sayi2;
        System.out.println(getName() + " Toplam: " + sayi1);
    }

    public void run() {
        toplama();

        // Kilit alınıyor
        lock.lock();
        try {
            sayi1 = (int) Math.pow(sayi1, sayi2);
            System.out.println(getName() + " Kuvvet: " + sayi1);
        } finally {
            lock.unlock(); // kilit serbest bırakılıyor
        }
    }
}

/*- ReentrantLock ile kritik bölgeyi manuel olarak kilitliyoruz.
- lock.lock() → kilidi alır
- finally bloğunda lock.unlock() → her durumda kilit bırakılır (exception olsa bile!)
- Burada lock static tanımlandığı için tüm Ornekk objeleri aynı kilidi paylaşır. Böylece karşılıklı erişim engellenir (mutual exclusion).
*/