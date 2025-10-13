package Thread;

public class withSycn {
	public static void main(String[] args) {
		Ornekk ornek = new Ornekk(2, 3, "threadim-0");
		Ornekk ornek1 = new Ornekk(3, 3, "threadim-1");
		Ornekk ornek2 = new Ornekk(4, 3, "threadim-2");

	}
}

class Ornekk extends Thread {
	private int sayi1, sayi2;

	public Ornekk(int sayi1, int sayi2, String isim) {
		super(isim);
		start();
		this.sayi1 = sayi1;
		this.sayi2 = sayi2;

	}

	public void toplama() {
		sayi1 = sayi1 + sayi2;
		System.out.println(Thread.currentThread().getName() + " Toplam: " + sayi1);
	}

	public void run() {
		toplama();
		// synchronized block
		synchronized (this) {
			sayi1 = (int) Math.pow(sayi1, sayi2);
			System.out.println(Thread.currentThread().getName() + " Kuvvet: " + sayi1);
		}
	}

}
/*
 // synchronized method 
 class Ornekk extends Thread {
	private int sayi1, sayi2;

	public Ornekk(int sayi1, int sayi2, String isim) {
		super(isim);
		this.sayi1 = sayi1;
		this.sayi2 = sayi2;
		start(); // start()'ı en sona almak daha güvenli olur genelde
	}

	public void toplama() {
		sayi1 = sayi1 + sayi2;
		System.out.println(Thread.currentThread().getName() + " Toplam: " + sayi1);
	}

	// synchronized metot
	public synchronized void kuvvetAl() {
		sayi1 = (int) Math.pow(sayi1, sayi2);
		System.out.println(Thread.currentThread().getName() + " Kuvvet: " + sayi1);
	}

	public void run() {
		toplama();
		kuvvetAl(); // artık synchronized metodumuz çağrılıyor
	}
}
 */
 