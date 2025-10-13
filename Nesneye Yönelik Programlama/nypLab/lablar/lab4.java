package lablar;   //Soru 3

import java.util.Scanner;

public class lab4 {

	public static void main(String[] args) {

		// Soru 1 Kredi Karti Dogrulayici

		Scanner input = new Scanner(System.in);
		System.out.print("Bir kredi kartı numarası girin: ");
		long number = input.nextLong();

		if (isValid(number)) {
			System.out.println(number + " geçerli bir kart numarasıdır.");
		} else {
			System.out.println(number + " geçersiz bir kart numarasıdır.");
		}

		input.close();
	}

	/** Kart numarası geçerli mi? */
	public static boolean isValid(long number) {
		return (String.valueOf(number).length() >= 13 && String.valueOf(number).length() <= 16)
				&& (startsWith(number, 4) || startsWith(number, 5) || startsWith(number, 37) || startsWith(number, 6))
				&& ((sumOfDoubleEvenPlace(number) + sumOfOddPlace(number)) % 10 == 0);
	}

	/** Çift basamaklardaki rakamların toplamını al */
	public static int sumOfDoubleEvenPlace(long number) {
		int sum = 0;
		String num = Long.toString(number);
		for (int i = num.length() - 2; i >= 0; i -= 2) {
			sum += getDigit(Character.getNumericValue(num.charAt(i)) * 2);
		}
		return sum;
	}

	/** İki basamaklı bir sayıysa rakamlarını topla */
	public static int getDigit(int number) {
		return number < 10 ? number : number / 10 + number % 10;
	}

	/** Tek basamaklardaki rakamların toplamını al */
	public static int sumOfOddPlace(long number) {
		int sum = 0;
		String num = Long.toString(number);
		for (int i = num.length() - 1; i >= 0; i -= 2) {
			sum += Character.getNumericValue(num.charAt(i));
		}
		return sum;
	}

	/** Sayının belirtilen rakam ile başlayıp başlamadığını kontrol et */
	public static boolean startsWith(long number, int prefix) {
		return String.valueOf(number).startsWith(String.valueOf(prefix));

		//Soru 2----------------------------------------------------------------------------------------------
		// Method 1: int, double parametreli 
		
/*		
		static void calculate(int a, double b) { 
		System.out.println("int, double: " + (a + b)); 
		} 
		// Method 2: double, int parametreli 
		static void calculate(double a, int b) { 
		System.out.println("double, int: " + (a + b)); 
		} 
		static void calculate(Integer a, Integer b) { 
		System.out.println("Integer, Integer: " + (a + b)); 
		} 
		public static void main(String[] args) { 
		calculate(5, 10.5); // (int, double) çağrılır 
		calculate(10.5, 5); // (double, int) çağrılır 
		// Ambiguous Call - Hata verir! 
		// calculate(5, 10); 
		// Çakışmayı önlemek için aşağıdaki gibi düzenlenebilir: 
		calculate((int) 5, (double) 10); // (int, double) çağrılır 
		calculate((double) 5, (int) 10); // (double, int) çağrılır 
		calculate((Integer) 5, (Integer) 10); // (Integer, Integer) çağrılır 
		
*/		
		
		//Son Soru--------------------------------------------------------------------------------------------
/*
		boolean[] dolaplar = new boolean[101];// hepsi kapalı false

		for (int ogr = 1; ogr < dolaplar.length; ogr++) {
			for (int dolap = ogr; dolap < dolaplar.length; dolap += ogr) {
				dolaplar[dolap] = !dolaplar[dolap];

			}

		}
		System.out.println("Acik Dolap Sayisi:");

		for (int i = 1; i < dolaplar.length; i++) {// 1
			if (dolaplar[i]) {
				System.out.println(+i + " ");
			}
		}
*/
		// ----------------------------------------------------------------------------------------------------

	}

}
