package sekilOlustur;

import java.util.Scanner;

import mycodes.OnlyRun;

public class dikdortgen {

	public static void main(String[] args) {
		
		OnlyRun o = new OnlyRun();
		
		System.out.println(carp(5, 5, 4) + "  " + o.carp2(5, 8, 4) + "  " + o.carp3(7, 7, 1));//carp3 metodu default ve carp 2 static degil erisilemez

		Scanner iScanner = new Scanner(System.in);
		System.out.println("Bir karakter giriniz: ");
		char karakter = iScanner.nextLine().charAt(0);
		//sekilOlustur(karakter);
		cerceveOlustur(karakter);
		iScanner.close();
	}

	public static int carp(int a, int b, int c) {
		return a * b * c;
	}

	public int carp2(int a, int b, int c) {
		return a * b * c;
	}

	int carp3(int a, int b, int c) {
		return a * b * c;
	}
/*
	public static void sekilOlustur(char sekil) {
		Scanner i = new Scanner(System.in);

		System.out.println("Dikdortgen en :");
		int en = i.nextInt();

		System.out.println("Dikdortgen boy:");
		int boy = i.nextInt();

		for (int j = 0; j < boy; j++) {
			for (int j2 = 0; j2 < en; j2++) {
				System.out.print(sekil);
			}
			System.out.println();
		}
		i.close();
	}
*/	
	
	public static void cerceveOlustur(char sekil) {
	    Scanner i = new Scanner(System.in);

	    System.out.print("Dikdortgen en: ");//en ve boy da parametre olarak atılırsa tekrardean sscanner tanımlamatagerek kalmaz 
	    int en = i.nextInt();

	    System.out.print("Dikdortgen boy: ");
	    int boy = i.nextInt();

	    for (int j = 0; j < boy; j++) {
	        for (int j2 = 0; j2 < en; j2++) {
	            // İlk veya son satır, ya da ilk/son sütun ise karakter yaz
	            if (j == 0 || j == boy - 1 || j2 == 0 || j2 == en - 1) {
	                System.out.print(sekil);
	            } else {
	                System.out.print(" "); // iç kısım boş
	            }
	        }
	        System.out.println();
	    }

	    i.close();
	}


//Method overloading
	/*
	 * 
	 * public int carp(int a, int b) { // İki parametre return a * b; }
	 * 
	 * public int carp(int a, int b, int c) { // Üç parametre return a * b * c; }
	 * 
	 * public double carp(double a, double b) { // Farklı veri türü return a * b; }
	 * 
	 */

// Constructor overloading

	/*
	 * OnlyRun(int a,int b,int c){ System.out.println(a*b*c); }
	 * 
	 * public OnlyRun(int a, int b) { System.out.println(a*b); }
	 * 
	 * public static void main(String[] args) { OnlyRun o = new OnlyRun(4, 5);
	 * OnlyRun o2 = new OnlyRun(5, 1,1); }
	 */
	
	

}
