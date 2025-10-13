package ders;

public class TopMain {

	public static void main(String[] args) {

		Top t = new Top();
		t.atis();
		
		Top f = new Futbol_topu();
		f.atis();
		
		Top b = new Basketbol_topu();
		b.atis();
		
		System.out.println("\n");
		
		
		Top[] tops  = new Top[3];
		//tops[0].atis(); derleme hatasi verir " tops[0] " null. NullPointerException
		
		
		//referanslari objelere bagladik
		tops[0]= new Top();
		tops[0].atis();//Top atildi.
		
		tops[1] = new Futbol_topu();
		tops[1].atis();
		
		tops[2] = new Basketbol_topu();
		tops[2].atis();
		
		//metot ile referanslari objelere baglayalim
		
		
		Top[] numaraliToplar = new Top[5];
		Top.ToplariNumaralandir(numaraliToplar);//SinifAdi.staticmetot 
												//Boyle olsaydi bir nesne daha oluşturup onun üzerinden cagirmak gerekirdi
		
		

	}

}
