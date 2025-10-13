package mycodes;

public class Kullanici {

	String ad;
	int yas;
	boolean uyelikAktifMi;
	
	public Kullanici(String ad,int yas,boolean uyelikAktifMi) {
		this.ad =ad;
		this.yas = yas;
		this.uyelikAktifMi = uyelikAktifMi;
	}
	
	public void bilgiYazdir() {
		System.out.println("Ad: "+ad+" Yas "+yas+" Uyelik Durum: "+uyelikAktifMi);
	}
	public static void main(String[] args) {
		Kullanici k1 = new Kullanici("Hamdi", 85, false);
		Kullanici k2 = new Kullanici("Hamdi", 80, true);
		
		Kullanici[] kullanicilar = new Kullanici[2];
		kullanicilar[0]= k1;
		kullanicilar[1]=k2;
		
		for (Kullanici eleman : kullanicilar) {
			eleman.bilgiYazdir();
		}

	}

}
