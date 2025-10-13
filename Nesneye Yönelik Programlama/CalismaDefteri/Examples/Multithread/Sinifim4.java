package Multithread;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.locks.ReentrantLock;


public class Sinifim4 {
	private static Account account = new Account();

	public static void main(String[] args) {
		//ExecutorService executor = Executors.newCachedThreadPool();
		ExecutorService executor = Executors.newFixedThreadPool(5);

		for (int i = 0; i <= 10; i++) {
			executor.execute(new AddAPennyTask());
		}

		executor.shutdown();// yeni gorev alinmayacak

		while (!executor.isTerminated()) {

		}

		System.out.println("What is the balance " + account.getBalance());
	}

	private static class AddAPennyTask implements Runnable {
		public void run() {
			account.deposit(1);
		}
	}

	private static class Account {
		private int balance = 0;
		private static ReentrantLock kapi = new ReentrantLock();
		
		
		public int getBalance() {
			return balance;
		}
	
	
		public void deposit(int amount) {
			kapi.lock();
			int newBalance = balance + amount;

			try {
				Thread.sleep(5);
			} catch (InterruptedException e) {
			
			}finally {
				kapi.unlock(); 
			}

			balance = newBalance;

			//kapi.unlock();
		}
	}
}
//balance should be 11