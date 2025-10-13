package Question13;

public class DeepCloneDemo {

	public static void main(String[] args) throws CloneNotSupportedException {
		Address address = new Address("Ankara");
		Person original = new Person("Ali", address);
		Person deepCopy = (Person)original.clone();//casting yapilma sebebi clone() her zaman obje tipinde veri dondürür
		
		System.out.println(original.getName());
		System.out.println(deepCopy.getName());
		
		original.address.city = "Adana";
		
		System.out.println("Original:  " + original.getAddress());   // İstanbul
        System.out.println("Deep Copy: " + deepCopy.getAddress());   // Ankara (etkilenmedi!)
	}

}
