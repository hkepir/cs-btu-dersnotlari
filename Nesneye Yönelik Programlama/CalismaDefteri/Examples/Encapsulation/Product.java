package Encapsulation;

public class Product {

	private String name;
	private double price;
	private int stockQuantity;
	
	Product() {}
	
	Product(String name, double price, int stockQuantity) {
		this.name = name;
		setPrice(price);
		setStockQuantity(stockQuantity);
		//this.stockQuantity = stockQuantity;//dogrudan atama yapar
	}

	public String getName() {
		return name;
	}

	public double getPrice() {
		return price;
	}

	public int getStockQuantity() {
		return stockQuantity;
	}
	
	public void setPrice(double price) {
		if (price>0) {
			this.price=price;
		}else {
			System.out.println("Price should be positive ");
		}
	}
	
	public void setStockQuantity(int quantity) {
		if(quantity>0) {
			this.stockQuantity = quantity;
		}else {
			System.out.println("The stockQuantity should be positive");
		}
	}
/*
	public static void main(String[] args) {
		Product product = new Product("Sunglasses",50.5,10);
		System.out.println("Info for product: "+product.name+ ", "+product.price+", "+ product.stockQuantity);		
		//hala setter olmadan erisebiliyorum neden?
		
		//Ayni sinif icinde o sinifin private uyelerine erisebiliriz
		product.price = 99.99;
		product.stockQuantity = -102;
		System.out.println("Info for product: "+product.name+ ", "+product.price+", "+ product.stockQuantity);

	}
*/
}
