package Question12;

import java.util.Scanner;

public class TestThrowClass {

	public static void main(String[] args) {
		Scanner i = new Scanner(System.in);
		try {
			while (true) {
				int value = i.nextInt();
				if (value < 40) {
					throw new Exception("value is too small");
				}
				if (value == 50) {
					System.out.println("Sayiyi dogru tahmin ettin :)");
					break;
				}
			}
		} catch (Exception ex) {
			System.out.println(ex.getMessage());
		}finally {
			i.close();
		}
		
		System.out.println("Continue after the catch block");
		//bu satir her durumda calisir
	}

}
