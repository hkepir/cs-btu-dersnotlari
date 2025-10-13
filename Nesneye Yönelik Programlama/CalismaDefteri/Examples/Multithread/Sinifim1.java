package Multithread;

class Gorev1 implements Runnable {
	int id;
	Gorev1(int id) {
		this.id=id;
	}
	
	@Override
	public void run() {
		int i=1;
		while (true) {
			System.out.println("ID: "+id+", Sayac: "+(i++));
			
			try {
				Thread.sleep(1000);
			} catch (Exception e) {

			}
			
		}
	}
}


public class Sinifim1 {
	public static void main(String[] args) {
		Gorev1[] gorevler = new Gorev1[3];
		Thread[] threadler = new Thread[gorevler.length];
		
		for (int i = 0; i< gorevler.length; i++) {
			gorevler[i]=new Gorev1(i);
			threadler[i]=new Thread(gorevler[i]);
			threadler[i].start();
		}
		
		threadler[1].setPriority(10);
		threadler[0].setPriority(1);
		threadler[2].setPriority(1);
	}
}

