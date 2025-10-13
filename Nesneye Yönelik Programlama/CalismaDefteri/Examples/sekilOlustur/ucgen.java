package sekilOlustur;

import java.util.Scanner;

public class ucgen {

	public static void main(String[] args) {

		for (int i = 0; i < 5; i++) {
			for (int j = 5; i < j; j--) {
				System.out.print("1");
			}
			System.out.println();
		}

		Scanner scanner = new Scanner(System.in);
		System.out.print("Satır sayısını girin: ");
		int rows = scanner.nextInt();

		int[][] triangle = new int[rows][];

		// Üçgen oluştur
		for (int i = 0; i < rows; i++) {
			triangle[i] = new int[i + 1]; // Satır boyutunu belirle
			for (int j = 0; j < triangle[i].length; j++) {
				triangle[i][j] = 1;
			}
		}

		// Üçgeni yazdır
		for (int i = 0; i < triangle.length; i++) {
			for (int j = 0; j < triangle[i].length; j++) {
				System.out.print(triangle[i][j] + " ");
			}
			System.out.println();
		}
		// Ters Ucgen
		System.out.println();
		int rows3 = 5; // Üçgenin yüksekliği

		for (int i = rows3; i > 0; i--) {
			for (int j = 0; j < rows3 - i; j++) {
				System.out.print(" "); // Boşluk ekle
			}
			for (int k = 0; k < i; k++) {
				System.out.print("1 "); // Üçgen elemanı ekle
			}
			System.out.println();
		}

		// Saga Yasli Ucgen
		int h = 10;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < h - i - 1; j++) {
				System.out.print(" ");// Bosluk ekle
			}
			for (int k = 0; k <= i; k++) {
				System.out.print(" *");
			}
			System.out.println();
		}

		// Pascal Ucgeni
		int rows1 = 5; // Üçgenin yüksekliği
		int[][] pascal = new int[rows1][];

		for (int i = 0; i < rows1; i++) {
			pascal[i] = new int[i + 1]; // Her satırın boyutunu tanımla
			for (int j = 0; j < pascal[i].length; j++) {
				if (j == 0 || j == i) {
					pascal[i][j] = 1; // Kenar elemanlar 1
				} else {
					pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j]; // Toplam hesapla
				}
			}
		}

		// Pascal üçgenini yazdır
		for (int i = 0; i < pascal.length; i++) {
			for (int j = 0; j < pascal[i].length; j++) {
				System.out.print(pascal[i][j] + " ");
			}
			System.out.println();

		}

		int rows4 = 5; // Pascal üçgeninin yüksekliği
		int[][] pascal1 = new int[rows4][];

		// Pascal üçgenini oluştur
		for (int i = 0; i < rows4; i++) {
			pascal1[i] = new int[i + 1]; // Her satırın boyutunu tanımla
			for (int j = 0; j < pascal1[i].length; j++) {
				if (j == 0 || j == i) {
					pascal1[i][j] = 1; // Kenar elemanları 1
				} else {
					pascal1[i][j] = pascal1[i - 1][j - 1] + pascal1[i - 1][j]; // Toplam hesapla
				}
			}
		}

		// Pascal üçgenini ortalanmış şekilde yazdır
		for (int i = 0; i < pascal1.length; i++) {
			// Ön boşluk ekle
			for (int j = 0; j < rows4 - i - 1; j++) {
				System.out.print("  "); // Boşluk ekle (2 boşluk)
			}
			// Pascal üçgeninin elemanlarını yazdır
			for (int j = 0; j < pascal1[i].length; j++) {
				System.out.print(pascal1[i][j] + "   "); // Elemanlar arasında boşluk bırak
			}
			System.out.println(); // Yeni satıra geç
		}
		
		
		        int yukseklik = 5;

		        for (int i = 0; i < yukseklik; i++) {
		            // Boşluk bas
		            for (int j = 0; j < 5 - i - 1; j++) {
		                System.out.print("  ");
		            }

		            int number = 1; // İlk eleman her zaman 1'dir

		            for (int j = 0; j <= i; j++) {
		                System.out.print(number + "   ");

		                // Sonraki elemanı hesapla (dizi olmadan)
		                number = number * (i - j) / (j + 1);
		            }

		            System.out.println(); // Yeni satıra geç
		       
		}
		        scanner.close();
	}

}
