package lablar;

public class LogTask implements Runnable {
 
	@Override
    public void run()
    {
		System.out.println("Loglama islemi basladi");
		System.out.println("Thread adi: "+Thread.currentThread().getName());
		System.out.println("Log tamamlandi");
    }
 
	
}
