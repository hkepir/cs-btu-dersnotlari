package Question9;

import java.math.BigInteger;

public class BigIntegerOrnek {

	public static void main(String[] args) {
		BigInteger bi = new BigInteger("45689865748596256566");
		String cumle = "Bursa Teknik Universitesi";
		String[] kelimeler = cumle.split(" ");

		for (String h : kelimeler) {
			System.out.println(h);
		}

		String yeni = cumle.replaceAll("e", "x");
		System.out.println(yeni);

		// BigInteger Sinifi ile Dort Islem
		BigInteger x = new BigInteger("3");
		BigInteger y = new BigInteger("5");
		BigInteger z = x.add(y);
		System.out.println("x is " + x);
		System.out.println("y is " + y);
		System.out.println("z is " + z);

		x.subtract(z);// Cikarma
		x.multiply(z);// Carpma
		x.divide(z);// Bolme

	}

}
