package mycodes;

public class Calisan {

	public int no;
	
	public String isim;
	
	public String soyisim;
	
	public int tecrube;
	
	public double maas;
	
	public Calisan() {//1.constructor metot
		
	}

	
	//alt+shift+s //2.constructor metot
	public Calisan(int no, String isim, String soyisim, int tecrube, double maas) {
		this.no = no;
		this.isim = isim;
		this.soyisim = soyisim;
		this.tecrube = tecrube;
		this.maas = maas;
	}
	
	public void calisanBilgileriYazdir()
	{
		System.out.println("-----------Calisan Bilgileri-----------");
		System.out.println("No : "+no);
		System.out.println("Isim : "+isim);
		System.out.println("Soyisim : "+soyisim);
		System.out.println("Tecrube : "+tecrube);
	}
	
	public void zamYap(int zamDegeri) {
		System.out.println("Maasiniza "+zamDegeri+" TL zam yapildi");
		System.out.println("Guncel maas :"+(maas+zamDegeri));
	}
		
	public void formatAt(String isletimSistemi,String kim) {
		System.out.println(kim+" "+isletimSistemi+" format atiyor");
	}
		

}

class Worker{
	
	String ad;
	int butce;
	
	public Worker() {
		// constructor
	}
	
	public void name(String ad) {
		this.ad =ad;
		System.out.println(ad);
	}
	
	
}