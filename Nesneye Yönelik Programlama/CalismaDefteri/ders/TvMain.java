package ders;

public class TvMain {

	public static void main(String[] args) {
		TV tv1 = new TV();
		tv1.setChannel(2);
		System.out.println("tv1 channel is "+tv1.channel+ " and volume level is "+tv1.volumeLevel);
		//ilk atanan degerler degismez 
		//tv acik degil
		
		TV tv2 = new TV();
		tv2.turnOn();
		tv2.channel = 5;
		tv2.channelUp();
		tv2.volumelUp();
		System.out.println("tv2 channel is "+tv2.channel+ " and volume level is "+tv2.volumeLevel);
	
	
	}

}
