package mycodes;

import java.util.Scanner;


public class CalisanMain {

	public static void main(String[] args) {
		Worker worker1 = new Worker();
		worker1.name("Ayse");
		
		System.out.println("***Uygulamaya Hosgeldiniz***");

		Scanner i = new Scanner(System.in);

		System.out.println("No degerini giriniz :");
		int no = i.nextInt();
		i.nextLine();

		System.out.println("Isim giriniz :");
		String isim = i.nextLine();

		System.out.println("Soyisim giriniz :");
		String soyisim = i.nextLine();

		System.out.println("Tecrube giriniz :");
		int tecrube = i.nextInt();

		System.out.println("Maas tutarını giriniz");
		double maas = i.nextDouble();
		i.nextLine();

		Calisan calisan1 = new Calisan(no, isim, soyisim, tecrube, maas);// Çalışan sınıfından bir nesne oluşturuldu

		String islemler = "---İslem Seciniz---\n" + "1-Calisan Bilgilerini Goster\n" + "2-Zam Yap\n" + "3-Format At\n"
				+ "4-Cikis Yap\n" + "--------------------------------";

		boolean donguDevam = true;
		while (donguDevam) {

			System.out.println(islemler);
			// JOptionPane.showMessageDialog(null,islemler,"Islemler",JOptionPane.INFORMATION_MESSAGE
			// );
			int secim = i.nextInt();
			i.nextLine();

			switch (secim) {
			case 1:
				calisan1.calisanBilgileriYazdir();
				break;
			case 2:
				System.out.println("Yapilacak zam degerini girin: ");
				int zam = i.nextInt();
				calisan1.zamYap(zam);
				break;
			case 3:
				System.out.println("Format atacak kisinin ismini girin: ");
				String kisi = i.nextLine();

				System.out.println("Isletim sistemini giriniz: ");
				String isletimSis = i.nextLine();

				calisan1.formatAt(isletimSis, kisi);
				break;
			case 4:
				System.out.println("Program sona erdi.");
				donguDevam = false;
				break;
			default:
				System.out.println("Gecersiz giris yaptiniz !!!");
				break;
			}
			System.out.println();
		}
		i.close();
	}
	
}

//Eger her case yalnızca 1 kere calissin istersem flag degiskenleri kullanılabilir
//Bu sistem Set<Integer> ile daha dinamik hale getirilebilir
/*
 
boolean bilgiGosterildi = false;
boolean zamYapildi = false;
boolean formatAtildi = false;

while(donguDevam) {
    System.out.println(islemler);
    System.out.print("Seciminiz: ");
    int secim = i.nextInt();
    i.nextLine();

    switch (secim) {
        case 1:
            if (!bilgiGosterildi) {
                calisan1.calisanBilgileriYazdir();
                bilgiGosterildi = true;
            } else {
                System.out.println("Calisan bilgileri zaten gösterildi!");
            }
            break;

        case 2:
            if (!zamYapildi) {
                System.out.print("Yapilacak zam degerini girin: ");
                int zam = i.nextInt();
                i.nextLine();
                calisan1.zamYap(zam);
                zamYapildi = true;
            } else {
                System.out.println("Zam islemi zaten yapildi!");
            }
            break;

        case 3:
            if (!formatAtildi) {
                System.out.print("Format atacak kisinin ismini girin: ");
                String kisi = i.nextLine();

                System.out.print("Isletim sistemini giriniz: ");
                String isletimSis = i.nextLine();

                calisan1.formatAt(isletimSis, kisi);
                formatAtildi = true;
            } else {
                System.out.println("Format islemi zaten yapildi!");
            }
            break;

        case 4:
            System.out.println("Programdan cikiliyor...");
            donguDevam = false;
            break;

        default:
            System.out.println("Gecersiz giris yaptiniz !!!");
            break;
    }
    // BONUS: Tüm işlemler yapıldıysa çık
    if (bilgiGosterildi && zamYapildi && formatAtildi) {
        System.out.println("Tum islemler yapildi. Programdan cikiliyor...");
        break;
    }

    System.out.println();
}

*/