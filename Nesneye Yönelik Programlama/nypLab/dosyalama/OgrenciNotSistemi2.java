package dosyalama;

import java.io.*;
import java.util.Scanner;

public class OgrenciNotSistemi2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean devam = true;

        while (devam) {
            System.out.println("\nOgrenci Not Kayit Sistemi");
            System.out.println("1. Ogrenci Ekle");
            System.out.println("2. Tum Ogrencileri Listele");
            System.out.println("3. Cikis");
            System.out.print("Seciminiz: ");
            String secim = scanner.nextLine();

            switch (secim) {
                case "1":
                    System.out.print("Ogrenci adi: ");
                    String ad = scanner.nextLine();

                    System.out.print("Ogrenci notu: ");
                    String not = scanner.nextLine();

                    try (PrintWriter writer = new PrintWriter(new FileWriter("ogrenci_notlari.txt", true))) {
                        writer.println(ad + "," + not);
                        System.out.println("Ogrenci basariyla eklendi.");
                    } catch (IOException e) {
                        System.out.println("Dosya yazma hatasi: " + e.getMessage());
                    }
                    break;

                case "2":
                    File dosya = new File("ogrenci_notlari.txt");

                    if (!dosya.exists()) {
                        System.out.println("Henuz ogrenci eklenmemis.");
                        break;
                    }

                    System.out.println("Ogrenci Listesi:");
                    try (Scanner dosyaScanner = new Scanner(dosya)) {
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
                    break;

                case "3":
                    System.out.println("Ogrenci Not Kayit Sistemi sonlandirildi.");
                    devam = false;
                    break;

                default:
                    System.out.println("Gecersiz secim, lutfen tekrar deneyin.");
            }
        }

        scanner.close();
    }
}