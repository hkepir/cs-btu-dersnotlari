package mycodes;

import java.util.Random;
import java.util.Scanner;

public class diziparametre {

	public static void main(String[] args) {

		Scanner i = new Scanner(System.in);

		String[] isimler = new String[3];

		for (int sayi = 0; sayi < isimler.length; sayi++) {
			System.out.println("Dizinin " + (sayi + 1) + ". elemanini giriniz :");
			isimler[sayi] = i.nextLine();
		}
		yazdir(isimler);

		int[] sayilar = new int[5];

		Random random = new Random();
		for (int j = 0; j < sayilar.length; j++) {
			int max = 20;
			int min = 10;
			sayilar[j] = random.nextInt((max - min) + 1);//10-20
			// sayilar[j] = random.nextInt(30); 0-29 araligi
		}
		yazdirrastgele(sayilar);
		System.out.println("Rastgele  sayilar toplaminin iki kati = " + topla(sayilar));
		i.close();
	}

	static void yazdir(String[] dizi) {
		for (String dizii : dizi) {
			System.out.println(dizii);
		}
	}

	static void yazdirrastgele(int Number[]) {
		System.out.println("Rastgele atanan sayilar");
		for (int i : Number) {
			System.out.println(i);
		}
	}

	static int topla(int Number[]) {
		System.out.println("Sayilar toplanıyor...");
		int toplam = 0;
		for (int i = 0; i < Number.length; i++) {
			toplam += Number[i];
		}
		for (int i : Number) {
			toplam += i;
		}
		return toplam;
	}
}
