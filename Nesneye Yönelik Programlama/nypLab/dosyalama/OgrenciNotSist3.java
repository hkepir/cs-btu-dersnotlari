package dosyalama;

import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class OgrenciNotSist3 {
	
	private static final String DOSYA_ADI = "ogrencinotlari.txt";
	private static final Scanner scanner = new Scanner(System.in);
	

    // Öğrenci ekleme metodu
    private static void ogrenciEkle() {
        System.out.println("Ogrenci adi:");
        String ad = scanner.nextLine();

        System.out.println("Ogrenci notu:");
        int not = scanner.nextInt();
        scanner.nextLine(); // Buffer temizleme

        try (PrintWriter pw = new PrintWriter(new FileWriter(DOSYA_ADI, true))) {
            pw.println(ad + "," + not);
            System.out.println("Not ekleme islemi basariyla tamamlandi.");
        } catch (IOException e) {
            System.out.println("Dosya yazma hatasi: " + e.getMessage());
        }
    }

    // Tüm öğrencileri listeleme metodu
    private static void ogrencileriListele() {
        File file = new File(DOSYA_ADI);
        if (!file.exists()) {
            System.out.println("Henuz ogrenci eklenmemis.");
            return;
        }

        System.out.println("Ogrenci Listesi:");
        try (Scanner dosyaScanner = new Scanner(file)) {
            while (dosyaScanner.hasNextLine()) {
                String satir = dosyaScanner.nextLine();
                String[] parcalar = satir.split(",");
                if (parcalar.length == 2) {
                    System.out.println("Ad: " + parcalar[0] + ", Not: " + parcalar[1]);
                }
            }
        } catch (IOException e) {
            System.out.println("Dosya okuma hatasi: " + e.getMessage());
        }
    }

    // Öğrenci silme metodu
    private static void ogrenciSil() {
        System.out.println("Silmek istediginiz ogrenci adini giriniz:");
        String adSil = scanner.nextLine();

        List<String> ogrenciListesi = new ArrayList<>();
        File file = new File(DOSYA_ADI);

        try (Scanner dosyaScanner = new Scanner(file)) {
            while (dosyaScanner.hasNextLine()) {
                String satir = dosyaScanner.nextLine();
                if (!satir.startsWith(adSil + ",")) {
                    ogrenciListesi.add(satir);
                }
            }
        } catch (FileNotFoundException e) {
            System.out.println("Dosya bulunamadi!");
            return;
        }

        try (PrintWriter pw = new PrintWriter(new FileWriter(DOSYA_ADI, false))) { // Dosyayı sıfırla
            for (String satir : ogrenciListesi) {
                pw.println(satir);
            }
            System.out.println(adSil + " basariyla silindi.");
        } catch (IOException e) {
            System.out.println("Dosya yazma hatasi: " + e.getMessage());
        }
    }
	public static void main(String[] args) {
		boolean devam = true;
		while (devam) {
			System.out.println("\nOgrenci Not Kayit Sistemi");
			System.out.println("1. Ogrenci Ekle");
			System.out.println("2. Tum Ogrencileri Listele");
			System.out.println("3. Ogrenci Sil");
			System.out.println("4. Cikis");
			System.out.println("Seciminiz:");
			
			String secim = scanner.nextLine();
			switch (secim) {
			case "1":
				ogrenciEkle();
				break;
			case "2":
				ogrencileriListele();
				break;
			case "3":
				ogrenciSil();
				break;
			case "4":
				System.out.println("Ogrenci not kayit sistemi sonlandirildi.");
				devam = false;
				break;
			default:
				System.out.println("Gecersiz secim, lutfen tekrar deneyiniz!");
			}
		}
		scanner.close();
	}
}