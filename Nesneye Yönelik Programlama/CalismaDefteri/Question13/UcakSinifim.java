package Question13;

import java.util.Arrays;
import java.util.Random;

class Ucak implements Comparable<Ucak> {
	int kanat_uzunlugu;
	public Ucak() {
		kanat_uzunlugu = 8;
	}
	Ucak(int k){
		kanat_uzunlugu = k;
	}
	
	public int compareTo(Ucak u) {
		if (this.kanat_uzunlugu < u.kanat_uzunlugu) {
			return -10;
		} else if(this.kanat_uzunlugu > u.kanat_uzunlugu){
			return 10;
		}else {
			return 0;
		}
	}
}

public class UcakSinifim {
	public static void main(String[] args) {
		/*
		Ucak u1 = new Ucak();
		Ucak u2 = new Ucak(16);
		int sonuc = u1.compareTo(u2);
		System.out.println(sonuc);//10
		
		*/
		Random random = new Random();
		Ucak[] ucaklar = new Ucak[5];
		for (int i = 0; i < ucaklar.length; i++) {
			ucaklar[i] = new Ucak(random.nextInt(21)+20);//dinamic binding
		}
			
		Arrays.sort(ucaklar);//kucuktan buyuge siralar
							//Diziyi kalici olarak degistirir
		for (int i = 0; i < ucaklar.length; i++) {
			System.out.println((i+1)+". ucak : "+ ucaklar[i].kanat_uzunlugu);
		}
	}
}