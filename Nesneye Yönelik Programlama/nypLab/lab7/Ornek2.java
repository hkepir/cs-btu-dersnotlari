package lab7;

import java.util.Scanner;

public class Ornek2 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		Scanner i = new Scanner(System.in);
		System.out.println("Enter a sentence: ");
		String sentence = i.nextLine();

		StringBuilder sb = new StringBuilder(sentence);

		for (int j = 0; j < sb.length(); j++) {
			char ch = sb.charAt(j);

			if (ch >= 'a' && ch <= 'z') {
				char upper = (char) (ch - 32);
				sb.setCharAt(j, upper);
			}
		}
		System.out.println("Buyuk harfe cevrilmis metin : " + sb.toString());
		i.close();
	}

}
