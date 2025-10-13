package Question13;


interface Weight{
	int weight = 5;
	public static final int age = 1;
	
	public abstract void newWeigth(int x) ;
}

interface Animal{
	void makeSound();
}

class Kopek implements Animal{
	@Override
	public void makeSound() {
		System.out.println("hav,hav");
	}
}

class Cat implements Animal,Weight{
	@Override
	public void makeSound() {
		System.out.println("miyav,miyav");
	}
	
	@Override
	public void newWeigth(int x) {
		System.out.println(x);
	}
	
}

public class Interfaces1 {

	public static void main(String[] args) {
	
		Kopek kopek = new Kopek();
		kopek.makeSound();
		
		Animal kopek2 = new Kopek();
		kopek2.makeSound();
		
		Cat kedi = new Cat();
		kedi.makeSound();
		// kedi.weight = 10; yapilamaz final
		//System.out.println("Kedi'nin agirligi "+kedi.weight);
		System.out.println("Kedi'nin agirligi "+Weight.weight);//accessed the static way
	
		System.out.println("Kedinin agirligi degistirildi ");
		kedi.newWeigth(100);
		
		Animal kedi2 = new Cat();
		kedi2.makeSound();
		((Cat)kedi2).newWeigth(58);
		
		
		Weight kedi3 = new Cat();
		System.out.println("Kedi3 ses ver ");
		((Cat)kedi3).makeSound();
		
		System.out.println("Kedi3'un agirligi ");
		((Cat)kedi3).newWeigth(3);//yazilabilir 
		kedi3.newWeigth(6);

		
		
		//kedi3.makeSound();
		//kedi3.newWeigth(); yapılamaz
		

	}

}
