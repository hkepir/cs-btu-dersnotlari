package Question9;

public class Rectangle {

	private double width;
	private double height;

	public Rectangle() {
		this.height = 1.0;
		this.width = 1.0;
	}

	public Rectangle(double width, double heigh) {
		this.height = heigh;
		this.width = width;
	}

	public double getArea() {
		return this.height * this.width;
	}

	public double getPerimeter() {
		return 2 * (this.height + this.width);
	}

	public static void main(String[] args) {
		Rectangle r1 = new Rectangle();
		System.out.println("1.Alan " + r1.getArea());
		System.out.println("1.Cevre " + r1.getPerimeter());

		Rectangle r2 = new Rectangle(5.0, 6.0);
		System.out.println("2.Alan " + r2.getArea());
		System.out.println("2.Cevre " + r2.getPerimeter());
	}

}
