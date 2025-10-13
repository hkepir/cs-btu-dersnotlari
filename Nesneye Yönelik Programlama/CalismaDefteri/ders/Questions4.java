package ders;

import java.util.Scanner;

import javax.swing.JOptionPane;

public class Questions4 {
	public static void main(String[] args) {
/*
		// 4.1 Soru
		Scanner input = new Scanner(System.in);
		System.out.println("Merkezden koseye uzunluk: ");

		double r = input.nextDouble();
		double s = 2 * r * Math.sin(Math.PI / 5);
		double area = (5 * s * s) / (4 * Math.tan(Math.PI / 5));

		System.out.println("Besgenin alani: " + area);
		input.close();
*/
		// 4.2 Soru
/*	
		        // Dünya yarıçapı sabiti
		        final double EARTH_R = 6371.01; // Kilometre cinsinden

		        // Kullanıcıdan iki noktanın enlem ve boylamını al
		        Scanner input = new Scanner(System.in);
		        input.useLocale(Locale.US);

		        System.out.print("Birinci noktanın enlem ve boylamını derece cinsinden girin (örn. 39.55, -116.25): ");
		        double x1 = input.nextDouble();
		        double y1 = input.nextDouble();

		        System.out.print("İkinci noktanın enlem ve boylamını derece cinsinden girin (örn. 41.5, 87.37): ");
		        double x2 = input.nextDouble();
		        double y2 = input.nextDouble();

		        // Dereceleri radyanlara dönüştür
		        x1 = Math.toRadians(x1);
		        y1 = Math.toRadians(y1);
		        x2 = Math.toRadians(x2);
		        y2 = Math.toRadians(y2);

		        // Büyük çember mesafesini hesapla
		        double mesafe = EARTH_R * Math.acos(
		                Math.sin(x1) * Math.sin(x2) +
		                Math.cos(x1) * Math.cos(x2) * Math.cos(y1 - y2)
		        );

		        // Mesafeyi yazdır
		        System.out.printf("İki nokta arasındaki mesafe: %.6f km\n", mesafe);

		        input.close();
*/
/*		   
				//Locale ayarı input.useLocale(Locale.US);
				String s = "Geeksforgeeks has Scanner Class Methods"; 
				  
		        // create a new scanner 
		        // with the specified String Object 
		        Scanner scanner = new Scanner(s); 
		  
		        // print a line of the scanner 
		        System.out.println("Scanner String: \n"
		                           + scanner.nextLine()); 
		  
		        // display the previous locale 
		        System.out.println("Current Lcoale: "
		                           + scanner.locale()); 
		  
		        // change the locale of the scanner 
		        scanner.useLocale(Locale.ENGLISH); 
		        System.out.println("Changing Locale to ENGLISH"); 
		  
		        // display the new locale 
		        System.out.println("Updated Locale: "
		                           + scanner.locale()); 
		  
		        // close the scanner 
		        scanner.close(); 
*/
		  //4.3 Soru
/*		
		public class AreaCalculator {
		    // Dünya'nın yarıçapı (kilometre)
		    private static final double RADIUS = 6371.01;

		    // Haversine formülü ile iki koordinat arasındaki mesafeyi hesaplama
		    public static double haversine(double lat1, double lon1, double lat2, double lon2) {
		        double dLat = Math.toRadians(lat2 - lat1);
		        double dLon = Math.toRadians(lon2 - lon1);
		        lat1 = Math.toRadians(lat1);
		        lat2 = Math.toRadians(lat2);

		        double a = Math.sin(dLat / 2) * Math.sin(dLat / 2) +
		                   Math.cos(lat1) * Math.cos(lat2) *
		                   Math.sin(dLon / 2) * Math.sin(dLon / 2);
		        double c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1 - a));

		        return RADIUS * c;
		    }

		    // Üçgenin alanını hesaplama
		    public static double triangleArea(double a, double b, double c) {
		        double s = (a + b + c) / 2; // Yarı çevre
		        return Math.sqrt(s * (s - a) * (s - b) * (s - c));
		    }

		    public static void main(String[] args) {
		        // Şehirlerin GPS koordinatları
		        double[] atlanta = {33.7490, -84.3880};
		        double[] orlando = {28.5383, -81.3792};
		        double[] savannah = {32.0809, -81.0912};
		        double[] charlotte = {35.2271, -80.8431};

		        // Şehirler arasındaki mesafeleri hesaplama
		        double d1 = haversine(atlanta[0], atlanta[1], savannah[0], savannah[1]);
		        double d2 = haversine(savannah[0], savannah[1], orlando[0], orlando[1]);
		        double d3 = haversine(orlando[0], orlando[1], atlanta[0], atlanta[1]);
		        double d4 = haversine(atlanta[0], atlanta[1], charlotte[0], charlotte[1]);
		        double d5 = haversine(charlotte[0], charlotte[1], orlando[0], orlando[1]);

		        // İki üçgenin alanını hesaplama
		        double area1 = triangleArea(d1, d2, d3);
		        double area2 = triangleArea(d4, d5, d3);

		        // Toplam alan
		        double totalArea = area1 + area2;

		        System.out.printf("Toplam alan: %.2f kilometrekare\n", totalArea);

		    }
		}
*/
		//Soru 4.4
		//Hehzagon area
/*		
		//JOptionpane.showInputDialog sadece string turunde veri alır
		String kenar = JOptionPane.showInputDialog("Sekizgenin kenar uzunlugunu giriniz:");
		double valu = Double.parseDouble(kenar);
		double alan = (6*valu*valu)/(4*(Math.tan(Math.PI/6)));
		JOptionPane.showMessageDialog(null,"Alan = "+alan,"Sekizgende Alan Hesabi",JOptionPane.INFORMATION_MESSAGE);
*/
		//Soru 4.5
		//Area of regular polygon-n-side
/*		
		String kenar = JOptionPane.showInputDialog("Enter the side: ");
		String n = JOptionPane.showInputDialog("Enter the number of side: ");
		
		double kenarValue = Double.parseDouble(kenar);
		double nValue = Double.parseDouble(n);
		
		double area = nValue*Math.pow(kenarValue, 2)/(4*Math.tan(Math.PI/nValue));
		JOptionPane.showMessageDialog(null,"The area of the polygon is "+area,"Calculator of Area",JOptionPane.OK_OPTION);
		
		//System.out.println("The area of the polygon is "+area);
*/
		//Soru 4.6
		//Random Circle Points
/*		
		final double RADIUS = 40.0;
        Random rand = new Random();
        
        // Generate three random angles in radians
        double angle1 = rand.nextDouble() * 2 * Math.PI;
        double angle2 = rand.nextDouble() * 2 * Math.PI;
        double angle3 = rand.nextDouble() * 2 * Math.PI;
        
        // Compute three points on the circle
        double x1 = RADIUS * Math.cos(angle1);
        double y1 = RADIUS * Math.sin(angle1);
        double x2 = RADIUS * Math.cos(angle2);
        double y2 = RADIUS * Math.sin(angle2);
        double x3 = RADIUS * Math.cos(angle3);
        double y3 = RADIUS * Math.sin(angle3);
        
        // Compute the sides of the triangle
        double a = Math.sqrt(Math.pow(x2 - x3, 2) + Math.pow(y2 - y3, 2));
        double b = Math.sqrt(Math.pow(x1 - x3, 2) + Math.pow(y1 - y3, 2));
        double c = Math.sqrt(Math.pow(x1 - x2, 2) + Math.pow(y1 - y2, 2));
        
        // Compute the angles of the triangle
        double A = Math.toDegrees(Math.acos((b * b + c * c - a * a) / (2 * b * c)));
        double B = Math.toDegrees(Math.acos((a * a + c * c - b * b) / (2 * a * c)));
        double C = Math.toDegrees(Math.acos((a * a + b * b - c * c) / (2 * a * b)));
        
        // Display results
        System.out.printf("Angles of the triangle: A = %.2f°, B = %.2f°, C = %.2f°\n", A, B, C);
		//Soru 4.8
		//Find the character of an ASCII code 
		String kod = JOptionPane.showInputDialog("Enter an ASCII code: (Number)");
		int kodValue = Integer.parseInt(kod);
		
*/		
		//Find the character of an ASCII code
	/*	
		Scanner i = new Scanner(System.in);
		System.out.println("Enter an character: ");
		char harf = i.next().charAt(0);
		int asciValu = harf;
		System.out.println("The Unicode for the character "+harf+" is "+asciValu);
	*/	
		//Find the character of an ASCII code with joption
/*
		String harf = JOptionPane.showInputDialog("Enter an character: ");
		
		if(harf !=null && harf.length()==1) {
			char character = harf.charAt(0);//ilk karakteri al
			int asciiValue = (int)character;//ASCII Unicode degerini alir
			
			JOptionPane.showMessageDialog(null,
					"The Unicode for the character "+character+ " is "+asciiValue,"Unicode Value",
					JOptionPane.INFORMATION_MESSAGE);
		}else {
			JOptionPane.showMessageDialog(null, 
					"Plesae enter a single character",
					"Error",
					JOptionPane.ERROR_MESSAGE);
		}
*/
/*
	 //Find the Unicode of a character
		Scanner i = new Scanner(System.in);
		System.out.println("Enter an ASCII code: ");
		int asciDegeri = i.nextInt();
		
		char harf = (char)asciDegeri;
		
		System.out.println("The Unicode for the character "+harf+" is "+asciDegeri);
*/
		//Decimal to Hex
/*		        
			Scanner scanner = new Scanner(System.in);
		        
		        while (true) {//Sonsuz dongu icinde
		            System.out.print("Enter a decimal value (0 to 15): ");
		            int decimalValue = scanner.nextInt();

		            if (decimalValue >= 0 && decimalValue <= 15) {
		                if (decimalValue < 10) {
		                    System.out.println("The hex value is " + decimalValue);
		                } else {
		                    char hexValue = (char) ('A' + (decimalValue - 10));
		                    System.out.println("The hex value is " + hexValue);
		                }
		            } else {
		                System.out.println(decimalValue + " is an invalid input");
		            }
		        }
*/
		//Hex to binary
/*		        
			Scanner scanner = new Scanner(System.in);
		        
		        // Kullanıcıdan hexadecimal giriş al
		        System.out.print("Enter a hexadecimal number: ");
		        String hex = scanner.nextLine();
		        
		        try {
		            // Hexadecimal'den decimal'e çevir
		            int decimal = Integer.parseInt(hex, 16);
		            
		            // Decimal'den binary'ye çevir ve ekrana yazdır
		            String binary = Integer.toBinaryString(decimal);
		            System.out.println("Binary equivalent: " + binary);
		        } catch (NumberFormatException e) {
		            System.out.println("Invalid hexadecimal number!");
		        }
		        
		        scanner.close();
		    }
*/
//---------Soru 4.14 ---Vowel or constant
/*	
		        Scanner scanner = new Scanner(System.in);
		        
		        System.out.print("Enter a letter: ");
		        char girilen = scanner.next().toLowerCase().charAt(0); 
		        
		        if ("aeiou".indexOf(girilen) != -1) {
		            System.out.println(girilen + " is a vowel");
		        } else if (Character.isLetter(girilen)) {
		            System.out.println(girilen + " is a consonant");
		        } else {
		            System.out.println("Invalid input! Please enter a letter.");
		        }
		        
		        scanner.close();
		    
*/	
			
//Soru 4.14 
			//Convert letter grade to number
/*	        
			Scanner i = new Scanner(System.in);
			System.out.println("Enter a letter grade: ");
			char letter = i.next().toUpperCase().charAt(0);
			
			int numaraDeg;
			switch (letter) {
			case 'A':
			numaraDeg = 4; break;
			case 'B':
			numaraDeg = 3; break;
			case 'C':
			numaraDeg = 2; break;
			case 'D':
			numaraDeg = 1; break;
			case 'F':
			numaraDeg = 0; break;
	
			
			default:
				System.out.println("Invalid Grade");
				i.close();
				return;
			}
			  System.out.println("The numeric value for grade " + letter + " is " + numaraDeg);
		      i.close();
*/

/*		
		//Not: mystr.indexOf(' ');
			String string = new String("ey Edip Adana'da pide ye");
			System.out.println("Found g first at position: "+string.indexOf('e'));
*/			
		
//Soru 4.15----------------------------------------------------Phone Key Pads 
/*		
		Scanner iScanner = new Scanner(System.in);
		
		while (true) {
			int number=0;
			System.out.println("Enter a letter: ");
			char letter = iScanner.next().charAt(0);
			
			if(Character.isLetter(letter)) {
				letter = Character.toLowerCase(letter);
			switch (letter) {
	        case 'a': case 'b': case 'c': number = 2; break;
	        case 'd': case 'e': case 'f': number = 3; break;
	        case 'g': case 'h': case 'i': number = 4; break;
	        case 'j': case 'k': case 'l': number = 5; break;
	        case 'm': case 'n': case 'o': number = 6; break;
	        case 'p': case 'q': case 'r': case 's': number = 7; break;
	        case 't': case 'u': case 'v': number = 8; break;
	        case 'w': case 'x': case 'y': case 'z': number = 9; break;
			
			}
			System.out.println("The corresponding number: "+number);
			}
			else if(Character.isDigit(letter)){
				letter -=48;//1 --> ASCII 49 
				System.out.println(+letter+" is an invalid input.");
			}else {
				System.out.printf("%c is an invalid input.\n",letter);
			}
		}
  
		//iScanner.close(); kullanılamaz çünkü sonsuz döngüde çalışan while döngüsü içinde kullanıcıdan veri girişi isteniyor 

*/
//---------------------------------------------------Phone Key Pads	with String	
/*		
		Scanner iScanner = new Scanner(System.in);
		
		while(true) {
		System.out.println("Enter a letter");
		String letter = iScanner.nextLine();
		int number = 0;		
		
		if (letter.length() == 1 && Character.isLetter(letter.charAt(0))) { 
            switch (letter) {
                case "a": case "b": case "c": number = 2; break;
                case "d": case "e": case "f": number = 3; break;
                case "g": case "h": case "i": number = 4; break;
                case "j": case "k": case "l": number = 5; break;
                case "m": case "n": case "o": number = 6; break;
                case "p": case "q": case "r": case "s": number = 7; break;
                case "t": case "u": case "v": number = 8; break;
                case "w": case "x": case "y": case "z": number = 9; break;
            }
            System.out.println("The corresponding number: " + number);
        } else 
            System.out.println(letter+" is an invalid input");
        
		}
*/	
		
//Soru 4.16----------------------------------------Rondom Character
/*		
		// Random random = new Random(); Rondom sınıfı kullanılarak bir nesne oluşturur
		//math.random statik bir metottur ve nesne oluşturmayı gerektirmez
        char karakter = (char) ((int)(Math.random()*94)+ 33); // ASCII aralığı: 33-126
        System.out.println("Rastgele üretilen karakter: " + karakter);
        
        	
		 char [] karakterator = new char [10];
		 System.out.println("Rastgele 10 Karakter: "); 
		 for (int i = 0; i < karakterator.length; i++) {
		    	karakterator[i] = (char)((Math.random()*93)+33);
		    	System.out.println(karakterator[i]);
			}
 */

		
//Soru 4.17------------------------------------------Days of a month
/*	
		        Scanner input = new Scanner(System.in);

		        // Prompt the user for year and month name
		        System.out.print("Enter a year: ");
		        int year = input.nextInt();
		        System.out.print("Enter the first three letters of a month name (e.g., Jan, Feb): ");
		        String month = input.next();

		        int days = 0;

		        // Determine number of days in the month
		        switch (month) {
		            case "Jan": case "Mar": case "May": case "Jul":
		            case "Aug": case "Oct": case "Dec":
		                days = 31;
		                break;
		            case "Apr": case "Jun": case "Sep": case "Nov":
		                days = 30;
		                break;
		            case "Feb":
		                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		                    days = 29; // Leap year
		                } else {
		                    days = 28;
		                }
		                break;
		            default:
		                System.out.println("Invalid month name entered.");
		                return; // Exit if the month is invalid
		        }

		        // Display the result
		        System.out.println("The number of days in " + month + " " + year + " is: " + days);
*/		    
		
		
//Soru 4.18------------------------------------------Student major and status
/*		
		Scanner bolum = new Scanner(System.in);
		String status = ""; 
		String studentMajor ="";
		System.out.println("Enter two characters: ");
	
		String giris = bolum.nextLine();
		switch (giris.charAt(0)) {
		case 'M': case 'm': status = "Mathematics"; break;
		case 'C': case 'c': status = "Computer Science"; break;
		case 'I': case 'i': status = "Information Technology"; break;
		}
		
			switch (giris.charAt(1)) {
			case '1': studentMajor = "Fresman";break;
			case '2': studentMajor = "Sophomore";break;
			case '3': studentMajor = "Junior";break;
			case '4': studentMajor = "Senior";break;
			}
		System.out.println(status+" "+studentMajor);
*/
		
//Soru 4.19----------------------------------------Business:checj isbn-10
	
//Soru 4.20-----------------------------------------Prosess a String
/*
		String metin = JOptionPane.showInputDialog("Bir metin giriniz");
		int uzunluk = metin.length();
		JOptionPane.showMessageDialog(null,"Metnin Uzunlugu "+uzunluk,"Bilgi Kutusu", JOptionPane.INFORMATION_MESSAGE);
		JOptionPane.showMessageDialog(null, "Girilen kelimenin ilk karakteri : "+metin.charAt(0),"Bilgi Kutusu",JOptionPane.INFORMATION_MESSAGE);
*/
//Soru 4.21----------------------------------------Check Substring
		
		String text = "Hello";
		System.out.println(text.substring(1, 4)); // "ell"
		System.out.println(text.charAt(4));//o
		
//Soru 4.24---------------------------------------Order Three Cities
		
/* 
        Scanner input = new Scanner(System.in);

        System.out.print("Kaç adet kelime sıralamak istiyorsunuz? ");
        int n = input.nextInt();
        input.nextLine(); // Boşluğu yakalamak için

        String[] words = new String[n]; // Kelimeleri saklamak için bir dizi oluşturulur

        System.out.println("Kelime(leri) girin:");
        for (int i = 0; i < n; i++) {
            words[i] = input.nextLine();
        }

        // Diziyi sıralama
        Arrays.sort(words);

        // Sıralı sonucu yazdırma
        System.out.println("\nAlfabetik sıralama:");
        for (String word : words) {
            System.out.println(word);
        }
    
*/
		
//Soru 4.25--------------------------------------------------Generate Vehicle Plate Numbers
/*		
		
		char [] harf = new char[3];//A-Z aralığı 65-90 
		for (int i = 0; i < harf.length; i++) {
			harf[i] =(char)((int)((Math.random()*26)+65));
		}
		
		int [] sayi = new int[3];
		for (int i = 0; i < sayi.length; i++) {
			sayi[i]= (int)(Math.random()*10)+1;
		}
		
		System.out.println("The Generated Vecihle Plate Number is "+harf[0]+harf[1]+harf[2]+" "+sayi[0]+sayi[1]+sayi[2]);
		
*/		
//Random Sınıfı Kullanılarak Çozum-------------------------------------------------------------------------------------------		
/*
	
        Random random = new Random();

        // 3 büyük harf üret
        StringBuilder plate = new StringBuilder();
        for (int i = 0; i < 3; i++) {
            char letter = (char) (random.nextInt(26) + 'A'); // 'A' - 'Z' arasındaki harfler
            plate.append(letter);
        }

        // 4 rakam üret
        for (int i = 0; i < 4; i++) {
            int digit = random.nextInt(10); // 0 - 9 arasındaki rakamlar
            plate.append(digit);
        }

        // Plakayı yazdır
        System.out.println("Generated vehicle plate number: " + plate);
	
*/
//Soru 4.26 ------------------------------------------------------Para Birimi Hesaplayici

        // Kullanıcıdan girdi almak için bir tarayıcı oluştur
        Scanner girdi = new Scanner(System.in);

        // Kullanıcıdan tutarı al
        System.out.print("Tutarı xx.xx formatında giriniz (örneğin: 11.56): ");
        String miktar = girdi.nextLine();

        // Ondalık noktayı bul ve dolar ile kuruş kısmını ayır
        int ondalikIndeksi = miktar.indexOf('.');
        int dolar = Integer.parseInt(miktar.substring(0, ondalikIndeksi)); // Dolar kısmı
        int kurus = Integer.parseInt(miktar.substring(ondalikIndeksi + 1)); // Kuruş kısmı

        // Toplam miktarı kuruş olarak hesapla
        int kalanMiktar = dolar * 100 + kurus;

        // Dolar miktarını bul
        int birDolarSayisi = kalanMiktar / 100;
        kalanMiktar = kalanMiktar % 100;

        // Kalan miktarda çeyrek sayısını bul
        int ceyrekSayisi = kalanMiktar / 25;
        kalanMiktar = kalanMiktar % 25;

        // Kalan miktarda on kuruş sayısını bul (dime)
        int onKurusSayisi = kalanMiktar / 10;
        kalanMiktar = kalanMiktar % 10;

        // Kalan miktarda beş kuruş sayısını bul (nickel)
        int besKurusSayisi = kalanMiktar / 5;
        kalanMiktar = kalanMiktar % 5;

        // Kalan miktarda bir kuruş sayısını bul (penny)
        int birKurusSayisi = kalanMiktar;

        // Sonuçları ekrana yazdır
        System.out.println("Girdiğiniz miktar: " + miktar + " şu parçalardan oluşmaktadır:");
        System.out.println("    " + birDolarSayisi + " dolar");
        System.out.println("    " + ceyrekSayisi + " çeyrek");
        System.out.println("    " + onKurusSayisi + " on kuruş");
        System.out.println("    " + besKurusSayisi + " beş kuruş");
        System.out.println("    " + birKurusSayisi + " bir kuruş");
    		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	}
}