package Arayuz;

public class Yonetici implements Calisan2 {
	double ucret;

	@Override
	public void bolumYazdir() {
		System.out.println("Yonetici");
	}

	@Override
	public void ucretBelirle(double ucret) {
		this.ucret = ucret;
	}

	@Override
	public double ucret() {
		return ucret;
	}

}
