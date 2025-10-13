package Thread;

public class ThreadOrnegi {
	
	public static void bekle(int ms) {
	    try {
	        Thread.sleep(ms);
	    } catch (InterruptedException e) {
	        Thread.currentThread().interrupt(); // tavsiye edilen yol
	    }
	}

	public static void main(String[] args) {
		
		threadKalitim tk = new threadKalitim("disaridan-tkalitim");
		tk.start();
		bekle(1000);//main thread 1 sn beklesin
		
		threadKalitim tk2 = new threadKalitim();
		tk2.setName("Oncelikli_thread");
		bekle(1000);//main thread 1 sn beklesin
		
		threadRunnable tr = new threadRunnable("disaridan-trunnable");
		tr.nesneThread.start();
		bekle(1000);//main thread 1 sn beklesin
		
		threadRunnable tr2 = new threadRunnable();
		bekle(1000);//main thread 1 sn beklesin
		
		System.out.println(Thread.currentThread().getName());//bu her zaman main midir?
		//evet main metot icine yazildigi icin her zaman main doner
		
		Thread.currentThread().setPriority(Thread.MAX_PRIORITY); // veya setPriority(10)
		tk2.setPriority(4);//oncelikli-thread
		tr2.nesneThread.setPriority(3);//icerden-trunnable
		tr.nesneThread.setPriority(2);
		tk.setPriority(1);
	}

}

class threadKalitim extends Thread {
	public threadKalitim() {
		super("iceriden-tkalitim");// thread e isim veilebilir.
		start();
	}

	public threadKalitim(String name) {
		super(name);
		//start() yok mainden baslatilir
	}

	@Override
	public void run() {
		System.out.println(Thread.currentThread().getName()+" Basladi.. ");
		ThreadOrnegi.bekle(5000);//1,5 sn bekle
		System.out.println(Thread.currentThread().getName()+" Tamamlandi :)  ");
	}
}

class threadRunnable implements Runnable {

	Thread nesneThread;
	String name;
	
	// thread nesnesi neden olusturuldu
	// Runnable, sadece " ne yapılacağını anlatır ama kimin yapacagini soylemez.
	// ve Runnable  arayüzünde start metodu bulunmaz.
	
	public threadRunnable(String name) {
		nesneThread = new Thread(this, name);

	}

	public threadRunnable() {
		name = "Iceriden_trunnable";
		nesneThread = new Thread(this, name);
		nesneThread.start();
	}
	@Override
	public void run() {
		System.out.println(Thread.currentThread().getName()+" Basladi.. ");
		ThreadOrnegi.bekle(10000);//3 sn bekle
		System.out.println(Thread.currentThread().getName()+" Tamamlandi :)  ");
	}
	/*
	@Override
	public void run() {
		System.out.println(Thread.currentThread().getName());
	}
	*/
}