package Inheritence;

public class Kopek extends Hayvan {// sub class

	public Kopek() {
		super();
		this.isim = "Adsiz";
		System.out.println("Kopek sınıfı parametresiz ");
	}

	public Kopek(String isim) {
		super(isim);
		// this.isim = isim; bu satır gereksiz zaten super() bu islemi yapar
		System.out.println("Kopek  parametreli");

	}

	public static void main(String[] args) {

		Kopek kopek1 = new Kopek();// parametresiz hayvan parametresiz kopek
		kopek1.setIsim("Pamuk");// metot da kullanilir
		System.out.println("Merhaba! Benim Adim " + kopek1.getIsim() + "\n");

		Kopek kopek2 = new Kopek();// parametresiz hayvan parametresiz kopek
		System.out.println("Merhaba, Benim Adim da " + kopek2.isim + "\n");

		Kopek kopek3 = new Kopek("Akilli");// parametreli hayvan parametreli kopek
		System.out.println("Bende " + kopek3.isim + "\n");

		Kus kus = new Kus();
		kus.isim = "Mavis";

		Hayvan[] hayvan = new Hayvan[3];

		hayvan[0] = kopek1;
		System.out.println("\n\n1.Hayvan Adi : " + hayvan[0].isim);
		turKontrolEt(hayvan[0]);

		hayvan[1] = kopek3;
		System.out.println("2.Hayvan Adi : " + hayvan[1].isim);
		turKontrolEt(hayvan[1]);

		hayvan[2] = kus;
		System.out.println("3.Hayvan Adi : " + hayvan[2].isim);
		turKontrolEt(hayvan[2]);

	}

}
