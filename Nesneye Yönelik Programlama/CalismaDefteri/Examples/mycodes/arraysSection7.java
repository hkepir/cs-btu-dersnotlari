package mycodes;

import java.util.Arrays;
import java.util.Random;

public class arraysSection7 {

	// Passing Arrays to Methods
	// When passing an array to a method, the reference of the array is passed to the method
	public static void printArray(int[] array) {
		for (int i : array) {
			System.out.println(i);
		}
	}
	
	//Returning an Array from a Method
	//When a method returns an array, the reference of the array is returned
	public static int[] reverse (int[] list) {
		int[] result;
		result = new int[list.length]; 
		
		for (int i = 0,j = result.length-1; i < list.length; i++,j--) {
			result[j]=list[i];
		}
		
		return result;//result dizisi 'nin referansını dondurur
	}
 	public static void main(String[] args) {
 		
		// DeckofCards
		// -------------------------------------------------------------------
		int[] deck = new int[52];
		String[] suits = { "Spades", "Hearts", "Diamonds", "Clubs" };
		String[] rankStrings = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };

		// Initialize the cards
		for (int i = 0; i < deck.length; i++) {
			deck[i] = i;
		}

		// Shuffle the cards randomly
		Random m = new Random();
		for (int i = 0; i < deck.length; i++) {
			int index = m.nextInt(deck.length);// 0 - 51 arasinda degerler olusturur
			// alternatively
			// int index = (int)(Math.random() * deck.length);
			int temp = deck[i];
			deck[i] = deck[index];
			deck[index] = temp;
		}

		for (int i = 0; i < suits.length; i++) {// sadece 4 kartı gösterecek sekilde ayaralanmis
			String suit = suits[deck[i] / 13]; // Turu belirlemek icin
			String rank = rankStrings[deck[i] % 13];// Rutbeyi belirlemek icin
			// Kart sayisi ile rutbe sayisinin modu 0 ve 12 arasinda degerler verir
			// bolumu ise [0.3] araliginda deger verir
			System.out.println("Card number " + deck[i] + ": " + rank + " of " + suit);
		}
		
		// ------------------------------------------------------------------------------------

		// FindtheOutput

		int[] list = { 1, 2, 3, 4, 5, 6 };
		int temp = list[0];

		for (int i = 0; i < list.length - 1; i++) {
			list[i] = list[i + 1];
		}
		list[list.length - 1] = temp;
		for (int eleman : list) {
			System.out.println(eleman);
		}

		// ------------------------------------------------------------------------------------
		
		//print and reverse array
		int[] deneme = new int[] {1,2,3};
		System.out.println("Dizinin ilk hali ");
		printArray(deneme);
		System.out.println("Dizinin reverse hali "+reverse(deneme));
		

		System.out.println("Dizinin reverse hali " + Arrays.toString(reverse(deneme)));
		deneme=reverse(deneme);		
		printArray(deneme);
		
		System.out.println("-----------------------\n");
		int[] dizim2 = {1, 2, 3, 5, 4};
		 for (int i = 0,j = dizim2.length - 1; i<j; i++, j--) {
		  
		 int gecici = dizim2[i];
		  dizim2[i] = dizim2[j];
		  dizim2[j] = gecici;
		 }
		//printArray(dizim2);
		
		
		//-------------------------------------------------------------------------------------
		
		String [] hayvanlar = {"kedi","kopek","kus","balik","at"};
		
		System.out.println("Hayvanlar grubu ilk hali : "+	Arrays.toString(hayvanlar));
		Arrays.fill(hayvanlar,"At");
		System.out.println("Degistirilmis hayvanlar grubu :"+Arrays.toString(hayvanlar));
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		// Object Arrays

	}

}
