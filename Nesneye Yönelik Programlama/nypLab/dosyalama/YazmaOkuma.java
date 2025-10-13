package dosyalama;

import java.io.File;
import java.io.PrintWriter;
import java.util.Random;
import java.util.Scanner;

public class YazmaOkuma {

	public static void main(String[] args) {
		
		//DOSYAYA YAZMA
		String[] kitaplar = {"Huzur","Leyla ile Mecnun","Kaside","Karun ve Anarsist","Savas Sanati","Yagmur","Ruveyda","Hindiba","Sevgi Yukardan Gelir"};
		Random r = new Random();
		
		//Dosya var mi kontrol yapilabilir
		File metin1 = new File("KITAPLIK\\JAVADERS\\FILE\\kitap.txt"); 
		
		try (PrintWriter pw = new PrintWriter(metin1)){
			for (int i = 0; i < kitaplar.length; i++) {
				pw.println((i+1)+". Kitap "+kitaplar[r.nextInt(kitaplar.length)]);
			}
		} catch (Exception e) {
			System.out.println("HATA:"+ e.getMessage());
		}
		
		//DOSYADAN OKUMA
		
		try {
			Scanner okuyucu = new Scanner(metin1);
			while (okuyucu.hasNext()) {
				//String okunan = (//String) okuyucu.next();
				String okunan = okuyucu.nextLine();//for whole line
				System.out.println("Okunan: "+okunan);
			}
			okuyucu.close();
		} catch (Exception e) {
			// TODO: handle exception
		}
	
	
		//read the file.txt 
		
		File metin2 = new File("KITAPLIK\\JAVADERS\\FILE\\file.txt");
		try {
			Scanner oku = new Scanner(metin2);
			while (oku.hasNext()) {
				String string = oku.nextLine();
				System.out.println(string);
				}
		oku.close();
		} catch (Exception e) {
			System.out.println(e);
		}
	}

}
