package AbstractClasses;

abstract class MuzikAleti{
	abstract void cal();
	void bakimYap() {
		System.out.println("Gitar'a bakim yapildi.");
	}
}

interface tasinabilir{
	void tasi();	//public abstract otomatik
}





public class Gitar extends MuzikAleti implements tasinabilir {

    public void tasi() {//public olarak override etmek gerekir
		System.out.println("Cantada tasiniyor.");
	}
	
	void cal() {
		System.out.println("Tirintirintiririm");
	}
	
	void akortEt() {
		System.out.println("Gitar Akort ayari yapiliyor.");
	}
	
	public static void main(String[] args) {
		
		Gitar gitarim = new Gitar();
		gitarim.akortEt();
		gitarim.cal();
		gitarim.bakimYap();
		System.out.println("Gitarim Calisiyor");

		//Soyut Sinif turunde Polimorfik tanim
		MuzikAleti gitar1 = new Gitar();
		gitar1.cal();//Gitar sinifinin cal metodu calisir.
		gitar1.bakimYap();//Ortak metod miras aldi
		//gitar1.akortEt(); Erisemez MuzikAleti sinifinda yok Compile Time Hatasi verir
		
		//Interface turunde Polimorfik tanim
		tasinabilir gitar2 = new Gitar();
		gitar2.tasi();//gitarin tasi metodu cagirilir
		//gitar2.cal() Erisemez Compile Time hatasi
		//gitar2.akortEt(); Erisemez Compile Time hatasi
		
	}
	

}
