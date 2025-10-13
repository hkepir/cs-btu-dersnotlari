package Question10;

public class Circle2D {
    private double x;
    private double y;
    private double radius;

    // No-arg constructor
    public Circle2D() {
        this.x = 0;
        this.y = 0;
        this.radius = 1;
    }

    // Parametreli constructor
    public Circle2D(double x, double y, double radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    // Getter metotları
    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double getRadius() {
        return radius;
    }

    // Çemberin alanını hesaplayan metod
    public double getArea() {
        return Math.PI * radius * radius;
    }

    // Çemberin çevresini hesaplayan metod
    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    // Noktanın çemberin içinde olup olmadığını kontrol eden metod
    public boolean contains(double px, double py) {
        double distance = Math.sqrt(Math.pow(px - x, 2) + Math.pow(py - y, 2));
        return distance <= radius;
    }

    // Verilen çemberin tamamen içinde olup olmadığını kontrol eden metod
    public boolean contains(Circle2D circle) {
        double distance = Math.sqrt(Math.pow(circle.getX() - x, 2) + Math.pow(circle.getY() - y, 2));
        return distance + circle.getRadius() <= radius;
    }

    // Verilen çemberin bu çember ile çakışıp çakışmadığını kontrol eden metod
    public boolean overlaps(Circle2D circle) {
        double distance = Math.sqrt(Math.pow(circle.getX() - x, 2) + Math.pow(circle.getY() - y, 2));
        return distance < (radius + circle.getRadius());
    }
}