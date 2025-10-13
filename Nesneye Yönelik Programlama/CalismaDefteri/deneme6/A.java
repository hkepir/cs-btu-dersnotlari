package deneme6;

import java.util.Random;

class A {
	public int x;
	int y;
	private int z;
	private boolean deger;

	public A() {
	}

	A(int x) {

		this.x = x;
	}

	public void setZ(int yeni_z) {// setter method
		if (yeni_z > 0 && yeni_z < 11)
			z = yeni_z;
	}

	public int getZ() {// getter method
		return z;
	}

	public boolean isDeger() {
		return deger;
	}

	public static void main(String[] args) {
		A nesneA = new A();
		//nesneA.x = 5; 
		//nesneA.y = 3;
		nesneA.setZ(4); // private degiskene setter ile deger atanabilir
		System.out.println("nesneA.z'nin degeri " + nesneA.getZ());

		Random random = new Random(42);

		A[] diziA = new A[10];// Array of references
		for (int i = 0; i < diziA.length; i++) {
			// diziA[i] = new A(i);// nesneyi i degeri kullanarak olusturur
			diziA[i] = new A(random.nextInt(11));// binding references to objects and assigning them dynamically
													// generated values.
			System.out.println(diziA[i].x);
		}
	}

}
