package dosyalama;

import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class KlasorDosyaOlustur {

    // Klasör ve dosya oluşturma metodu
    public static void klasorVeDosyaOlustur(String anaKlasorYolu, int klasorSayisi, int dosyaSayisi) {
        File anaKlasor = new File(anaKlasorYolu);

        if (!anaKlasor.exists()) {
            anaKlasor.mkdirs(); // Eğer ana klasör yoksa oluştur
        }

        for (int i = 1; i <= klasorSayisi; i++) {
            File yeniKlasor = new File(anaKlasor, "Klasor" + i);

            if (yeniKlasor.mkdir()) {
                System.out.println("Klasör oluşturuldu: " + yeniKlasor.getAbsolutePath());

                // Her klasör içine belirlenen sayı kadar metin dosyası oluştur
                for (int j = 1; j <= dosyaSayisi; j++) {
                    File metinDosyasi = new File(yeniKlasor, "Dosya" + j + ".txt");

                    try {
                        if (metinDosyasi.createNewFile()) {
                            System.out.println("Dosya oluşturuldu: " + metinDosyasi.getAbsolutePath());
                        } else {
                            System.out.println("Dosya zaten mevcut: " + metinDosyasi.getAbsolutePath());
                        }
                    } catch (IOException e) {
                        System.out.println("Dosya oluşturma hatası: " + e.getMessage());
                    }
                }
            } else {
                System.out.println("Klasör oluşturulamadı veya zaten var: " + yeniKlasor.getAbsolutePath());
            }
        }
    }

    // MAIN
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Masaüstünde oluşturulacak klasör adını giriniz: ");
        String klasorAdi = scanner.nextLine().trim();  // Girilen adı düzenle

        // Masaüstü yolu otomatik olarak alınıyor
        String anaKlasorYolu = System.getProperty("user.home") + "\\Desktop\\" + klasorAdi;

        System.out.print("Kaç klasör oluşturulsun?: ");
        int klasorSayisi = Integer.parseInt(scanner.nextLine());

        System.out.print("Her klasör içinde kaç metin dosyası oluşturulsun?: ");
        int dosyaSayisi = Integer.parseInt(scanner.nextLine());

        // Metodu çağır ve klasör/dosyaları oluştur
        klasorVeDosyaOlustur(anaKlasorYolu, klasorSayisi, dosyaSayisi);

        scanner.close();
    }
}