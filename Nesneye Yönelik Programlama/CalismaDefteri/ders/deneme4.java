package ders;

public class deneme4 {// hafta4 derste yazılan kodlar

	/*
	 * static void topla(int a,int b) { // System.out.println("toplam:"+(a+b));
	 * konsola_yaz("toplam:"+(a+b)); } static void topla(double a,double b) { //
	 * System.out.println("toplam:"+(a+b)); konsola_yaz("toplam:"+(a+b)); }
	 * 
	 * static void konsola_yaz(String sonuc) { System.out.println(sonuc); }
	 * 
	 */
	public static void main(String[] args) {

		boolean[] dolaplar = new boolean[101];

		for (int ogr = 1; ogr < dolaplar.length; ogr++) {
			for (int dolap = ogr; dolap < dolaplar.length; dolap += ogr) {
				dolaplar[dolap] = !dolaplar[dolap];
			}
		}
		System.out.println("Açık kalan dolaplar: ");
		for (int i = 1; i < dolaplar.length; i++) {
			if (dolaplar[i])
				System.out.println(i + " ");
		}
	}
}