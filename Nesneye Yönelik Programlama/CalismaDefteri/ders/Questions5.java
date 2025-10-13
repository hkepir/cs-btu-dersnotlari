package ders;

import java.util.Scanner;

public class Questions5 {

	public static void main(String[] args) {

		
		// Palindrom Mu

		Scanner in = new Scanner(System.in);
/*
		System.out.println("Bir metin giriniz: ");
		String s = in.nextLine();

		int bas = 0;
		int son = s.length() - 1;

		boolean palindrom = true;

		while (bas < son) {
			if (s.charAt(son) != s.charAt(bas)) {
				palindrom = false;
				break;
			}
			bas++;
			son--;

		}
		if (palindrom) {
			System.out.println(s + " palindrom.");
		} else {
			System.out.println(s + " palindrom degil.");
		}
		
	//Asal Sayilar
		
		final int ASAL_SAYI_ADEDI = 50;
		final int SATIRDAKI_ELEMAN_S = 10;
		
		int adet = 0;//su ana kadar bulunan asal sayi adedi
		int sayi = 2;//kontrol edilecek ilk sayi
		
		System.out.println("\nIlk 50 Asal Sayi");
		System.out.println("-----------------------------");
		while (adet < ASAL_SAYI_ADEDI) {
			boolean asalmi = true;
			
			//asallik kontrolu
			for (int bolen = 2; bolen <= sayi/2; bolen++) {
				if (sayi % bolen == 0) {
					asalmi = false;
					break;
				}
			}
			
			if (asalmi) {
				adet++;
				if (adet % SATIRDAKI_ELEMAN_S == 0) {
					System.out.println(sayi);//satir sonu
				}
				else {
					System.out.print(sayi+" ");//Ayni satira yaz
				}
			}
			sayi++;
			//in.close();
		}
		
		//Ornek 5.1
		
		System.out.println("Enter an integer, the input if it is 0 :");
		int pozitif=0,negatif=0,total=0,count=0;
		double avarage=0.0;
		
		while (true) {
			int number = in.nextInt();
			
			if (number==0) {
				break;
			}
			else if(number>0) {
				pozitif++;
			}else {
				negatif++;
			}
			total+=number;
			count++;
		}
		if (count>0) {
			avarage = (double)total/count;
		
		System.out.println("The number of positives is "+pozitif);
		System.out.println("The number of negatives is "+negatif);
		System.out.println("The total is "+total);
		System.out.println("The avarage is "+avarage);
		}else {
			System.out.println("No numbers are entered except 0");
		}
			
		
*/		
		//5.2
	
		final int NUMBER_OF_QUESTIONS = 3;
		int correctCount = 0;
		int Count1 = 1;
		long startTime = System.currentTimeMillis();
		String output = " ";
		
		while (Count1 <= NUMBER_OF_QUESTIONS) {
			//1.Generate two random single-digit integers
			int number1 = (int)(Math.random()*10);//0-9
			int number2 = (int)(Math.random()*10);
			
			//If number1 < number2, swap number1 with number2
			if (number1 < number2) {
				int temp = number1;
				number1 = number2;
				number2 = temp;
			}
			
			//Ask students
			System.out.println("\nWhat is "+number1+" - "+number2+"? ");
			int answer = in.nextInt();
			
			if (number1-number2 == answer) {
				System.out.println("Correct.Congratulations :))");
			}else {
				System.out.println("Your answer is wrong :'( \n"+number1+" - "+number2+" should be "+ (number1-number2));
			}	
				output += "\n"+number1+"-"+number2+"="+answer+((number1-number2==answer)?" correct":" wrong");
				Count1++;	
		}	
			
		long endTime = System.currentTimeMillis();
		long testTime = endTime-startTime;
		System.out.println("Correct count is "+correctCount+"\nTest time is "+testTime/1000+ " seconds\n"+output);
	
	//kg den g cevirici
/*		
		System.out.println("Kilogram              Gram");
		System.out.println("-----------------------------");
		double kg,g;
		int t = 0;
		int[] hesaplanacaklar = {1,2,3,4,5};
		while (t<hesaplanacaklar.length) {
			for (int i : hesaplanacaklar) {
				kg = i;
				g = kg*Math.pow(10.00,3.00);
			//kg = in.nextDouble();
			//System.out.println(kg+" kg = "+g+" g ");
			System.out.printf("%7f\t%.3f\n",kg,g);
			t++;
			}
		}
*/	
		
		

		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
}
