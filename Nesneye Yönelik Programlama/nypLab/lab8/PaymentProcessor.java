package lab8;

public abstract class PaymentProcessor {

	public final void processPayment(double amount) {
		connectToGateway();
		authenticate();
		pay(amount);
		logTransaction();
		disconnect();
		System.out.println(amount+" TL tutarindaki odeme tamamlandi.\n");
	}
	
	private void connectToGateway() {
		System.out.println("Odeme ag gecidine baglaniliyor...");
	}
	
	private void disconnect() {
		System.out.println("Ag gecidinden cikis yapiliyor...");
	}

	//Bu iki metot soyuttur ve alt siniflarda override edilemk zorundadir.
	protected abstract void authenticate();
	protected abstract void pay(double amount);
	
	//opsiyonel metot
	protected void logTransaction() {
		
	}
}
