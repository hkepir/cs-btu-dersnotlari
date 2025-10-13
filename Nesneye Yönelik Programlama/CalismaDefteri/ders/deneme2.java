package ders;

public class deneme2 {

	/*
	 * int a; //statik olmayan bir degisken statik bir methoddan cagrilamaz
	 */ // bir sınıf degiskeni paylasimli bir degisken olmasi icin

	// numerik sınıf degiskenlerinin varsayılan degeri 0 dır

	static int a;

	public static void main(String[] args) {

		// javada bu sekilde bir kullanim yapilamaz
		// int a bir metod degiskeni
		/*
		 * int a; System.out.println(a);
		 */

		// int g = 2147483647;
		long f = 2147483648L;
		System.out.println("f" + f);

		System.out.println(0x123);// Hexadecimal
		System.out.println(0B1010);// Binary 10 sonucu verir
		System.out.println(0565);// Octal sekizlik sayi sist. cevirir

		double r = 1.2345678E-3;
		System.out.println(r);

		long telNo = 555_555_55_55L;// tarih,maas ayraci olarak kullanilabilir
		System.out.println(telNo);
	}

}
