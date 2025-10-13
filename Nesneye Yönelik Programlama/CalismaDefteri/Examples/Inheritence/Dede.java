package Inheritence;

public class Dede {

	public Dede() {
		//super() yazarsan acikca cagri yapıldı yazmasanda gizlice cagriliyordu
		System.out.println("Dede");
	}
}

class Baba extends Dede {
	public Baba() {
		//super()
		System.out.println("Baba");
	}
}

class Torun extends Baba {
	public Torun() {
		//super()
		System.out.println("Torun");
	}
	
	@Override
	public String toString() {
	    return "Bu bir Torun nesnesidir.";
	}

}