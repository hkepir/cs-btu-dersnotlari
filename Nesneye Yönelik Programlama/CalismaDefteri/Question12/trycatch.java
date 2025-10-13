package Question12;

import java.util.InputMismatchException;
import java.util.Random;
import java.util.Scanner;

public class trycatch {

	public static void main(String[] args) {

		Scanner iScanner = new Scanner(System.in);
		System.out.println("Enter two integers: ");

		try {
			int num1 = iScanner.nextInt();
			int num2 = iScanner.nextInt();// Double girilecek

			System.out.println(num1 + " / " + num2 + " = " + (num1 / num2));
		} catch (ArithmeticException e) {// ilk catch blogu hatayı yakaladıktan sonra diger bloglar atlanir
			System.out.println("ArithmeticException");
		} catch (InputMismatchException e) {
			System.out.println("InputMismatchException");
		} catch (NullPointerException | NumberFormatException e) {
			System.out.println("Hata mesaji");
		} finally {
			int[] dizim = { 1, 2, 3, 4, 5 };
			for (int i : dizim) {
				System.out.println(i);
			}
		}
		iScanner.nextLine();
		try {
			System.out.println("Bir sayi girin: ");
			int sayi = Integer.parseInt(iScanner.nextLine());
			int sonuc = 100 / sayi;
			System.out.println(sonuc);
		} catch (NumberFormatException e) {
			System.out.println("Gecersiz giris! Lutfen bir sayi girin");
		} catch (ArithmeticException e) {
			System.out.println("Matematik hatasi! Sifira bolme islemi yapilamaz.");
		} finally {
			System.out.println("Islem Tamalandi.");
		}

		// Diziye Erisim

		System.out.println("Olusturulacak dizi boyutunu giriniz");
		int boyut = iScanner.nextInt();
		int[] diziO = new int[boyut];
		for (int i = 0; i < boyut; i++) {
			System.out.println("Dizinin " + (i + 1) + ". elemanini giriniz");
			diziO[i] = iScanner.nextInt();
		}

		// Rastgele index secip yazdirma
		Random r = new Random();
		int rast = r.nextInt(10);
		try {
			System.out.println(diziO[rast]);

		} catch (ArrayIndexOutOfBoundsException e) {
			System.out.println("Dizinin boyutu asildi." + "\nBoyut : " + boyut + "\nRastgele : " + rast);
		} finally {
			System.out.println("Islem basariyla tamamlandi");
			for (int i = 0; i < diziO.length; i++) {
				System.out.println("*");
			}
		}
		// if else block ile
		/*
		 * Random r = new Random(); int rastgele_gelen = r.nextInt(10); if
		 * (rastgele_gelen > boyut) {
		 * System.out.println("Boyut :"+boyut+"Rastgele gelen sayi :"+rastgele_gelen);
		 * System.out.println("Dizi boyutu asildi"); }else {
		 * System.out.println(diziO[rastgele_gelen]);
		 * System.out.println("rastgele gelen sayi : "+rastgele_gelen); }
		 */

		iScanner.close();
	}
}
