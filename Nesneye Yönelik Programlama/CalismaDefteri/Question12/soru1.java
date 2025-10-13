package Question12;

import java.util.InputMismatchException;
import java.util.Scanner;

public class soru1 {

	public static void main(String[] args) {

		Scanner i = new Scanner(System.in);
		System.out.println("Sirayla iki rakam giriniz:");
		try {
			int sayi1 = i.nextInt();
			int sayi2 = i.nextInt();
			System.out.println("Evet girilen bir rakam");
			System.out.println("Toplam " + (sayi1 + sayi2));
		
		} catch (InputMismatchException e) {
			System.out.println("Hata: Lutfen sadece rakam giriniz");
		}
		i.close();
	}
}
