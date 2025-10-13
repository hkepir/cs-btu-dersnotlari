package deneme6;

import java.util.Scanner;

public class A1 {
	
	private int[] values = {1,2,3,4};
	
	public int[] getValues() {
		return values;
	}
	public void/* int[] */ setValues() {
		Scanner scanner = new Scanner(System.in);
		System.out.println("\nDizinin ilk elemaninni degistir: ");
		int deger = scanner.nextInt();
		values[0] = deger;
		//return values; bu satır olmasa bile dizi guncellenir
	}
	public void printValues() {
		for (int i = 0; i < values.length; i++) {
			System.out.print(values[i]+" ");
		}
	}
	public static void main(String[] args) {
		A1 a = new A1();
		int [] donen = a.getValues();
		donen[0] = 99;
		a.printValues();
		
		a.setValues();
		a.printValues();
	}

}
//NotLar:
//Bellekte sadece 1 adet dizi oluşturulur
//Program boyunca tek bir dizinin içerigi farklı referanslarla degistirilir.

