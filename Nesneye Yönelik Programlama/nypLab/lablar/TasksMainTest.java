package lablar;

import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

public class TasksMainTest {

	public static void main(String[] args) {
		//public static void main(String[] args) throws Exception{
		
		//PrintTask baslat
		PrintTask printTask = new PrintTask("Merhaba Thread!");
		printTask.start();
		
		//LogTask başlat
		Thread t1 = new Thread(new LogTask());
		t1.start();
		
		//SumTask baslat
		ExecutorService executor = Executors.newSingleThreadExecutor();
		Future<Integer> future = executor.submit(new SumTask(5,7));
		
		try {
		    int toplamSonucu = future.get();
		    System.out.println("Toplama Sonucu: " + toplamSonucu);
		} catch (InterruptedException | ExecutionException e) {
		    e.printStackTrace();
		}

		
		//int toplamSonucu = future.get();//InterruptedException , ExecutionException fırlatabilir
		//System.out.println("Toplama Sonucu: "+toplamSonucu);
		
		
		executor.shutdown();
		
		
		//Alternatif yazim
		/*
		LogTask logTask = new LogTask();
		Thread t1 = new Thread(logTask);//LogTask ı bir thread icine koyarak calistirmaya calistim
		t1.start();
		*/
		
		//SumTask sTask = new SumTask();
		
		System.out.println("Ana thread tamamlandi");
		
		
	}

}
