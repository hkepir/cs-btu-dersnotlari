package Question10;

public class Tax {

	final static int SINGLE_FILER = 0;
	final static int MARRIED_JOINTLY_OR_QUALIFYING_WIDOW = 1;
	final static int MARRIED_SEPARATELY = 2;
	final static int HEAD_OF_HOUSEHOLD = 3;

	int filingStatus;
	int[][] brackets;
	double[] rates;
	double taxableIncome;

	public Tax() {
	}

	public Tax(int filingStatus, int[][] brackets, double[] rates, double taxableIncome) {
		super();
		this.filingStatus = filingStatus;
		this.brackets = brackets;
		this.rates = rates;
		this.taxableIncome = taxableIncome;
	}

	public int getFilingStatus() {
		return filingStatus;
	}

	public void setFilingStatus(int filingStatus) {
		this.filingStatus = filingStatus;
	}

	public int[][] getBrackets() {
		return brackets;
	}

	public void setBrackets(int[][] brackets) {
		this.brackets = brackets;
	}

	public double[] getRates() {
		return rates;
	}

	public void setRates(double[] rates) {
		this.rates = rates;
	}

	public double getTaxableIncome() {
		return taxableIncome;
	}

	public void setTaxableIncome(double taxableIncome) {
		this.taxableIncome = taxableIncome;
	}

	public double getTax() {
	    double tax = 0;
	    double income = taxableIncome;
	    int[] bracket = brackets[filingStatus]; // Seçilen filingStatus'a göre doğru bracket setini al
	    double[] rate = rates; // Vergi oranlarını al

	    for (int i = bracket.length - 1; i >= 0; i--) {
	        if (income > bracket[i]) {
	            tax += (income - bracket[i]) * rate[i];
	            income = bracket[i];
	        }
	    }

	    return tax;
	}

}
