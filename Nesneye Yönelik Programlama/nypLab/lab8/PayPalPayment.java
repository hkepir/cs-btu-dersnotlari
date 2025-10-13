package lab8;

public class PayPalPayment extends PaymentProcessor {

	@Override
	protected void authenticate() {
		System.out.println("PayPal'a yonlendiriliyor ve giris yapiliyor...");
	}

	@Override
	protected void pay(double amount) {
		System.out.println(amount+ " TL PayPal uzerinden transfer ediliyor" );
	}

}
