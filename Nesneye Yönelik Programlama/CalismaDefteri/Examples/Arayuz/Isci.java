package Arayuz;

public class Isci implements Calisan2 {
	
	double ucret;
	@Override
	public void bolumYazdir() {
		System.out.println("Isci");
	}

	@Override
	public void ucretBelirle(double ucret) {
		this.ucret = ucret;
	}

	@Override
	public double ucret() {
		return calisanSabiti*ucret;
	}
	
}
