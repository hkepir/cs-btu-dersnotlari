package object;

import java.util.Scanner;

public class AnaSinif {//Gise App

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Gise uygulamasina HOSGELDINIZ");
		System.out.println("TCKN Giriniz : ");
		
		String tckn = scanner.nextLine();
		//Kimlik no'su 10 haneli mi
		TCKN tcknNesne = new TCKN();
		tcknNesne.setTckn(tckn);
 		
		
 	}

}
