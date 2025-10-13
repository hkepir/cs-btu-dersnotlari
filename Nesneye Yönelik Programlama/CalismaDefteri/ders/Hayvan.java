package ders;

class Canli{
	int agirlik;
}

class Hayvan extends Canli{//ata class super class

	private String renk;
	int yas;
	
	//Method overloading
	void sesver() {
		System.out.println("Miyav.");
	}
	
	void sesVer() {
		System.out.println("Hayvan ses verdi.");
	}
	
	void setrenk(String renk) {
		this.renk=renk;
	}
	
	String getrenk() {
		return renk;
	}
	
	public String toString() {
		return "Bu bir hayvan sinifidir.";
	}
}

class Kedim extends Hayvan {//alt sınıf sub class //Kedi hem hayvanın hemde canlının mirascısıdır
	boolean kuyruk;
	void sesVer() {
		super.sesVer();
		System.out.println("Miyav");//miras aldigigmiz bir metodu degistirmek " method overriding " 
	}

}


