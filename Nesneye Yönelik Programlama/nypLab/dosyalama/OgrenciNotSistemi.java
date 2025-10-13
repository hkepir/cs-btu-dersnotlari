package dosyalama;

import java.io.*;
import java.io.FileWriter;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class OgrenciNotSistemi {

	public static void main(String[] args) {

		Scanner scanner = new Scanner(System.in);
		boolean devam = true;
		while (devam) {
			System.out.println("\nOgrenci Not Kayit Sistemi");
			System.out.println("1.Ogrenci Ekle");
			System.out.println("2.Tum Ogrencileri Listele");
			System.out.println("3.Ogrenci Sil");
			System.out.println("4.Cikis");
			System.out.println("Seciminiz:");

			String secim = scanner.nextLine();
			switch (secim) {
			case "1":
				System.out.println("Ogrenci adi:");
				String ad = scanner.nextLine();

				System.out.println("Ogrenci notu: ");
				
				int not = scanner.nextInt(); 
				//scanner nextInt sadece sayıyı alır \n karakter buffer içinde kalır 
				scanner.nextLine();
				try (PrintWriter pw = new PrintWriter(new FileWriter("ogrencinotlari.txt", true))) {
					pw.println(ad +","+not);
					System.out.println("Not ekleme islemi basariyla tamamlandi.");

				} catch (IOException e) {
					System.out.println("Dosya yazma hatasi " + e.getMessage());
				}
				break;
			case "2":
				File file = new File("ogrencinotlari.txt");
				if (!file.exists()) {
					System.out.println("Henuz ogrenci eklenmemis ");
					break;
				}
				System.out.println("Ogrenci Listesi ");
				try (Scanner dosyaScanner = new Scanner(file)) {
					while (dosyaScanner.hasNextLine()) {
						String satir = dosyaScanner.nextLine();
						String[] parcalar = satir.split(",");
						if (parcalar.length == 2) {
							System.out.println("Ad: " + parcalar[0] + ", Not: " + parcalar[1]);
						}
					}
				} catch (IOException e) {
					System.out.println("Dosya okuma hatasi " + e.getMessage());
				}

				break;
				
			case "3":
				System.out.println("Silmek istediginiz ogrenci adini giriniz: ");
				String adSil = scanner.nextLine();
				
				List<String> ogrenList = new ArrayList<String>();
				File file2 = new File("ogrencinotlari.txt");//burada neden file2 diyerek yeni bir dosya referansı olusturduk daha önce kodda kullandıgımız file2 yi kullanamaz mıydık?
				
				try(Scanner dosyaScanner = new Scanner(file2)) {
					while (dosyaScanner.hasNextLine()) {
						String satir =  dosyaScanner.nextLine();
						if (!satir.startsWith(adSil+",")) {
							ogrenList.add(satir);
						}
					}
				} catch (FileNotFoundException e) {
					System.out.println("Dosya bulunamadi!!");
					return;
				}
				// Dosyayı güncelle: Yeni listeyi tekrar dosyaya yaz
				try (PrintWriter pw = new PrintWriter(new FileWriter("ogrencinotlari.txt", false))) { // false => dosyayı sıfırlar
				    for (String satir : ogrenList) {
				        pw.println(satir);
				    }
				    System.out.println(adSil + " basariyla silindi.");
				} catch (IOException e) {
				    System.out.println("Dosya yazma hatasi: " + e.getMessage());
				}
				break;
			case "4":
				System.out.println("Ogrenci not kayit sistemi sonlandirildi");
				devam = false;
				break;

			default:
				System.out.println("Gecersiz secim lutfen tekrar deneyiniz !");
			}

		}
		scanner.close();

	}

}
