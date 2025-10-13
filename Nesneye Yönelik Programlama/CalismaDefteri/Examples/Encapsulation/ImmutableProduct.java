package Encapsulation;

public class ImmutableProduct {//public final class ImmutableProduct
	
	private final String name;
	private final double price;
	private final int stockQuantity;
	
	public ImmutableProduct(String name,double price,int stockQuantity){
		if (price < 0) {
            throw new IllegalArgumentException("Price cannot be negative.");
        }
        if (stockQuantity < 0) {
            throw new IllegalArgumentException("Stock quantity cannot be negative.");
        }
        this.name = name;
        this.price = price;
        this.stockQuantity = stockQuantity;
		
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
	 // Yeni bir fiyatla yeni bir ürün oluşturur
    public ImmutableProduct withPrice(double newPrice) {
        return new ImmutableProduct(this.name, newPrice, this.stockQuantity);
    }

    // Yeni bir stok değeriyle yeni bir ürün oluşturur
    public ImmutableProduct withStockQuantity(int newQuantity) {
        return new ImmutableProduct(this.name, this.price, newQuantity);
    }

    // Yeni bir adla yeni bir ürün oluşturur
    public ImmutableProduct withName(String newName) {
        return new ImmutableProduct(newName, this.price, this.stockQuantity);
    }
}
