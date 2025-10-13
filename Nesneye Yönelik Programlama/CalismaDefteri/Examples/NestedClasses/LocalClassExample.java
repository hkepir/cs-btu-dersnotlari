package NestedClasses;

public class LocalClassExample {//Kapsayıcı class
	
	static String regularExpression = "[^0-9]";//0-9 arasındaki tum rakamlar disindaki tum karakterler temizlenecek
	
	//metot
	public static void validatePhoneNumber(String phoneNumber1,String phoneNumber2 ) {
	
		final int numberLength = 10;
		//metot icinde class
		class PhoneNumber {
			String formattedPhoneNumber = null;
			
			PhoneNumber(String phoneNumber){
				//numberLength = 7;
				String currentNumber = phoneNumber.replaceAll(regularExpression, "");
				if (currentNumber.length() == numberLength) {
					formattedPhoneNumber = currentNumber;
				} else {
					formattedPhoneNumber = null;
				}
 			}
		
		public String getNumber() {
			return formattedPhoneNumber;
		}
		
		public void printOriginalNumbers() {
			System.out.println("Original numbers are "+phoneNumber1+" and "+phoneNumber2);
		}
		
	}//metot icindeki class bitis
		
		//hala metot icindeyim 2 nesne tanımladım ve constructor lara metot parametrelerini gönderdim
		PhoneNumber myNumber1 = new PhoneNumber(phoneNumber1);
		PhoneNumber myNumber2 = new PhoneNumber(phoneNumber2);
		
		myNumber1.printOriginalNumbers();
		
		if (myNumber1.getNumber()==null) {
			System.out.println("First number is invalid");
		} else {
			System.out.println("First number is "+myNumber1.getNumber());
		}
		if (myNumber2.getNumber()==null) {
			System.out.println("Second number is invalid");
		} else {
			System.out.println("Second number is "+myNumber2.getNumber());
		}
		
	}
	
	
	public static void main(String[] args) {
		validatePhoneNumber("458-458-7878", "789-8951");

	}

}

//Not
//Local classlar inner claslardan farklı olarak
//inner class outhor class ile birlikte yasayan, ondan obje uretebilen varllıklarken
//Local class o metodun içinde metot calışırken var olup metot calısmasıyla birlikte varlığını kaybeden classlardır
//anonymous class , isim verilmez her zaman o classtan 1 adet obje tanımlanır