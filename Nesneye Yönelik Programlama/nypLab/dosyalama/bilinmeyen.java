package dosyalama;

import java.io.*;

public class bilinmeyen {
	public static void main(String[] args) {

		File dosya = new File("C:\\Users\\hkepi\\Desktop\\yenidosya.txt");

		try {
			if (dosya.createNewFile()) {
				System.out.println("Dosya oluşturuldu: " + dosya.getAbsolutePath());
			} else {
				System.out.println("Dosya zaten mevcut.");
			}
		} catch (IOException e) {
			System.out.println("Dosya oluşturulurken hata oluştu: " + e.getMessage());
		}
	}
	
	
}