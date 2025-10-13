package object;

public class Encapsulation {
	
	public char oprt;
	private double num1,num2;
	
	public Encapsulation() {
		// TODO Auto-generated constructor stub
	}

	public Encapsulation(char oprt,  double num1, double num2) {//parametreli constroctor
		this.oprt = oprt;
		this.num1 = num1;
		this.num2 = num2;
		if (oprt == '+') {
			System.out.println("Toplam = "+topla(num1, num2));	
		}
	}

	public double getNum1() {
		return num1;
	}

	public void setNum1(double num1) {
		this.num1 = num1;
		if (num1==0.0) {
			System.out.println("Toplama islemindeki etkisiz eleman!!");
		}
	}

	public double getNum2() {
		return num2;
	}

	public void setNum2(double num2) {
		this.num2 = num2;
	}
	
	public double topla(double num1,double num2) {
		return this.num1+this.num2;
	}
	//ALT + SHIFT + S 
	//for auto parameter constructor 
	//for auto getter and setter method 
}
