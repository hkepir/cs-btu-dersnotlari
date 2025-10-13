package Multithread;

class Task implements Runnable {

	int id;

	Task(int id) {
		this.id = id;
	}

	@Override
	public void run() {
		char harf;
		for (;;) {//while(true) d
			harf = (char)('A'+ (int)(Math.random()*26));
			System.out.println("Task"+id+": "+harf);
			
			try {
				Thread.sleep(1000);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
	}
}

public class FinalSorusu24 {

	public static void main(String[] args) {

		/*
		 //yorum satırları 1
		Task[] tasks = new Task[5];
		Thread[] threads = new Thread[tasks.length];

		for (int i = 0; i < tasks.length; i++) {
			tasks[i] = new Task(i);
			threads[i] = new Thread(tasks[i]);
			threads[i].start();
		}
		*/
		
		
		 //Yorum satirlari 2
		for (int j = 0; j < 5; j++) {
			new Thread( new Task(j)).start();
		}
		
		
	}

}
