package mycodes;

public class Person {
	private String name; // Özel değişken

    // Getter yöntemi
    public String getName() {
        return name;
    }

    // Setter yöntemi
    public void setName(String name) {
        this.name = name;
    }


  
    public static void main(String[] args) {
        Person person = new Person();

        // Setter ile değer atama
        person.setName("Hilal");

        // Getter ile değeri okuma
        System.out.println(person.getName()); // Çıktı: Hilal
    }
} 


