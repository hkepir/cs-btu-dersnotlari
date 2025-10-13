package mycodes;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Random;
import java.util.Scanner;
public class loopsArrays {

	public static void main(String[] args) {
		
		//Math.random------------------------------------------------------------------------------------ 
		
		for (int i = 0; i < 10; i++) {
			System.out.println((i + 1 )+ ".Sayi :" + Math.random()); // 0.0 ile 0.1 arası degerler üretir
		}
		for (int i = 0; i < 10; i++) {
			System.out.println((i + 11) + ".Sayi :" + (int) (Math.random() * 100));
		}

		int[] myList = new int[10];
		for (int j = 0; j < myList.length; j++) {
			myList[j] = (int) (Math.random() * 100);
			System.out.println(myList[j] + " ");
		}
		int max = myList[0];
		for (int j = 0; j < myList.length; j++) {
			if (myList[j] > max)//eğer buraya bir noktalı virgül gelirse kod boşa döner
			{
				max = myList[j];
			}
		}
		System.out.println("Listedeki max eleman: " + max);
		
		//Arrays
		
		int[] dizi;
		dizi = new int[10];
		
		int[] dizi1 = new int[20];
		
		int[] dizi2 = {1,2,3};
		
		int[] dizi3;
		
		int[] dizi4 = new int[] {0,0,0,0,0};
		
		
		
		System.out.println("dizi 4 'un uzunlugu: "+dizi4.length);
		
		for (int i = 0; i< dizi4.length; i++) {
			System.out.println("dizinin "+(i+1)+". elemani: "+dizi4[i]);
		}
		
		//String 
		String[] isimDizisi = {"Ali","Veli","Bilal","Ayse","Ahmet"};
		System.out.println("\n---Dizinin elemanlari---");
		
		for (int i = 0; i < isimDizisi.length; i++) {
			System.out.println(isimDizisi[i]);
		}
		//-------------------------------------------------
		StringBuilder sb = new StringBuilder("Merhaba");
		sb.append(" Dünya");
		sb.append("!"); // "Merhaba Dünya!" olur

		System.out.println(sb.toString()); // Ekrana: Merhaba Dünya! yazdırır
		//-------------------------------------------------
		
		//Soru-Cevap
		
		      /*
		    	Scanner scanner = new Scanner(System.in);

		        // Step 1: Get the 10-digit card number from the user
		        System.out.println("10 basamaklı kart numarasını giriniz:");
		        String userCardNumber = scanner.nextLine();

		        // Step 2: Generate 3 random 10-digit card numbers
		        Random random = new Random();
		        String[] randomCardNumbers = new String[3];
		        System.out.println("---Rastgele oluşturulan kart numaraları---");
		        for (int i = 0; i < randomCardNumbers.length; i++) {
		            StringBuilder cardNumber = new StringBuilder();
		            for (int j = 0; j < 10; j++) {
		                cardNumber.append(random.nextInt(10)); // Generate a random digit (0-9)
		            }
		            randomCardNumbers[i] = cardNumber.toString();
		            System.out.println("Kart " + (i + 1) + ": " + randomCardNumbers[i]);
		        }

		        // Step 3: Compare the user's card number with the generated numbers
		        boolean isValid = false;
		        for (String randomCard : randomCardNumbers) {
		            if (userCardNumber.equals(randomCard)) {
		                isValid = true;
		                break;
		            }
		        }

		        // Step 4: Print the result
		        if (isValid) {
		            System.out.println("Geçerli ID");
		        } else {
		            System.out.println("Geçersiz ID");
		        }

		        scanner.close(); // Close the scanner
		    */
		
		//Soru2-Cevap
/*	 	
		   Scanner scanner = new Scanner(System.in);

	        // 1. Kullanıcıdan dizi boyutunu al
	        System.out.println("Kaç elemanlı bir dizi oluşturmak istiyorsunuz?");
	        int size = scanner.nextInt();
	        scanner.nextLine(); // Tam sayıdan sonra gelen satırı temizlemek için

	        // 2. String türünde bir dizi oluştur
	        String[] stringArray = new String[size];

	        // 3. Kullanıcıdan dizi elemanlarını al
	        System.out.println("Dizinin elemanlarını girin (sayılar):");
	        for (int i = 0; i < size; i++) {
	            System.out.print((i + 1) + ". eleman: ");
	            stringArray[i] = scanner.nextLine(); // Elemanları String olarak al
	        }

	        // 4. Elemanları String'den int'e çevir ve int dizisi oluştur
	        int[] intArray = new int[size];
	        for (int i = 0; i < size; i++) {
	            intArray[i] = Integer.parseInt(stringArray[i]); // Çevirme işlemi
	        }

	        // 5. Toplamı ve ortalamayı hesapla
	        int toplam = 0;
	        for (int value : intArray) {
	            toplam += value;
	        }
	        double ortalama = (double) toplam / size;

	        // 6. Sonuçları yazdır
	        System.out.println("\nDizinin elemanlarının toplamı: " + toplam);
	        System.out.println("Dizinin elemanlarının ortalaması: " + ortalama);

	        scanner.close();
*/
		//int
		int[] sayilar = new int[6];
		sayilar[0] = 1;
		sayilar[1] = 2;
		sayilar[2] = 3;
		sayilar[3] = 4;
		sayilar[4] = 5;
		//dizinin son elemanına otomatik "0" sıfır atanır.
		for (int i = 0; i < sayilar.length; i++) {
			System.out.println(sayilar[i]);
		}
		/* aynı işlevi görür
		for (int i : sayilar) {
			System.out.println(i);
		}
		*/
		
		//double kullanıcıdan
		
		Scanner i = new Scanner(System.in);
		System.out.println("Dizinin boyutunu giriniz:");
		int diziUzunluk = i.nextInt();
		
		double[] doubleDizi = new double [diziUzunluk];
		
		for (int j = 0; j < doubleDizi.length; j++) {
			System.out.println("Dizinin "+ (j)+".index degerini giriniz :");
			doubleDizi[j] = i.nextDouble();//consoldan giriş yaparken , ile gir
		}
		
		for (int j = 0; j < doubleDizi.length; j++) {
			System.out.println(doubleDizi[j]);
		}
		
		//char 
		
		char[] karakterler = {'*','.','/','-','+','&'};
		
		System.out.println("\n---Write CharLoop with Foreach---");
		for (char c : karakterler) {
			System.out.println(c);
		}
		
		//------------------------------------------------------------------------------------------
		System.out.println("\n\n\n");
		String[] animalString = {"cat","dog","rat","bird"};
		
		for (String sayac : animalString) {
			System.out.println(sayac);
		}
		
		for(int k =0; k<animalString.length; k++) {
			System.out.println(animalString[k]);
		}
		
		ArrayList<Character> karaktr = new ArrayList<Character>();
		karaktr.add('a');
		karaktr.add('b');
		karaktr.add('c');
		karaktr.add('d');
		
		for (Character c : karaktr) {
			System.out.println(c);
		}
		
		
		//Random Shuffling 
		
		int[] array = {1,2,3,4,5};
		shuffleArray(array);
		
		System.out.println("Karistirilmis Dizi:");
		
		for (int num : array) {
			System.out.println(num+" ");
		}
 	
		System.out.println("\n\n\n");
		Arrays.sort(array);//Diziyi kucukten buyuge siralar
		for (int num : array) {
			System.out.println(num+" ");
		}
 	
		//Shifting Elements 
		
		int[] array2 = {11,22,33,44,55};
		shiftingElements(array2);
		for (int num : array2) {
			System.out.println(num+" ");
		}
	
	
	
	
	
	
	
	
	
	
		//Maindesin
	
	i.close();
	}
	
	//Diger metotlar
	public static void shuffleArray(int[] array) {//Tum diziyi karistirir ve kalici olarak bozar
		Random rand = new Random();
		
		for (int i = 0; i < array.length; i++) {
			int j = rand.nextInt(i+1);//0-i arasinda bir index
		//Swap degistir
			int temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	
	public static void shiftingElements(int[] array2) {//her elemani bir one tasir ilk elemani son elemana atar
		int temp = array2[0];
		
		for (int i = 1; i < array2.length; i++) {
			array2[i-1]= array2[i];
		}
		array2[array2.length-1]=temp;
	}
















//Classtasin

}
