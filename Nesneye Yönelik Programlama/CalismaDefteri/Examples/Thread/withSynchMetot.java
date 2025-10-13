package Thread;

public class withSynchMetot {

	public static void main(String[] args) {
		Ornek ornek= new Ornek(2, 3);
		Ornek ornek1= new Ornek(3, 3);
		Ornek ornek2= new Ornek(4, 3);
		
	}

}

class Ornek extends Thread {
	private int sayi1, sayi2;

	public Ornek(int sayi1, int sayi2) {
		super();
		start();
		this.sayi1 = sayi1;
		this.sayi2 = sayi2;

	}

	public void run() {
		senkron_metot();
	}
	
	public synchronized void  senkron_metot() {
		sayi1 = (int)Math.pow(sayi1, sayi2);
		System.out.println("Kuvvet: "+sayi1);
	}

}