package Question13;

public class AdressShallowCloneDemo {

	public static void main(String[] args) throws CloneNotSupportedException {
		Address address = new Address("Eskisehir");
		Person original = new Person("Hilal", address);
		Person shallowCopy = (Person)original.clone();//Object tipinde veri dondurdugu icin casting yaptik
		
		
		System.out.println(original.getName()+"'in adresi "+original.getAddress());
		System.out.println(original.getName()+"'in adresi "+shallowCopy.getAddress());
		
		System.out.println("Adres bilgisi orijinal nesnede degistirildi. Kopya da degisir");
		original.address.city = "Istanbul";
		System.out.println(original.getName()+"'in adresi "+original.getAddress());
		System.out.println(original.getName()+"'in adresi "+shallowCopy.getAddress());
		
		}

}
