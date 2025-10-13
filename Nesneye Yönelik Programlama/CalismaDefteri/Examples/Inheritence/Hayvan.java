package Inheritence;

public class Hayvan {//super class

	public String isim;
	public int yas;
	public String renk;
	public int ayakSayisi;

	public Hayvan() {
		System.out.println("Hayvan parametresiz constructor cagirildi ");
	}

	public Hayvan(String isim) {
		this.isim = isim;
		System.out.println("Hayvan sinifi parametreli constructor cagirildi");
	}

	public String getIsim() {
		return isim;
	}

	public void setIsim(String isim) {
		this.isim = isim;
	}
	public static void turKontrolEt(Hayvan hayvan) {
	    if (hayvan instanceof Kopek) {
	        System.out.println("Hayvan bir Köpektir.\n");
	    } else if (hayvan instanceof Kus) {
	        System.out.println("Hayvan bir Kustur.\n");
	    } else {
	        System.out.println("Hayvan türü bilinmiyor.\n");
	    }
	}
}
