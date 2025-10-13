package lab7;

import java.util.Scanner;

public class OrnekStringBuilder {

	public static void main(String[] args) {

		Scanner input = new Scanner(System.in);
		System.out.println("-------StringClass-------");
		System.out.println("Bir cumle giriniz: ");
		String sentence = input.nextLine();
		String result2 = "";

		for (int i = 0; i < sentence.length(); i++) {
			char ch = sentence.charAt(i);

			if (ch != ' ') {
				result2 += ch;
				// boyle yapılırsa 19 adet nesne oluşur
				// append kullanırsan oluşmaz bellek tasarrufu saglanır
			}
			System.out.println(result2);
		}
		
		System.out.println("\n-------StringBuilder-------");

		System.out.println("Bir cumle giriniz.");
		String cumle = input.nextLine();

		StringBuilder sBuilder = new StringBuilder();

		for (int i = 0; i < cumle.length(); i++) {
			char c = cumle.charAt(i);// Cumledeki her karakter icin kontrol
			if (c != ' ') {
				sBuilder.append(c);
			}
		}
		System.out.println("Bosluksuz Metin : "+sBuilder.toString());

		input.close();
	}

}
