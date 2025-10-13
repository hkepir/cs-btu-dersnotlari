package lab7;

import java.util.Scanner;

public class MainApp {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		System.out.println("Adinizi giriniz:");
		String adString = scanner.nextLine();

		System.out.println("Soy adinizi giriniz:");
		String soyad = scanner.nextLine();

		System.out.println("Yasinizi giriniz:");
		int yas = scanner.nextInt();

		Kisi kisi = new Kisi(adString, soyad, yas);
		String sonucString = KisiFormatter.format(kisi);

		System.out.println(sonucString);

		scanner.close();
	}

}
