package ders;

import java.util.Scanner;

public class deneme5 {

	public static void main(String[] args) {

		Yardimci mainYardimci = new Yardimci();

		// Main fonksiyonla aynı sınıfta olmadıgı için nesne oluşturmak gerekir --->
		// default
		mainYardimci.cıkarma(9, 1);// default non-static
		mainYardimci.substraction(0, 0);// default non-static
		mainYardimci.write2(null);// public non-static

		Yardimci.add(57, 3);// static default
		Yardimci.write("Love is"); // default static
		Yardimci.write1("Programming");// public static
		
		// divide motota erişilemez private---> sadece bulundugu classtan erişim
		// saglanabilir
	}
}

class Yardimci {// default ----> aynı sınıf ve aynı paket

	static void write(String s) {
		System.out.println("static void " + s);
	}

	public void write2(String s) {
		System.out.println("public void " + s);
		divide(1, 1);
	}

	public static void write1(String s) {
		System.out.println("public static void " + s);

		Yardimci yardimci = new Yardimci();
		yardimci.write2("non-static write2 cagrildi :)");
	}

	private int divide(int x, int y) {// private ---> yalnızca tanımlı oldugu sınıf
		
		Scanner iScanner = new Scanner(System.in);
		write("Birinci sayiyi giriniz: ");
		x = iScanner.nextInt();
		write("Ikinci sayiyi giriniz: ");
		y = iScanner.nextInt();

		return (x > y) ? x / y : (y > x ? y / x : 1);
		
	}

	static void add(int sayi1, int sayi2) {
		write("Toplam : " + (sayi1 + sayi2));
		// divide(sayi1,sayi2); erişilemez cunku static degil
		// ya static yap ya da nesne olustur
	}

	void substraction(int a, int b) {
		System.out.println("Cikarma Islemi :" + (a - b));
		divide(a, b);
	}

	int cıkarma(int a, int b) {
		if (divide(a, b) == 1) {
			return a-b;
		} else {
			return a - b;
		}
		
	}
	
	
	// static olmayan bir metota yine static olmayan baska bir metotdan (aynı class
	// da) erisim belirteci onemsenmeksizin erişilebilir.

	// static ten non static erişmek için nesne olustur ya da static yap
	
}