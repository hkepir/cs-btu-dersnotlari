package Multithread;

class Gorev2 implements Runnable {
	public void run() {
		Thread t1 = new Thread(new Gorev3());
		t1.start();// mainde baslatilan gorev3

		for (char i = 'a'; i <= 'z'; i++) {//gorev2
			System.out.println(" " + i);
			if (i == 'd') {
				try {
					t1.join();
					// t1 thread'inin bitmesini bekledik
					// t1 thread'inin run metodunun bitmesini bekledik
				} catch (InterruptedException e) {
					e.getStackTrace();
				}

				try {
					Thread.sleep(1000);
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}

		}

	}
}

class Gorev3 implements Runnable {
	public void run() {
		for (int i = 1; i <= 10; i++) {
			System.out.println(" " + i);
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}

public class Sinifim2 {

	public static void main(String[] args) {
		new Thread(new Gorev2()).start();
		//new Thread(new Gorev3()).start();
	}

}
