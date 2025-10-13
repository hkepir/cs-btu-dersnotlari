package object;
import java.util.Random;

public class Kedi {

	String isim;
	String cins;
	
	static String[] kediIsimleri = {"Mavi","Mor","Beyaz","Pembe","Sari"};
	static String[] kediCinsleri = {"Tekir","Scott","Ozel","Tur","British"};

	Kedi(){//parametresiz constructor
		Random r = new Random();
		this.isim = kediIsimleri[r.nextInt(kediIsimleri.length)];
		this.cins = kediCinsleri[r.nextInt(kediCinsleri.length)];
	}
	
	Kedi(String isim,String cins){//parametreli constructor
		this.isim = isim;
		this.cins = cins;
	}
	
	public void yemek() {
		System.out.println(isim+" kedi mamasi yiyor...");
	}
	public void uyu() {
		System.out.println(isim+" uyuyor...");
	}
	public void oyunOyna() {
		System.out.println(isim +" oyun oynuyor...");
	}
	public void temizlik() {
		System.out.println(isim+" temizlendi...");
	}
	
	
	public static void main(String[] args) {
		
		Kedi[] kediler = new Kedi[5];
		
		for (int i = 0; i < kediler.length; i++) {
			kediler[i] = new Kedi();
		}
		
		Random random = new Random();
		for (Kedi kedi : kediler) {
			int secim = random.nextInt(4);
			
			switch (secim) {
			case 1:kedi.oyunOyna();break;
			case 2:kedi.temizlik();break;
			case 3:kedi.uyu();     break;
			case 4:kedi.yemek();   break;
			}
		}
		
		Kedi mykedi = new Kedi("Karam","Bilinmiyor");
		mykedi.uyu();

	}

}
