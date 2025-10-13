package Question13;
//DEEP COPY

class Oda2 implements Cloneable {
	int m2;

	Oda2(int m2) {
		this.m2 = m2;
	}

	@Override
	protected Object clone() throws CloneNotSupportedException {
		return super.clone();
	}

}

class Ev implements Cloneable {
	int i;
	Oda2 oda2;

	Ev(int i) {
		this.i = i;
		oda2 = new Oda2(20);
	}

	// burada parametresiz constructor de tanımlamam gerekmez mi??
	public Object clone() throws CloneNotSupportedException {
		Ev kopya = (Ev) super.clone();
		kopya.oda2 = (Oda2) this.oda2.clone();// The method clone() from the type Object is not visible
		return kopya; // Cozum: Oda sınıfına implementasyon ve clone() metodu override
	}
}

public class EvSinifim {
	public static void main(String[] args) throws CloneNotSupportedException {
		Ev ev1 = new Ev(10);
		Ev ev2 = (Ev) ev1.clone();

		System.out.println(ev1 == ev2);//false
		System.out.println(ev1.i);//10
		ev1.i = 80;
		System.out.println(ev1.i);//80
		System.out.println(ev2.i);//10

		System.out.println(ev1.oda2.m2);//20
		ev1.oda2.m2 = 30;
		System.out.println(ev1.oda2.m2);//30
		System.out.println(ev2.oda2.m2);//20
	}
}