/*
package mycodes;

import java.util.Scanner;

public class metot {

	public static void main(String[] args) {
		System.out.println("Sayi Tek mi Cift mi?");
		Scanner scanner = new Scanner(System.in);
		
		System.out.println("Dizinin eleman sayisini giriniz:");
		int uzunluk = scanner.nextInt();
		//scanner.nextLine();
		
		int [] sayilar = new int[uzunluk];
		
		for (int i = 0; i < sayilar.length; i++) {
			System.out.println("Dizinin "+(i+1)+". elamanini giriniz :");
			sayilar[i]=scanner.nextInt();
			//scanner.nextLine();
		}
		
		for (int deger : sayilar) {
			tekMiCiftMi(deger);
		}
		scanner.close();
	}	
		
	public static void tekMiCiftMi (int sayi)
	{
		if (sayi%2==0) {
			System.out.println("Sayi : "+sayi+" Cifttir ");
		} else {
			System.out.println("Sayi : "+sayi+" Tektir ");
		}
	}
		
		
}
*/

//Metot Örnek static

/*
 
package mycodes;

import java.util.Scanner;

public class OnlyRun {
	static boolean aktif = true;//Sınıf duzeyinde tanımlanır
	static int hakSayisi = 3;//Bellekte bir kez olusturulur
	
	//Sınıfa ait oldukları için herhangi bir nesne oluşturmaya gerek yoktur.Sınıf içindeki her şey tarafından erişilebilirdir.
	
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		if (aktif) {

			if (hakSayisi > 0) {
				while (aktif) {
					System.out.println("Kullanıcı Adınız :");
					String username = scanner.nextLine();
					
					System.out.println("Sifreniz : ");
					String password = scanner.nextLine();
					
					boolean sonuc = login(username, password);
					if(sonuc) {
						System.out.println("Uygulamaya basarili olarak giris yaptınız ");
						break;
					}
					if (aktif==false) {
						System.out.println("Hak sayınız dolmustur.");
					}
				}
			} else {
				System.out.println("Hak sayınız dolmustur, hesabınız bloke oldu!");
			}
		} else {
			System.out.println("Hesabınız aktif degildir, yoneticiniz ile iletişime geciniz!");
		}
		scanner.close();
	}

	public static boolean login(String username, String password) {
		if (username.equals("enes") && password.equals("123")) {
			return true;// basarili
		} else {
			hakSayisi--;
			System.out.println("Kullanıcı adınız ve sifreniz yanlıstır.");
			if (hakSayisi == 0) {
				aktif = false;
			}
			return false;
		}

	}

}

*/

//------------------------------------------------------------------------------------------------------------------

 package mycodes;

import java.util.*;

public class metot {
	public static void main(String[] args) {
		Scanner iScanner = new Scanner(System.in);

		System.out.println("Bir sayi girin: ");
		int deger = iScanner.nextInt();

		long sonuc = metotlar.hesapla(deger);// Java da bir sinifin static metoduna erismekm icin SınıfAdi.metot()
												// şeklinde yazılmalı
		System.out.println(deger+"! = " + sonuc);

		// non-static metotlara erisim
		metotlar metot1 = new metotlar();
		System.out.println(deger+"^3 = "+metot1.kup(deger));
		System.out.println(deger + "^2 = " + metot1.kare(deger));//????????????????metotlar.kare(deger); yazmam gerekmez mi hata vermesini bekliyorum 
		System.out.println(deger + "^2 = " + metotlar.kare(deger));//buda mümkündür
		iScanner.close();

	}

}

class metotlar {

	// 1.metot
	static long hesapla(int sayi) {

		int carpim = 1;
		for (int i = 1; i <= sayi; i++) {
			carpim *= i;
		}
		return carpim;
	}

	// 2.metot
	static int kare(int x) {
		return x * x;
	}

	// 3. metot
	int kup(int x) {
		return x * x * x;
	}

}
 

/*
 package mycodes;

import java.util.*;

public class OnlyRun {
	public static void main(String[] args) {
		Scanner iScanner = new Scanner(System.in);

		System.out.println("Bir sayi girin: ");
		int deger = iScanner.nextInt();

		long sonuc = hesapla(deger);
		System.out.println(deger + "! = " + sonuc);

		// non-static metotlara erisim

		OnlyRun metot1 = new OnlyRun();
		System.out.println(deger + "^3 = " + metot1.kup(deger));
		System.out.println(deger + "^2 = " + metot1.kare(deger));//????????????????metotlar.kare(deger);

		iScanner.close();

	}

	// 1.metot
	static long hesapla(int sayi) {

		int carpim = 1;
		for (int i = 1; i <= sayi; i++) {
			carpim *= i;
		}
		return carpim;
	}

	// 2.metot
	static int kare(int x) {
		return x * x;
	}

	// 3. metot
	int kup(int x) {
		return x * x * x;
	}

}

 *///------------------------------------------------------------------------------------------------------------------------


