package Question11;

class Canli {

	public Canli() {
		System.out.println("Canli!!");
	}

	int agirlik;
}

class Hayvan extends Canli {// superclass
	//private String renk;
	private int yas;

	public Hayvan() {
		System.out.println("Hayvan!!!");
	}

	void sesVer() {
		System.out.println("Hayvan ses verdi");
	}

	void setYas(int yas) {
		this.yas = yas;
	}

	int getYas() {
		return yas;
	}
}

class Kedi extends Hayvan {// subclass
	boolean kuyruk;

	public Kedi() {
	System.out.println("Kedi!!!");
	}

	@Override
	void sesVer() {// ayni imzali
		super.sesVer();
		// sesVer(); StackOverFlowError S
		System.out.println("Miyav");
	}

}

public class Sinifim {
	public static void main(String[] args) {
		Hayvan h = new Hayvan();
		h.sesVer();

		Kedi tekir = new Kedi();
		Kedi boncuk = new Kedi();
		boncuk = tekir;
		// tekir.yas = 3;
		tekir.sesVer();
		tekir.setYas(3);
		System.out.println("Tekir'in yasi " + tekir.getYas());

		System.out.println("JVM'de tekir'in adresi(sanal fiziksel edres): " + tekir.toString());
		System.out.println("Boncuk'un adresi: " + boncuk.toString());
	}
}
