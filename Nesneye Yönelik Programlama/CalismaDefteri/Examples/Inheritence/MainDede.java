package Inheritence;

public class MainDede {
	public static void main(String[] args) {
		Torun torun = new Torun();
		System.out.println(" "+torun.toString());
		//toString methodu eger override edilmemis ise 
		//nesnenin sinif adini ve bellek adresini dondürür 
		
		//--------Console--------
		//Dede
		//Baba
		//Torun
		// Inheritence.Torun@378fd1ac
		
		
		OverrideFruit fruit = new OverrideFruit();
		fruit.FruitName();//Fruit***
		
		Apple apple = new Apple();
		apple.FruitName();//Fruit***
						  //Apple
		OverrideFruit banana = new Banana(); //Fruit***
		banana.FruitName();					 //Banana
		
		Apple greenApple = new GreenApple();//Fruit***
		greenApple.FruitName();				//Apple
											//GreenApple
		
		System.out.println(fruit instanceof GreenApple );//false
		System.out.println(fruit instanceof Banana );//false
		System.out.println(fruit instanceof Apple );//false
		
		System.out.println(fruit instanceof OverrideFruit);//true
		
		System.out.println(banana instanceof Banana);//true
		System.out.println(greenApple instanceof Apple);//true
		System.out.println(greenApple instanceof OverrideFruit);//true
		//System.out.println(greenApple instanceof Banana); derlemez
		//Apple ve Banana farklı türlerdir kıyaslanamaz, karsilastirilamaz  

	
	}									   
}
