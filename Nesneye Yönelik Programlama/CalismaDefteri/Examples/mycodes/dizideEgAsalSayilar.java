package mycodes;

import java.util.Scanner;

public class dizideEgAsalSayilar extends loopsArrays {

	public static void main(String[] args) {
		System.out.println("--> ASAL SAYI BULMA UYGULAMASINA HOSGELDİNİZ <--");

		int asalToplam = 0;
		int asalOlmayanToplam = 0;

		String asalSayilar = "";
		String asalOlmayanSayilar = "";

		boolean asalMi = false;

		Scanner input = new Scanner(System.in);

		System.out.println("Dizinin eleman sayisini giriniz :");
		int diziUzunluk = input.nextInt();
		input.nextLine();

		int[] numbers = new int[diziUzunluk];

		for (int i = 0; i < numbers.length; i++) {
			System.out.println("Dizinin " + (i + 1) + ".elemani :");
			numbers[i] = input.nextInt();
			input.nextLine();
		}

		for (int number : numbers) {
			for (int j = 2; j < number; j++) {
				if (number % j == 0) {
					asalOlmayanToplam += 1;
					asalOlmayanSayilar += String.valueOf(number) + " ";
					break;// sadece içteki döngüyü kırar
				} else {
					asalMi = true;
				}
			}
			if (asalMi) {
				asalToplam += 1;
				asalSayilar += String.valueOf(number) + " ";
				asalMi = false;
			}
		}
		
		System.out.println("Asal Bilgileri");
		System.out.println("Asal Sayi Adedi = "+asalToplam+" Asal Sayilar = "+ asalSayilar);
		System.out.println("*******************************");
		
		System.out.println("Asal Olmayan Bilgileri");
		System.out.println(
				"Asal Olmayan ayi Adedi = "+asalOlmayanToplam+ " Asal Olmayan Sayilar = "+asalOlmayanSayilar);
	input.close();
	}
}
