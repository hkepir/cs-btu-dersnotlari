package AbstractClasses;

public class SoyutOrnek {

	public abstract class Sekil {// her soyut sinif en az bir soyut metod bulundurmali
		String isim;

		public abstract double alan();// soyut metotlar govdesiz

		public void isimBelirle(String isim) {
			this.isim = isim;
		}

		String getIsim() {
			return this.isim;
		}
	}

	class Ucgen extends Sekil {

		int taban, h;

		Ucgen(int taban, int h) {
			isimBelirle("Ucgen");
			this.taban = taban;
			this.h = h;
		}

		@Override
		public double alan() {
			return (taban * h) / 2;
		}
	}

	class Daire extends Sekil {
		int r;

		Daire(int r) {
			isimBelirle("Daire");
			this.r = r;
		}

		@Override
		public double alan() {
			return Math.PI * Math.pow(r, 2);
		}

	}

	class Yamuk extends Sekil {
		int altTaban;
		int ustTaban;
		int h;

		Yamuk(int altTaban, int ustTaban, int h) {
			this.altTaban = altTaban;
			this.ustTaban = ustTaban;
			this.h = h;
		}

		@Override
		public double alan() {
			return (altTaban + ustTaban) * h / 2;
		}
	}

	public static void main(String[] args) {
		
		SoyutOrnek.Sekil sekil1 = new SoyutOrnek().new Daire(5);
		System.out.println("Sinif : "+sekil1.getIsim());
		System.out.println("Alan : "+sekil1.alan());
		
		System.out.println("************************");
		
		SoyutOrnek.Ucgen ucgen = new SoyutOrnek().new Ucgen(5,5);
		System.out.println("Sinif : "+ucgen.getIsim());
		System.out.println("Alan : "+ucgen.alan());
	}

}
