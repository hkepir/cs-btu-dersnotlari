package lablar;

public class PrintTask extends Thread {
	
	private String message;
	
	public PrintTask(String message) {
		this.message = message;
	}
	
	@Override
    public void run() {
		try {
			for(int i = 0; i<3;i++ ) {
				System.out.println(message);
				Thread.sleep(500);//500 ms bekleme
			}
			System.out.println("PrintTask thread'i tamamlamdi.");
		} catch (InterruptedException e) {
			e.printStackTrace();
		}
    }
}