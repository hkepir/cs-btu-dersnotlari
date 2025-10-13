package Question13;

abstract class Dog{
	String breed;
	
	public void bark() {
		System.out.println("Bark! ");
	}
	
	public abstract void metotAbs();//Soyut metot govdesi olamaz
}

class C extends Dog{
	//soyut sinifi miras alan sinif soyut sınıftakisoyut metotları 
	//override etmelidir
	@Override
	public void metotAbs() {
		System.out.println("Soyut metot ezildi :)");
	}
}

public class AbstractTutorial {
	public static void main(String[] args) {
		C dog = new C();
		dog.bark();
		System.out.println(dog.breed);
		dog.metotAbs();
	}
}
