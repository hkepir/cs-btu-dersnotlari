package ders;

import java.util.Scanner;
import javax.swing.JOptionPane;

public class deneme1 {

	public static void main(String[] args) {
		double r, a;
		Scanner alisScanner = new Scanner(System.in);
		System.out.println("Dairenin yaricapini gir:");
		r = alisScanner.nextDouble();
		/*
		 * r = aliScanner.nextDouble();
		 */
		a = Math.PI * Math.pow(r, 2);

		// String metin = new String("Sonuc sudur");
		String metin = "Yaricapi " + r + "olan dairenin alani " + a + " dir.";
		JOptionPane.showMessageDialog(null, metin, "SONUC", JOptionPane.ERROR_MESSAGE);

		System.out.println("Dairenin alani:" + a);

		String kelime;
		System.out.println("Bir kelime giriniz");
		kelime = alisScanner.next();// Bir bosluk veya tab \n gorene kadar okur kullanıcıdan bir kelime alır
		System.out.println("Girdiğiniz kelime: " + kelime);

		// Karakter Buffer Temizlenir
		alisScanner.nextLine();// Boş satır okuyarak karakter buffer temizlenir

		String cumle;
		System.out.println("Bir cumle giriniz");
		cumle = alisScanner.nextLine();
		System.out.println("Girdiğiniz kelime: " + cumle);

		String cumle2;
		cumle2 = JOptionPane.showInputDialog(null, "Ikinci cumleyi giriniz:");
		System.out.println("Girdiğiniz kelime: " + cumle2);

		alisScanner.close();
	}

}
