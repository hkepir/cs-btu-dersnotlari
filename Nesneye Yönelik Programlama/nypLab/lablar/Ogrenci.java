package lablar;

import java.util.Random;

public class Ogrenci {
	static String[] isimler= {"Ali","Ayse","Mehmet","Aslı","Serhat","Vehbi","Lale","Cabbar","Hasan","Nuri"};
	static int[] yaslar = {19,20,21,22,23,24,25,26,27,28};
	static String[] bolumler = {"Mimarlik","Bilgisayar","Matematik","Egitim Bilimleri","Ekonomi"};
	
	String ad;
	int yas;
	String bolumString;
	
	public Ogrenci() {
		Random rand = new Random();
		ad = isimler[rand.nextInt(isimler.length)];
		yas = yaslar[rand.nextInt(yaslar.length)];
		bolumString = bolumler[rand.nextInt(bolumler.length)];
	}
		
	public Ogrenci(String a, int y, String b) {
		ad = a;
		yas =y;
		bolumString=b;
	}
	
	public String getAd() {
		return ad;
	}
	
	public void setAd(String ad) {
		this.ad = ad;
	}
	
	public int getYas() {
		return yas;
	}
	
	public String getBolum() {
		return bolumler + "Muhendisligi";
	}
	
	public void setBolum(String b) {
		bolumString= b;
	}
	
	public void bilgileriYazdir() {
		System.out.println("Ad: "+ad+" Yas "+yas+"Bolum"+getBolum());
	}
	
	public static void main(String[] args) {
		
		Ogrenci[] ogrenciler = new Ogrenci[10];
		
		for (int i = 0; i < ogrenciler.length-1; i++) {
			ogrenciler[i]=new Ogrenci();
		}
		
		ogrenciler[9]=new Ogrenci("Hilal",19,"Bilgisayar");
		
		int i = 1;
		for (Ogrenci o : ogrenciler) {
			System.out.println((i++)+".ogrenci  "+o.getAd()+"-"+o.getYas()+"-"+o.bolumString);
		}
	}
}