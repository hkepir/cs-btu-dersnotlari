package lablar;

//import java.util.Iterator;

//import java.util.Random;

public class lab3 {

	public static void main(String[] args) {
		/*
		 * int frekans = 5; int derece = 0;
		 * 
		 * while(derece<=360) { double radyan = Math.toRadians(derece); double sinDeg =
		 * Math.sin(frekans*radyan); System.out.println("sin degeri: "+sinDeg);
		 * 
		 * int yildizs = (int)(Math.abs(sinDeg)*10);//abs mutlak deger alır //yildiz
		 * sayisi degeri belirlendi
		 * 
		 * for (int i = 0; i < yildizs; i++) { System.out.println("*"); }
		 * System.out.println((sinDeg>=0)?"sin degeri pozitif":"sin degeri negatif");
		 * //System.out.println((sinDeg>=0)?true:false);
		 * 
		 * //Devam etmek ister misiniz int option = JOptionPane.showConfirmDialog(null,
		 * "Devam etmek istiyor musunuz?","Onay Kutusu",JOptionPane.YES_OPTION);
		 * if(option!= JOptionPane.YES_OPTION) {
		 * System.out.println("Kullanici islemi durdurdu"); break; } derece +=15; }
		 */

		// Monte Carlo
		// Dikkat edilemsi gereken Noktalar

		int toplamnoktaSayisi = 10_000_000;
		int icindekiNoktaS = 0;
		// int x = (int)(Math.random());//0-1

		for (int i = 0; i < toplamnoktaSayisi; i++) {
			
			double x = -1 + 2 * Math.random();
			double y = -1 + 2 * Math.random();
			boolean sonuc = (Math.pow(x, 2) + Math.pow(y, 2) <= 1);
			// true ise nokta ceyrek dairenin icinde
			if (sonuc == true) {
				icindekiNoktaS++;

			}
		}

		double piYaklasik = 4 * (double) icindekiNoktaS / (double) toplamnoktaSayisi;
		System.out.println(piYaklasik);

	}
}
