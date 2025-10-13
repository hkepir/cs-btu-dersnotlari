package deneme6;

public class Stock {
	String symbol, name;
	double previousClosingPrice;
	double currentPrice;

	public Stock() {// bu constructoru yazmak zoruunda mıyım değil miyim
					//main de cagrilmadigi icin yazmak zorunda degilsin
	}

	public Stock(String symbol, String name) {
		this.symbol = symbol;
		this.name = name;
	}

	public double getChangePercent() {
		return (currentPrice / previousClosingPrice - 1);
	}

	public static void main(String[] args) {

		Stock hisse = new Stock("BTU", "Bursa Teknik Universitesi");
		hisse.currentPrice = 1200;
		hisse.previousClosingPrice = 1000;
		double donen = hisse.getChangePercent();

		if (donen > 0) {
			System.out.println("Hisse %" + donen + " kadar artti.");
		} else {
			System.out.println("Hisse %" + (-donen) + " kadar azaldi.");
		}
	}

}
