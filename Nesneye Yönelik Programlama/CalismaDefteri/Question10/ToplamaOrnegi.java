package Question10;

public class ToplamaOrnegi {
	public static void main(String[] args) {
		Integer num1 = 100; // Autoboxing: int → Integer
		Integer num2 = 200; // Autoboxing: int → Integer
		Integer num3 = 300; // Autoboxing: int → Integer

		// Toplama işlemi (auto-unboxing)
		int toplam = num1 + num2 + num3; // Integer → int (auto-unboxing)

		System.out.println("Toplam: " + toplam); // 100 + 200 + 300 = 600
		
		Integer xInteger = 1;//autoboxing
		Integer y=new Integer("565");//String deger sayiya cevrilir nesnelesir
		System.out.println("y+1="+(y+1)); //y+1 ile autounboxing yaptık
		int g=y; //yine autounboxing
		
		//Integer[] nesne_dizisi= {new Integer(1),new Integer(2),new Integer(8)}; her bir Integer nesnesi manuel olusturulur
		Integer[] nesne_dizisi= {1,2,8};//autoboxing int -> Integer nesnesi 
		
		Double x2 = 3.5;//autoboxing 
		System.out.println(x2.intValue());//Wrapper metot
		System.out.println(x2.compareTo(4.5));//autoboxing double -> Double
		
		/*
		Integer x = null;
		int y = x; // NullPointerException
		 */

	}

}
