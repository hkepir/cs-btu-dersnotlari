package ders;

import java.util.Arrays;
import java.util.Iterator;
import java.util.Random;
import java.util.Scanner;

public class Question6_7 {

	public static void main(String[] args) {

		int x[][] = new int[3][4];// 3 satirli //4 elemanli //ilk olusturulan bos dizi --> Garbage collector
		System.out.println("Satir uzunlugu :" + x.length);
		System.out.println("Sutun uzunlugu :" + x[0].length);
		System.out.println("Bir satirdaki eleman sayisi :" + x[1].length);
		System.out.println("Sutun sayisi :" + x[2].length);
		/*
		 * //HATA x[][] = { {0,0,0,0}, {1,1,1,1}, {2,2,2,2}, };
		 */
		x = new int[][] { // İkinci olusturulan dizi x artık bunu referans ediyor
				{ 0, 0, 0, 0 }, { 1, 1, 1, 1 }, { 2, 2, 2, 2 }, };

		System.out.println("Dizinin icerigi " + Arrays.deepToString(x));
		System.out.println("Dizi Satir Elemanlari " + Arrays.toString(x[1]));

		/*
		 * int x[][] = { //Boyle yapilirsa tek bir dizi olusturulmus olunur {0, 0, 0,
		 * 0}, {1, 1, 1, 1}, {2, 2, 2, 2}};
		 */
		System.out.println();
		System.out.println();

		int[][] matrix = new int[10][10];

		Scanner scanner = new Scanner(System.in);
		Random random = new Random();

		System.out.println("---Enter " + matrix.length + " rows and " + matrix[0].length + " columns:---\n");

		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				// matrix[i][j] = (int)(Math.random()*100);
				matrix[i][j] = random.nextInt(100);

			}
		}
		// print the array
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println();
		}

		// Summing All Elements

		int total = 0;
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				total += matrix[i][j];
			}
		}
		System.out.println("Sum the all elements of matris: \n" + total);

		// Which row has the largest sum?

		int maxRow = 0;
		int indexOfMaxRow = 0;

		for (int i = 0; i < matrix[0].length; i++) {// ilk satiri toplar max'a atar
			maxRow += matrix[0][i];
		}

		for (int i = 0; i < matrix.length; i++) {
			int totalOfThisRow = 0;
			for (int j = 0; j < matrix[i].length; j++) {
				totalOfThisRow += matrix[i][j];
			}
			if (totalOfThisRow > maxRow) {
				maxRow = totalOfThisRow;
				indexOfMaxRow = i;
			}
		}
		System.out.println("Satir " + indexOfMaxRow + " has the max sum of :" + maxRow);

		// Random Shuffling

		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				int i1 = random.nextInt(matrix.length);
				int j1 = random.nextInt(matrix[i].length);
				// swap matrix[i][j] with matrix[i1][j1]
				int temp = matrix[i][j];
				matrix[i][j] = matrix[i1][j1];
				matrix[i1][j1] = temp;
			}

		}

		// print the array
		System.out.println("\nRandom Shuffling in Array");
		for (int i = 0; i < matrix.length; i++) {
			for (int j = 0; j < matrix[i].length; j++) {
				System.out.print(matrix[i][j] + " ");
			}
			System.out.println();
		}

		// Ornek nxn ust ucgen matris olusturma

		System.out.println("\n\nMatris boyutunu giriniz :");
		int n = scanner.nextInt();

		int[][] matrix2 = new int[n][n];

		// Ust ucgeni doldur
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				matrix2[i][j] = 1;
			}
		}

		for (int i = 0; i < matrix2.length /* n */; i++) {
			for (int j = 0; j < matrix2.length; j++) {
				System.out.print(matrix2[i][j] + " ");
			}
			System.out.println();
		}

		// 5x5 matris olustur çapraz elemanlari 1
		System.out.println("\nÇapraz 1 Matrisi (5x5)");
		int[][] matrix3 = new int[5][5];

		// Capraz elemanlara 1 ata
		for (int i = 0; i < matrix3.length; i++) {
			for (int j = 0; j < matrix3[i].length; j++) {
				if (i == j || i + j == matrix3.length - 1) {
					matrix3[i][j] = 1;
				} else {
					matrix3[i][j] = 0;
				}
			}
		}

		// Matrisi Yazdir
		for (int i = 0; i < matrix3.length; i++) {
			for (int j = 0; j < matrix3.length; j++) {
				System.out.print(matrix3[i][j] + " ");
			}
			System.out.println();
		}

	}

}
