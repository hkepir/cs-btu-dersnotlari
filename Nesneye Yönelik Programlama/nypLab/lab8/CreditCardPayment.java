package lab8;

public class CreditCardPayment extends PaymentProcessor{

	@Override
	protected void authenticate() {
		System.out.println("3D secure ile kredi karti dogrulaniyor.");
	}

	@Override
	protected void pay(double amount) {
		System.out.println(amount+" TL kredi kartindan tahsil ediliyor.");
	}

	protected void logTransaction() {
		System.out.println("Kredi karti islemi guvenli kayit defterine kaydediliyor.");
	}
}
