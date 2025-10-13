package mycodes;

public class datatypes {

	public static void main(String[] args) {
		// byte -128 ve 127 arasinda degerler alir. 1 byte
		byte sayi = 127;
		System.out.println(sayi);

		// short -32768 ve 32767 arasinda degerler alir. 2 byte
		// int 9 bas.kadar cikar. 4 byte
		// long 8 byte

		long maxLong = Long.MAX_VALUE;
		long minLong = Long.MIN_VALUE;
		System.out.println(maxLong);
		System.out.println(minLong);
		long sayimLong = 45687821L;
		System.out.println(sayimLong);

		// float 4 byte
		float maxFloat = Float.MAX_VALUE;
		float minFloat = Float.MIN_VALUE;
		System.out.println("maxFloat " + maxFloat + "\nminFloat " + minFloat);

		// double 8 byte
		double sayimDouble = 10.00;
		System.out.println("Formam " + sayimDouble);

		// boolean
		// sadece true false degerleri tutar
		boolean sonuc = 5 > 2;
		sonuc = 5 < 2;
		System.out.println(sonuc);

		// char
		char karakter = '?';// Tek tırnak //string " " çift tırnak
		System.out.println(karakter);

		// string
		String string = "Hilal Kepir" + "\n17.03.2005" + "\nBtuBm";
		System.out.println(string);

		// Type Conversion

		// String to int
		String str = "5";
		String str2 = "5";
		System.out.println(str + str2);// 55

		int deger = Integer.parseInt(str); // int deger = Integer.valueOf(str);
		int deger2 = Integer.valueOf(str2);
		System.out.println(deger + deger2);// 10

		// Yapılamaz!!!
		/*
		 * String isim = "Ahmet"; int isimint = Integer.parseInt(isim);
		 * System.out.println(isimint);
		 */

		// int to String

		int x1 = 21;
		System.out.println(x1 + 5);// 26
		// String s = String.valueOf(x);
		String s = String.valueOf(x1);
		System.out.println(s + 5);// 215

		// double to int

		double d = 16.26;
		int e = (int) d;// Type Casting
		System.out.println(e + 4);// 20

		// Diger Donusumler
		/*
		 * int sayi1 = 1234; double sayi2 = (double)sayi1;
		 * 
		 * float sayi1 = 12.3f; long sayi2 = (long)sayi1;
		 * 
		 * long sayi1 = 123; float sayi2 = (float)sayi1;
		 * 
		 * long a = 123; String deger1 = Long.toString(a);
		 * 
		 * float b = 123f; String deger2 = Float.toString(b);
		 * 
		 * byte c = 10; String deger3 = Byte.toString(c);
		 */
		
		char x = 'a';
		char y = 'c';
		System.out.println(++x);//b
		System.out.println(y++);//c
		System.out.println(x - y);//-2
		
		//-----------------------------------------------------------------------------------------
		
		final int sbtsayac = 0;// final degiskenler degistirilemez degeri bir kere atanır !
		int sayac = 1;
		
		for (sayac = 5; sayac < 8; sayac++) {
			System.out.println(sayac);
		}
		
		for (int i = 10; i < 15; i++) {
			System.out.println(i);
		}
		
		
		System.out.println("sayac: "+sayac);
		//System.out.println(i); it cannot be resolved  
		System.out.println(sbtsayac);
		//------------------------------------------------------------------------------------------
	}

}