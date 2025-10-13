package Thread;

public class RunnableZinciri {

	public static void main(String[] args) {
	
	
		//Thread t1 = new Thread(new IsParcacigi("thread :) "));
		Runnable gorev = new IsParcacigi("thread :) ");
		Thread t1 = new Thread(gorev);

		
		//Thread nesnesi olusturmadan 
		//Thread t2 = new Thread(new IsParcacigi("thread2 :) "));
		new Thread(new IsParcacigi("thread2 :) ")).start(); // ✅ sadece başlatmak için

		Thread t3 = new Thread(new IsParcacigi("thread3 :) "));
		
		try {
			t1.start();
			t1.join();//t1 bitmeden devam etme
			
			new Thread(new IsParcacigi("thread2 :) ")).join(); // ✅ sadece başlatmak için
			//t2.start();
			//t2.join();//t2 bitmeden devam etme
			
			t3.start();
			t3.join();//t3 bitmeden bitti yazma
			
			System.out.println("Tum isler tamamlandi");
		} catch (InterruptedException e) {
			System.out.println("Ana thread kesildi.");
		}
	}

}

class IsParcacigi implements Runnable {

	private String name;

	public IsParcacigi(String name) {
		this.name = name;
	}

	public void run() {
		for (int i = 0; i < 3; i++) {
			System.out.println(name + " calisiyor: " + i);

			try {
				Thread.sleep(500);
			} catch (InterruptedException e) {
				System.out.println(name + "kesildi!");
			}

		}
	}
}