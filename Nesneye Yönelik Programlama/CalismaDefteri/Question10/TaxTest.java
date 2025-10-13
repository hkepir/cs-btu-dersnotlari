package Question10;

public class TaxTest {

	public static void main(String[] args) {

		// 2001 yılı vergi dilimleri ve oranları
		int[][] brackets2001 = { { 27050, 65550, 136750, 297350 }, { 45200, 109250, 166500, 297350 },
				{ 22600, 54625, 83250, 148675 }, { 36250, 93650, 151650, 297350 } };
		double[] rates2001 = { 0.15, 0.27, 0.30, 0.35, 0.39 };

		// 2009 yılı vergi dilimleri ve oranları
		int[][] brackets2009 = { { 8350, 33950, 82250, 171550, 372950 }, { 16700, 67900, 137050, 208850, 372950 },
				{ 8350, 33950, 68525, 104425, 186475 }, { 11950, 45500, 117450, 190200, 372950 } };
		double[] rates2009 = { 0.10, 0.15, 0.25, 0.28, 0.33, 0.35 };

		System.out.println("Vergi Tablosu - 2001:");
		printTaxTable(brackets2001, rates2001);

		System.out.println("\nVergi Tablosu - 2009:");
		printTaxTable(brackets2009, rates2009);
	}

	public static void printTaxTable(int[][] brackets, double[] rates) {
		System.out.println("Gelir     | Single | Married Joint | Married Separate | Head of Household");
		System.out.println("---------------------------------------------------------------");

		for (int income = 50000; income <= 60000; income += 1000) {
			System.out.printf("%-10d", income);
			for (int status = 0; status < 4; status++) {
				Tax tax = new Tax(status, brackets, rates, income);
				System.out.printf("| %-10.2f ", tax.getTax());
			}
			System.out.println();
		}

	}

}
