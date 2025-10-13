package lab6;


public class Customer {
	private String name;
	private Account[] accouts;
	private int accountCount;
	
	public Customer(String name) {
		this.name = name;
		this.accouts = new Account[3];//max 3 hesap
		this.accountCount = 0;
	}
	
	public boolean addAccount(Account account) {
		if (accountCount < 3) {
			accouts[accountCount++]=account;
			return true;
		}
		return false;
	}
	
	public Account getAccountByNumber(int accountNumber) {//Dondurulen sey nesne integer olmayacak nesne ile dondurulecek
		for (int i = 0; i < accountCount; i++) {
			if ( accouts[i].getAccountNumber() == accountNumber) {
				return accouts[i];
			}
		}
		return null;
	}
	
	public void displayAccounts() {
		System.out.println("Musteri: "+name);
		for (int i = 0; i < accountCount; i++) {
			accouts[i].displayInfo();
		}
	}
	
	

	
	
}
