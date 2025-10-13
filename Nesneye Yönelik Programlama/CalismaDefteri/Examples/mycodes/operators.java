package mycodes;

public class operators {
	public static void main(String[] args) {

		double a = 1 / 2;
		System.out.println(a);// 0.0

		double b = 1.0 / 2;
		System.out.println(b);// 0.5

		double c = 1 / 2.0;// 0.5
		System.out.println(c);

		double sum = a + b + (int) c;
		System.out.println("sum: " + sum);// 0.5

		double sum1 = a + b + c;
		System.out.println("sum1: " + sum1);// 1.0

		double average = a + b + c / 3;
		System.out.println("average: " + average);// 0.6666666666666666

		int average2 = (int) a + (int) b + (int) c / 3;
		System.out.println("average2: " + average2);// 0

		System.out.println("Islem Sonuc b/c = " + b / c);// 0.5/0.5 = 1.0
		System.out.println("Islem Sonuc b/(int)c = " + b / 2);
		// double/int islemi yapılırsa byte cinsinden kapasitesi yüksek olan gibi çıkar

		double sayi = 3.0 / 2; // Kapasitesi yüksek olanı kapasitesi düşük olana gizlice dönüştürür
		System.out.println(sayi);

		int sayi1 = 5 * (3 / 2);
		System.out.println(sayi1);// 5

		// --------NOTES----------------------------------------------------
		// int i,j,k = 5; java da mümkün değil
		// Java da degisken önce metot içinde aranır ve kullanılır sonra sınıf içinde
		// kullanılır
		// C de unsigned int ile java da negatif kısmı iptal edebiliyoruz ama java da
		// ise tüm veri tipleri işaretlidir.
		
		int islem = (-34) % 5;
		System.out.println(islem);
		
		boolean sonuc = sayi1 == islem;
		System.out.println("Sonuc "+sonuc);
		
		boolean sonuc2 = sayi1 > 2 && sayi1< 5;
		System.out.println("Sonuc2 "+sonuc2);
		
		//Ternary Oprt
		boolean sonuc3;
		sonuc3 = a > 2? true:false;
		System.out.println("Sonuc3 "+ !sonuc3);
		
		/*
		String sonuc4 = 7>2?"Evet Buyuktur":"Hayir Kucuktur";
		System.out.println(sonuc4);
		*/
		
		
	}

}
