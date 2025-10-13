package dosyalama;

import java.io.File;

public class denemeFile {

	public static void main(String[] args) {

		File dosyaYolu = new File("C:\\Users\\hkepi\\Desktop\\DENEME\\");
		File dosya = new File(dosyaYolu, "denemeFile.txt");

		System.out.println("C:\\DENEME klasoru var mi? : " + dosyaYolu.exists());
		System.out.println("C:\\DENEME \\ denemeFile.txt var mi? : " + dosya.exists());
		System.out.println("C:\\DENEME \\ denemeFile.txt yazilir mi? : " + dosya.canWrite());
		System.out.println("C:\\DENEME \\ denemeFile.txt okunabilir mi? : " + dosya.canRead());
		System.out.println("C:\\DENEME \\ denemeFile.txt  mi? : " + dosya.canExecute());// calistirilabilir mi
		System.out.println("denemeFile.txt'nin boyutu " + dosya.length());
		System.out.println("denemeFile.txt bir klasordur: " + dosya.isDirectory());
		System.out.println("denemeFile.txt bir dosyadir: " + dosya.isFile());
		System.out.println("denemeFile.txt'nin yolu: " + dosya.getAbsolutePath());
		System.out.println("denemeFile.txt'nin yolu: " + dosyaYolu);//dosya adini vermez
		System.out.println("denemeFile.txt'nin yolu: " + dosya.getPath());
		System.out.println("denemeFile.txt'nin bulundugu klasor: " + dosya.getParent());

		// dosya silmek icin
		// dosya.delete();

		System.out.println("\n\n" + dosyaYolu.getName() + " Klasoru Altinda Bulunan Dosyalar");
		System.out.println("------------------");
		String[] donenler = dosyaYolu.list();
		for (String ali : donenler) {
			System.out.println(ali);

		}
		System.out.println("-------------------\n\n");

		System.out.println("DENEME klasoru altinda bulunan file paths");
		System.out.println("-------------------");
		File[] donenler2 = dosyaYolu.listFiles();
		for (File ali : donenler2) {
			System.out.println(ali.getPath());
		}
		System.out.println("-------------------");

		// dosya adi degistirmek icin
		// dosya.renameTo(new File(dosyaYolu,"denemeFileYeniAd.txt"));
		
		//Ic ice klasorler 
		File yeniFile = new File(dosyaYolu,"1\\2\\3");
		yeniFile.mkdirs();
		
		
		/*
		 // mkdirs() ile iç içe tüm klasörleri oluştur if (yeniKlasor.mkdirs()) {
		  System.out.println("Klasörler başarıyla oluşturuldu: " +
		  yeniKlasor.getAbsolutePath()); } else {
		  System.out.println("Klasörler zaten var veya oluşturulamadı."); }
		 */
		
		
	}

}
