package AbstractClasses;

public class Ogrenci {

	String name = "Meftun";
	String surname = "Garib";

	public String toString() {
		return name + " " + surname;
	}

	public static void main(String[] args) {

		Ogrenci o1 = new Ogrenci();
		System.out.println(o1);
	}
}
//Terminalden isimleri almak icin
/*
 package AbsInterface;

import java.util.Scanner;

public class Ogrenci {

    String name;
    String surname;

    // Yapıcı metod (constructor)
    public Ogrenci(String name, String surname) {
        this.name = name;
        this.surname = surname;
    }

    @Override
    public String toString() {
        return name + " " + surname;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Adınızı girin: ");
        String ad = scanner.nextLine();

        System.out.print("Soyadınızı girin: ");
        String soyad = scanner.nextLine();

        Ogrenci o1 = new Ogrenci(ad, soyad);
        System.out.println("Öğrenci: " + o1);

        scanner.close();
    }
}
 */