package dosyalama;

import java.io.File;
import java.io.PrintWriter;
import java.util.Scanner;

import java.io.IOException;

public class Notebook {

	public static void main(String[] args) {

		System.out.println("Çalıştırma dizini: " + new File(".").getAbsolutePath());

		Scanner i = new Scanner(System.in);
		String fileName = "not_defteri.txt";

		while (true) {
			System.out.println("\nNot Defteri Uygulamasi");
			System.out.println("1.Yeni Not Ekle");
			System.out.println("2.Notları Oku");
			System.out.println("3.Çıkış");
			System.out.println("Seçiminiz: ");
			int choice = i.nextInt();
			i.nextLine();// scanner da satir sonu karakteri temizle

			switch (choice) {

			case 1:// Yeni not ekleme
				System.out.println("Eklemek istediginiz notu girin");
				String note = i.nextLine();

				try (PrintWriter pw = new PrintWriter(new File(fileName))) {// Mevcut dosyanin içerigi tamamen silinir
					// try(PrintWriter pw = new Printwriter(new FileWriter(fileName,true))
					pw.println(note);
					System.out.println("Not basariyla kaydedildi :)");
				} catch (IOException e) {
					System.out.println("Dosya yazilirken hata olustu.");
					e.getStackTrace();
				}

				break;

			case 2:// Notlari okuma

				File file = new File(fileName);
				if (file.exists()) {
					try (Scanner fileScanner = new Scanner(file)) {
						System.out.println("\nKayıtlı Notlar:");
						while (fileScanner.hasNext()) {
							System.out.println(fileScanner.nextLine());
						}
					} catch (IOException e) {
						System.out.println("Dosya okunurken hata olustu");
						e.printStackTrace();
					}
				} else {
					System.out.println("Henüz hiç not eklenmemiş.");
				}

				break;

			case 3: // Programdan Cikis
				System.out.println("Not Defteri Uygulamasi Sonlandirildi.");
				i.close();
				return;
				//System.exit(0);
			default:
				System.out.println("Geçersiz seçim, lütfen tekrar deneyin.");
				break;
			}

		}
	}

}
