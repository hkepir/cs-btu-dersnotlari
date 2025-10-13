package lab6;

public class Account {
	private int accountNumber;
	private double balance;

	public Account(int accountNumber, double initialDeposit) {
		this.accountNumber = accountNumber;
		this.balance = initialDeposit;
	}

	public int getAccountNumber() {
		return accountNumber;
	}

	public double getBalance() {
		return balance;
	}

	public void deposit(double amount) {
		if (amount > 0) {
			balance += amount;
		}
	}

	public boolean withdraw(double amount) {// void kedi içinden de erişebilir
		if (amount > 0 && balance >= amount) {
			balance -= amount;
			return true;
		}
		return false;
	}

	public void displayInfo() {
		System.out.println("Hesap No: " + accountNumber + " | Bakiye " + balance);
	}

}
