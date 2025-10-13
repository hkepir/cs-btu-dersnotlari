package dosyalama;

import java.io.File;
import java.io.IOException;

public class dosyaRef {
	public static void main(String[] args) {

		/*
		 * File dosyamGecici = new File("C:\\KITAPLIK"); dosyamGecici.mkdir();// Bu
		 * dosya windows altında olustruldu dosyamGecici.delete();
		 */

		File Kitaplik = new File("C:\\Users\\hkepi\\eclipse-workspace\\Lab\\KITAPLIK");
		System.out.println("Kitaplik bir klasor mu ? " + Kitaplik.isDirectory());
		System.out.println("Kitaplik bir dosya mi ? " + Kitaplik.isFile());

		File Kitaplik2 = new File("C:\\Users\\hkepi\\eclipse-workspace\\Lab\\KITAPLIK\\JAVADERS\\FILE\\");

		if (Kitaplik2.mkdirs()) {
			System.out.println("Kitaplik dosyasi olusturuldu! ve alt klasorler eklendi ");
		} else {
			System.out.println("Klasorler olusturulamadi");
		}

		File kitap = new File(Kitaplik2, "kitap.txt");
		try {
			if (kitap.createNewFile()) {
				System.out.println("kitap.txt basari ile olusturuldu.");
			} else {
				System.out.println("kitap.txt zaten mevcut.");
			}
		} catch (IOException e) {
			System.out.println("Dosya olusturulurken hata olustu: " + e.getMessage());
		}

		File file = new File(Kitaplik2, "file.txt");
		try {
			if (file.createNewFile()) {
				System.out.println("file.txt basari ile olusturuldu.");
			} else {
				System.out.println("file.txt zaten mevcut.");
			}
		} catch (IOException e) {
			System.out.println("Dosya olusturulurken hata olustu: " + e.getMessage());
		}

		System.out
				.println("\n\n\nKitaplik ve Kitaplik2 file ref. deg. birbrinden bagimsiz " + "iki klasoru temsil eder");

		if (Kitaplik == Kitaplik2) {
			System.out.println("Bu iki nesne adresleri aynidir");
		}

		System.out.println("Kitaplik JVM adresi : " + Kitaplik.hashCode());//toString kullanirsak dosya yolunu dondurur
		System.out.println("Kitaplik2 JVM adresi : " + Kitaplik2.hashCode());

		if (Kitaplik.equals(Kitaplik2)) {
			System.out.println("İki File nesnesi aynı yolu gösteriyor!");
		} else {
			System.out.println("İki File nesnesi farklı yolları gösteriyor!");
		}

		if (Kitaplik.compareTo(Kitaplik2) == 0) {
			System.out.println("İki dosya aynı yolu işaret ediyor!");
		} else {
			System.out.println("Dosya yolları farklı!");
		}

		System.out.println(" " + Kitaplik.getAbsolutePath());
		System.out.println(" " + Kitaplik2.getAbsolutePath());
	}

}
