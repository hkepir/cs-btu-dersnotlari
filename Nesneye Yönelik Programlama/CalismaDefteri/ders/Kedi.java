package ders;

class Kedi {//bu class'in mavi ucgen olma sebebi --> default 
	boolean kuyruk;
	String renk;
	
	Kedi() {
	}
	
	Kedi(boolean kuyruk){
		this.kuyruk = kuyruk;
		this.renk = "Beyaz";
	}
	
	/*
	Kedi(boolean k){
		k=kuyruk;
	}
	*/
	
	Kedi(boolean k,String r){
		kuyruk = k;
		renk = r;
	}
	
	void sesVer() {
		System.out.println("Miyav");
	}


	public static void main(String[] args) {
		
		//boolean x; //metot degiskeni (yerel degisken)
		//System.out.println(x);
		
		Kedi k1;
		k1 = new Kedi(true);
		
		Kedi k2 = new Kedi(true);
		Kedi k3 = new Kedi(false,"Sari");
		
		k1.sesVer();
		System.out.println("k1 kedisinin kuyrugu: "+k1.kuyruk+" Rengi: "+k1.renk);
	
		k2.sesVer();
		System.out.println("k2 kedisinin kuyrugu: "+k2.kuyruk+" Rengi: "+k2.renk);
		
		k3.sesVer();
		System.out.println("k3 kedisinin kuyrugu: "+k3.kuyruk+" Rengi: "+k3.renk);
		
	}

}

