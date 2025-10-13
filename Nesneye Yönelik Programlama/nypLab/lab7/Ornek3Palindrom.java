package lab7;
//1- Filtre(noktalama isaretleri kaldırılır,buyuk harf kücük harf)

//2- ters cevirme reverse

import java.util.Scanner;

public class Ornek3Palindrom {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("Enter a string: ");
		String string = input.nextLine();

		System.out.println(isPalindrome(string));
		input.close();
	}

	// 1
	public static String filter(String s) {
		StringBuilder stringBuilder = new StringBuilder();

		for (int i = 0; i < s.length(); i++) {
			char ch = s.charAt(i);

			if (Character.isLetterOrDigit(ch)) {
				stringBuilder.append(Character.toLowerCase(ch));// kucuk harfe cevirilip eklenmis olur
			}
		}
		return stringBuilder.toString();
	}

	public static String reverse(String s) {
		StringBuilder stringBuilder = new StringBuilder(s);// s kullanmazsa bos doner !! nesneye bir sey verilmezse
															// nesne bos doner
		stringBuilder.reverse();
		return stringBuilder.toString();
	}

	public static boolean isPalindrome(String s) {
		String s1 = filter(s);

		String s2 = reverse(s1);

		return s2.equals(s1);

	}

}
