package AbstractClasses;

public class FinalAnahtari {

	private final int x;// normalde final degiskene ilk degar atanmalidir.

	public FinalAnahtari(int x) {
		this.x = x;// a=x; de olur
		// System.out.println(x);//getter kullan
	}

	public int getFinal() {
		return this.x;
	}

	public static void main(String[] args) {

		FinalAnahtari f1 = new FinalAnahtari(66);
		// f1.x = 88; //sadece bir kez deger atanabilir sonradan degistirilemez

		final int b;
		b = 10;

		System.out.println("b degeri : " + b);
		System.out.println("Final anahtarı: " + f1.getFinal());
		System.out.println("Final degiskenlere yalnizca bir kez deger atanabilir.");

	}
}
