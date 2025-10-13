package lablar;

import java.util.Scanner;

public class lab2 {

//---------------------------------DERSTE ANLATILANLAR----------OZET---------------------

	public static void main(String[] args) {

		double deger1 = 5.0;// degisken
		// Double. sınıf belirtir
		// String sınıf belirtir
		// Bir string olusturuldu
		System.out.println("Deger:" + deger1);
		String str1 = "Hello";
		String str2 = "World";
		System.out.println("Birlesik kelime: " + str1 + str2);
		System.out.println(str1.length());
		System.out.println(str2.toUpperCase());// WORLD

		Scanner scanner = new Scanner(System.in);

		// Kullanicidan tam sayi alma

		/*
		 * System.out.println("Bir sayi girin"); int sayi = scanner.nextInt();
		 * System.out.println("Girilen sayi: "+sayi);
		 */

		// Dairenin Alanini Hesaplama
		System.out.println("Dairenin Yaricapini Girin");
		double yaricap = scanner.nextDouble();
		double PI = Math.PI;
		double alan = PI * Math.pow(yaricap, 2);

		System.out.println("Dairenin Alani " + alan);

		// Kullanicidan isim alma
		/*
		 * Scanner scanner = new Scanner(System.in); // Scanner nesnesini oluşturuyoruz
		 * System.out.println("Lütfen isminizi girin:");
		 * 
		 * String isim = scanner.nextLine(); // Kullanıcıdan isim alıyoruz
		 * System.out.println("Merhaba, " + isim + "!"); // Kullanıcıya ismi ile merhaba
		 * diyoruz
		 */

		// Kullanıcıdan char veri tipi alma
		/*
		 * Scanner inputScanner = new Scanner(System.in);
		 * 
		 * System.out.println("Vardiya tipini girin (A veya B)"); char vardiyaTip =
		 * inputScanner.next().charAt(0);
		 */
		scanner.close();

	}

}
