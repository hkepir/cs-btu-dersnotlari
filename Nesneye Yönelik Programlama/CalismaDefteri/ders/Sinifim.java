package ders;

public class Sinifim {

	public static void main(String[] args) {
		
		Hayvan h = new Hayvan();
		h.sesVer();
		
		Kedim  tekirKedi = new Kedim();
		tekirKedi.sesVer();
		//tekirKedi.renk = "Beyaz"; private degisken direkt erisilemez 
		//degerin okunabilmesi icin setter ve getter metodlar
		tekirKedi.setrenk("Beyaz");
		System.out.println("Tekir kedi rengi "+tekirKedi.getrenk());
		tekirKedi.agirlik = 5;
		System.out.println(" "+tekirKedi.toString());
	}

}
