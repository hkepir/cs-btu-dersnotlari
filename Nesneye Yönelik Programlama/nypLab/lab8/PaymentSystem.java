package lab8;

import java.util.Random;

public class PaymentSystem {

	public static void main(String[] args) {
		
		//PaymentProcessor[] methods = {new CreditCardPayment(),new PayPalPayment(),new CryptoPayment()};
		PaymentProcessor[] metotlar = new PaymentProcessor[3]; 
		metotlar[0]= new PayPalPayment();
		metotlar[1]= new CreditCardPayment();
		metotlar[2]= new CryptoPayment();
		
		double[] tutarlar = {120.0,75.5,300.0};
		
		Random random = new Random();
		
		for (int i = 0; i < tutarlar.length; i++) {
			metotlar[random.nextInt(3)].processPayment(tutarlar[i]);
		}
	}

}
