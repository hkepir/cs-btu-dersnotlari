package Arayuz;
//interface icindeki tum metodlar soyuttur.
//Soyut metodlar kendini miras alan siniflarda kullanilmak zorundadir.

public class Ornek {
	
	public static void main(String[] args) {
		Isci isci = new Isci();
		isci.bolumYazdir();
		isci.ucretBelirle(912.23);
		System.out.println("Maas : "+isci.ucret());
		
		Yonetici yonetici = new Yonetici();
		yonetici.bolumYazdir();
		yonetici.ucretBelirle(1078.28);
		System.out.println("Maas : "+yonetici.ucret());
		
		Pazarlamaci pazarlamaci = new Pazarlamaci();
		pazarlamaci.bolumYazdir();
		pazarlamaci.ucretBelirle(976.45);
		pazarlamaci.komBelirle(50);
		System.out.println("Komisyon : "+pazarlamaci.komisyon);
		System.out.println("Maas : "+pazarlamaci.ucret());
	}
}
