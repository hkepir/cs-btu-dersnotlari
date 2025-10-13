package ders;

import java.util.Random;

//The public type must be defined its own file


public class Top {
	int topNo;
	
	void atis() {
		System.out.println("Top atildi.");
	}
	public static void ToplariNumaralandir(Top[] toplar ) {
		Random random = new Random();
		
		for (int i = 0; i < toplar.length; i++) {//Referanslari objelere bagladik
			toplar[i] = new Top();
			toplar[i].topNo = random.nextInt(10);
		}
		
		for (Top eleman : toplar) {
			System.out.println(eleman.topNo);
		}
	}
}

class Futbol_topu extends Top{

	@Override
	void atis() {
		super.atis();
		System.out.println("Gol !");
	}
	
	
}

class Basketbol_topu extends Top{

	@Override
	void atis() {
		super.atis();
		System.out.println("Basket !");
	}
	
}

