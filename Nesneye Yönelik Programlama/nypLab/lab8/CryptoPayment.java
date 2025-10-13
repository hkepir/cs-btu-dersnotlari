package lab8;

public class CryptoPayment extends PaymentProcessor{
	
	protected void authenticate() {
		System.out.println("Cuzdan imzasi dogrulaniyor...");
	}
	
	protected void pay(double amount) {
		System.out.println(amount+ " TL tutarinda kripto para gonderiliyor." );
	}
	
	protected void logTransaction() {
		System.out.println("Islem blok zincirine kaydediliyor.");
	}
}
