package Question13;

public class Address implements Cloneable {//Adress sınıfına Cloneable implement edilme sebebi deep copy icin
	String city;
	
	public Address(String city) {
		this.city = city;
	}
	@Override
	protected Object clone() throws CloneNotSupportedException {//deep copy icin Cloneable implement edildi
		return super.clone();									//override gerekti
	}
}

class Person implements Cloneable{
	String name;
	Address address;
	
	public Person(String name,Address address) {
		this.name = name;
		this.address = address;
	}
	/*
	//shallow copy
	@Override
	public Object clone() throws CloneNotSupportedException{
		return super.clone();// super.clone() object nesnesi dondurur
	}
	*/
	
	//deep copy
	public Object clone() throws CloneNotSupportedException{
		Person kopya = (Person)super.clone();
		kopya.address = (Address)address.clone();
		return kopya;
	}
	
	public String getName() {
	    return name;
	}

	public String getAddress() {
	    return address.city;
	}
	
	/*//getter metotlar yerine kullanilabilir
	@Override
	public String toString() {
		return name +" lives in" +address.city;
	}
	*/

}
