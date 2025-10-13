package Arayuz;

public class Pazarlamaci implements Calisan2 {//Calisan2 arayuzunu genislettik

	double ucret;
	double komisyon;
	final double komSabit = 0.2;

	@Override
	public void bolumYazdir() {
		System.out.println("Pazarlama");
	}

	@Override
	public void ucretBelirle(double ucret) {
		this.ucret = ucret;

	}

	public void komBelirle(int adet) {
		System.out.println("Satilan ürün adedi: " + adet);
		komisyon = komSabit * adet;
	}

	@Override
	public double ucret() {

		return (ucret * calisanSabiti) + komisyon;
	}

}
