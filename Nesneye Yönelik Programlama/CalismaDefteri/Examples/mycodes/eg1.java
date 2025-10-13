package mycodes;

import java.util.Scanner;

public class eg1 {
    public static void main(String[] args) {
        // Kredi Kartı Uygulaması

        Scanner scanner = new Scanner(System.in);

        double bilalBakiye = 2450;
        String bilalIBAN = "TR1234 1478 789 456 456 7485 89 89";
        String bilalKullanici = "bilal";
        String bilalSifre = "111";

        double enesBakiye = 1200;
        String enesIBAN = "TR8998 8526 789 741 741 7896 45 85";
        String enesKullanici = "enes";
        String enesSifre = "222";

        System.out.println("ATM'ye Hoşgeldiniz.");
        System.out.print("Kullanıcı Adı: ");
        String kullaniciAdi = scanner.nextLine();

        System.out.print("Şifre: ");
        String sifre = scanner.nextLine();

        if (kullaniciAdi.equals(bilalKullanici) && sifre.equals(bilalSifre)) {
            System.out.println("Bilal Çamur hesabına giriş yapıldı.");
            bankaIslemMenusu(scanner, bilalBakiye, enesBakiye, enesIBAN);
        } else if (kullaniciAdi.equals(enesKullanici) && sifre.equals(enesSifre)) {
            System.out.println("Enes Bayram hesabına giriş yapıldı.");
            bankaIslemMenusu(scanner, enesBakiye, bilalBakiye, bilalIBAN);
        } else {
            System.out.println("Kullanıcı adınız veya şifreniz yanlış.");
        }

        scanner.close(); // Scanner'ı kapat
    }

    public static void bankaIslemMenusu(Scanner scanner, double kullaniciBakiye, double digerHesapBakiye, String digerIBAN) {
        String islemSecenekleri = "1- Bakiye Görüntüleme\n"
                + "2- Para Çekme\n"
                + "3- Farklı Hesaba Para Yatırma\n"
                + "4- Çıkış\n";

        while (true) {
            System.out.println("\n" + islemSecenekleri);
            System.out.print("Lütfen bir seçim yapınız: ");
            String secim = scanner.nextLine();

            switch (secim) {
                case "1":
                    System.out.println("Bakiyeniz: " + kullaniciBakiye + " TL");
                    break;

                case "2":
                    System.out.print("Çekmek istediğiniz tutarı giriniz: ");
                    int cekilecekTutar = scanner.nextInt();
                    scanner.nextLine(); // Satır sonu temizleme

                    if (kullaniciBakiye >= cekilecekTutar) {
                        kullaniciBakiye -= cekilecekTutar;
                        System.out.println("Para hesabınızdan çekildi.");
                        System.out.println("Kalan bakiye: " + kullaniciBakiye + " TL");
                    } else {
                        System.out.println("Bakiyenizde yeterli para yok!");
                    }
                    break;

                case "3":
                    System.out.print("Ne kadar para yatırmak istiyorsunuz: ");
                    int yatirilacakTutar = scanner.nextInt();
                    scanner.nextLine(); // Satır sonu temizleme

                    if (yatirilacakTutar <= kullaniciBakiye) {
                        System.out.print("IBAN giriniz: ");
                        String yatirilacakIban = scanner.nextLine();

                        if (yatirilacakIban.equals(digerIBAN)) {
                            System.out.println("Para transferi gerçekleştiriliyor...");
                            kullaniciBakiye -= yatirilacakTutar;
                            digerHesapBakiye += yatirilacakTutar;
                            System.out.println("Transfer başarılı! Güncel bakiyeniz: " + kullaniciBakiye + " TL");
                        } else {
                            System.out.println("Hatalı IBAN girdiniz!");
                        }
                    } else {
                        System.out.println("Bakiyeniz yetersiz!");
                    }
                    break;

                case "4":
                    System.out.print("Çıkış yapmak istiyor musunuz? (E/H): ");
                    char cevap = scanner.nextLine().charAt(0);

                    if (cevap == 'E' || cevap == 'e') {
                        System.out.println("Başarıyla çıkış yapıldı.");
                        return; // Döngüyü ve metodu sonlandırır
                    } else {
                        System.out.println("Ana menüye yönlendiriliyorsunuz...");
                    }
                    break;

                default:
                    System.out.println("Geçersiz seçim! Lütfen tekrar deneyiniz.");
                    break;
            }
        }
    
		//Carpim Tablosu Yapimi
/*		
		for (int i = 1; i <= 10; i++) {
			for (int j = 1; j <= 10; j++) {
				System.out.println(i+" x "+j+" = "+(i*j));
			}
		System.out.println(" ");
		}
		
		//Asal Sayi Bulma
		Scanner scanner = new Scanner(System.in);
		int sayi = scanner.nextInt();
		
		boolean asalMi = false;
		for (int i = 2; i < sayi; i++) {
			if (sayi%i==0) {
				asalMi = false;
				break;
			}else {
				asalMi = true;
			}
			
		}
		System.out.println(sayi + (asalMi ? " asaldir." : " asal degildir."));
		//(asalMi == true)? System.out.println(+sayi+"asaldir."); : System.out.println(+sayi+"asal degildir"); mantık hatası
*/
    }
}  
    
    
  
