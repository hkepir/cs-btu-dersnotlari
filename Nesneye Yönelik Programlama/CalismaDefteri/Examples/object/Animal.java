package object;

public class Animal {
	private String name;
	private int id;
	private int age;

	public Animal(String name, int id, int age) {
		this.name = name;
		this.id = id;
		this.age = age;
	}
	
	private void setName(String name) {// metot yazmaya çalıştım
		this.name = name;
	}

	private void eat() {
		System.out.println(name + " is eating.");
	}
	
	public void oyun() {
		
	}
	
	public static void main(String[] args) {
		Animal kopek = new Animal("Pamuk", 100, 9);
		System.out.println(kopek.name+" "+kopek.age+" "+kopek.id );
		
		Animal kopek1;
		kopek1 = new Animal("Sari",101 , 2);
		System.out.println(kopek1.name+" "+kopek1.id+" "+kopek1.age);//private degiskenlere aynı sınıf icinden erisilebilir
		
		kopek.setName("Karabas");
		System.out.println("Kopegimin adi: "+kopek.name);
		System.out.println("Pamugun adi degistirildi.");
		
		kopek.name = "Pamuk";
		System.out.println("Pamuk yine pamuk.Isim degistirilmedi");
		
		kopek1.eat();
		kopek.eat();
		
		
	}
}