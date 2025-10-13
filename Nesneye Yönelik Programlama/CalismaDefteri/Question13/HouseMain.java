package Question13;

public class HouseMain {

	public static void main(String[] args) throws CloneNotSupportedException {

		House house1 = new House(1, 1750.5);
		House house2 = (House) house1.clone();
		System.out.println(house1 == house2);// false
		System.out.println(house1.equals(house2));// false
		System.out.println(house1.oda==house2.oda);
		// System.out.println(house1 instanceof house2); OLMAZ
		// instanceof sag tarafi bir sinif(ya da interface) olmalidir
		// house2 house1 birer nesne (sinif ornegi)

		// iki nesne olusturuldu adresleri farkli
		System.out.println(house1.getId());
		System.out.println(house1.getArea());

		System.out.println(house2.getId());
		System.out.println(house2.getArea());

		// Iki evinde odasi var midir?
		System.out.println(house1.oda.m2);
		System.out.println(house2.oda.m2);
		house1.oda.m2 = 30;
		System.out.println(house2.oda.m2);
		System.out.println(house1.oda.m2);
		
		System.out.println(house1.getWhenBuilt() == house2.getWhenBuilt()); // 👉 true (shallow copy)

	}

}
