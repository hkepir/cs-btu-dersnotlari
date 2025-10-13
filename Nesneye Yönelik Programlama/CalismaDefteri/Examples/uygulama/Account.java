package uygulama;

public class Account {
	private int accountNumber;
	private double balance;//bakiye
	
	public Account(int accountNummber, double initialDeposit) {
		this.accountNumber = accountNummber;
		this.balance = initialDeposit;
	}
	
	public int getAccountNumber() {
		return accountNumber;
	}
	
	public double getBalance() {
		return balance;
	}
	
	public void deposit(double amount) {
		if (amount>0) {
			balance += amount;
		}
	}
	
	public boolean withdraw(double amount) {
		if (amount > 0 && balance >= amount) {
			balance -= amount;
			return true;
		}
		return false;
	}
	
	public void displayInfo() {
		System.out.println("Hesap No: "+accountNumber+" | Bakiye "+balance);
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
