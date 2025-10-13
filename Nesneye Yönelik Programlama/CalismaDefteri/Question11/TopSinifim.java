package Question11;

class Top {
	void atis() {
		System.out.println("Top atildi");
	}
}

class Futbol_Topu extends Top{
	@Override
	void atis() {
		System.out.println("Gol");
	}	
}

class Basketbol_Topu extends Top{
	//@Override bunu yazmak opsiyonel
	void atis() {
		super.atis();//Ata siniftaki atis metoduna erismek icin kullandim
		System.out.println("Basket");
	}
}

public class TopSinifim{
	public static void main(String[] args) {
		Futbol_Topu ft = new Futbol_Topu();
		Basketbol_Topu bt = new Basketbol_Topu();
		atisi_cagir1(ft);//Gol
		
		//atisi_cagir(bt); Basketbol topu kabul edilmez
		//Cozum polimorfik metot
		polimorfik_atisi_cagir(bt);//Basket
		polimorfik_atisi_cagir(ft);//Basket
	}
	
	static void atisi_cagir1(Futbol_Topu x) {
		x.atis();
	}
	static void atisi_cagir2(Basketbol_Topu x) {
		x.atis();
	}
	static void polimorfik_atisi_cagir(Top x) {
		x.atis();
	}
}