package Thread;

public class threadDurBekle {

	public static void main(String[] args) throws Exception {
		ThreadOrnek tO1 = new ThreadOrnek("t1", 1);
			tO1.sleep(5000);
		
		ThreadOrnek tO2 = new ThreadOrnek("t2", 2);
			/*tO2.stop();
			System.out.println(tO2.isAlive());//*/
		
		ThreadOrnek tO3 = new ThreadOrnek("t3", 3);
			tO3.join();
		
		ThreadOrnek tO4 = new ThreadOrnek("t4", 4);
			tO4.yield();
			
		Thread yeni_Thread = new ThreadOrnek("yeni_thread",1);
		Thread yeni_Thread2 = new Thread("yeni_thread");
	}

}

class ThreadOrnek extends Thread{
	private String etiket;
	private int k;
	
	public ThreadOrnek(String etiket, int k) {
		super();
		start();
		this.etiket=etiket;
		this.k=k;
	}
	
	public void run() {

		for (int i = 0; i < k; i++) {
			System.out.println(etiket+" ");
		}
		System.out.println(Thread.currentThread().getName());

	}
}