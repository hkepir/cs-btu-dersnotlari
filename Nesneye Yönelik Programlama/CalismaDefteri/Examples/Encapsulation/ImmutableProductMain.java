package Encapsulation;

public class ImmutableProductMain {
	public static void main(String[] args) {
		ImmutableProduct p1 = new ImmutableProduct("Headphones", 120.0, 5);
        System.out.println(p1.getName() + ", " + p1.getPrice() + ", " + p1.getStockQuantity());

        // Yeni fiyatla yeni bir ürün
        ImmutableProduct p2 = p1.withPrice(149.99);
        System.out.println(p2.getName() + ", " + p2.getPrice() + ", " + p2.getStockQuantity());

        // Orijinal ürün değişmez!
        System.out.println("Original product: " + p1.getPrice());
    }
}
