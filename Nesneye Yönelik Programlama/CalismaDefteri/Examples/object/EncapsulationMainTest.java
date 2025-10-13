package object;

public class EncapsulationMainTest {

	public static void main(String[] args) {
		
		Encapsulation islem = new Encapsulation('+', 1.0, 2.0);
		
		System.out.println("Constructor ile atanan num1 degeri : "+islem.getNum1());
		System.out.println("Constructor ile atanan num2 degeri : "+islem.getNum2());
		
		Encapsulation encapsulation = new Encapsulation();
		encapsulation.setNum2(2.2);
		encapsulation.setNum1(5.5);

		System.out.println("Toplam (set-get ile) = " + (encapsulation.getNum1() + encapsulation.getNum2()));

		encapsulation.setNum1(0.0);
	}

}
//Class degiskeni private oldugunda iki yol ile erisilebilir
//1-Paramtreli constructor yardımı ile
//2-getter(degere erismek icin) ve setter(ile erisip deger atamak icin) metotlar ile