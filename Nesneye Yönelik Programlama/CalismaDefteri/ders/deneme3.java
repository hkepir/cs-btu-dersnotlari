package ders;

import java.util.Scanner;
//import java.util.StringTokenizer;

public class deneme3 {// Hafta3 derste yapılanlar

	public static void main(String[] args) {

//------------------------------------------Euler Sabiti Hesabı
		double e = 1.0, item = 1.0;
		int sayac = 2;
		while (sayac <= 1000) {// 1000 yazarsamda aynı
			e += item;
			item = item / sayac++;
		}
		System.out.println(e);
//---------------------------------------------------------------
		
		/*
		 int yil =(int)((Math.log10(2))/(Math.log10(1.07))); System.out.println(yil);
		 döngü ile yaparken yılı sıfırdan baslat
		*/

		
		//-------------------------------------------------------------------------------------------------------------------------
		
		Scanner i = new Scanner(System.in);
		System.out.println("10-99 arasinda bir sayi giriniz:");
		int tahmin = i.nextInt();
		// 0 ile 1 epsilon arası degerleri dondurur
		// random bir sınıf belirtir
		// (int)(Math.random()*100)//0 ile 99
		int r = (int) (Math.random() * 90) + 10;

		int tahmin_on, tahmin_bir, r_on, r_bir;
		tahmin_bir = tahmin % 10;
		tahmin_on = tahmin / 10;
		r_bir = r % 10;
		r_on = r / 10;
		// c de sistem saatine göre belirler srand a bağlıyorduk ve random sayı hep aynı
		// çıkıyordu
		// javada Math.random() otomatik çeker ve random sayı her zaman degisir
		System.out.println("Uretilen rastgele sayi " + r);
		// if yerine else if kullanırsa birden fazla koşula girer
		if (r == tahmin)
			System.out.println("Tebrikler! $10.000 kazandiniz.");
		else if ((tahmin_bir == r_on) && (tahmin_on == r_bir))
			System.out.println("Tebrikler! $3.000 kazandiniz.");
		else if ((tahmin_bir == r_bir) || (tahmin_bir == r_on) || (tahmin_on == r_bir) || (tahmin_on == r_on)) {
			System.out.println("Tebrikler $1.000 kazandiniz.");
		} else
			System.out.println("Kazanamadiniz");
		
		i.close();

//-------------------------------------------------------------------------------------------------------------------------
		
		String cumle="rad ar";
		int x=0;
		int y=cumle.length()-1;
		while(x<y) {
			if(cumle.charAt(x)!=cumle.charAt(y))
			{
				break;
			}
			x++;
			y--;
		}
		if(x<y)
			System.out.println("Cumle palindrom degil!");
		else
			System.out.println("Cumle palindrom");
	
//--------------------------------------------------------------------------------------------------------------------------
	/*
		Scanner i=new Scanner(System.in);
		System.out.println("Enter an integer: ");
		String cumle;
		cumle=i.nextLine();
		StringTokenizer st=new StringTokenizer(cumle," "); //import java.util.StringTokenizer;
		int sum=0,ps=0,ns=0;
		double ort=0.0;
		
		while(st.hasMoreTokens()) {
			String jeton=st.nextToken(); //"1"
			int a=Integer.parseInt(jeton);
			sum+=a;
			ps+=(a>=0)?1:0;
			ns+=(a<0)?1:0;
		}
		ort=(double)sum/(ns+ps);
		System.out.println("Toplam: "+sum+", Ortalama: "+ort+", PS: "+ps+", NS: "+ns);
		
	*/
	
//--------------------------------------------------------------------------------------------------------------------------
	/*	
		Scanner i=new Scanner(System.in);
		System.out.println("Sayiyi giriniz: ");
		int sayi=i.nextInt();
		int k=2;
		//sayi=24
		while(sayi>1) {
			if(sayi%k==0) {
				System.out.print(k+", ");
				sayi/=k;
			}
			else
				k++;
		}
	*/	
		
		
		
	}
}
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		

