package Encapsulation;

public class ProductMain {

	public static void main(String[] args) {
		Product p = new Product("Phone", 999.99, 5);
		System.out.println("Info for product: " + p.getName() + ", " + p.getPrice() + ", " + p.getStockQuantity());
		
		p.setPrice(-100);
		p.setStockQuantity(0);
		
		System.out.println("Phone price increased by 10% "+(p.getPrice()*10/100));
	}

}
