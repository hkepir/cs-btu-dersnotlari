package lablar;

import java.util.Scanner;

public class lab1 {

	public static void main(String[] args) {

		System.out.println("Hello world!");
		System.out.println("Merhaba Dunya :))");
		long tarih = 27_02_2025;
		System.out.print("Bugunun tarihi " + tarih);
		int sayi = 5;
		System.out.printf("\nSayinin Karesi: %f\n", Math.pow(sayi, 2));
		
		//int tipinde sonuc
		int sonucKup = (int) Math.pow(sayi, 3);
		System.out.println("Sayinin Kupu:" + sonucKup);
		
		//Kullanicidan veri alma
		Scanner scanner = new Scanner(System.in);

		System.out.println("Adinizi giriniz:");
		String isim = scanner.nextLine();
		System.out.println("Isim "+isim+" ");
		
		System.out.println("Yasinizi girin:");
		int yas = scanner.nextInt();
		System.out.println("Yas:"+yas);
		
		System.out.println("Kilonuzu girin:(kg,g)");
		double kilo = scanner.nextDouble();
		System.out.println("Kilo:"+kilo);
		
		scanner.close();		
	
	
	
	}

}
