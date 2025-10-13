package Question10;

public class Circle2DTest {
    public static void main(String[] args) {
        Circle2D circle1 = new Circle2D(2, 3, 5);
        Circle2D circle2 = new Circle2D(3, 4, 2);
        Circle2D circle3 = new Circle2D(10, 10, 1);

        System.out.println("Circle1'in Alanı: " + circle1.getArea());
        System.out.println("Circle1'in Çevresi: " + circle1.getPerimeter());
        
        System.out.println("Circle1, noktayı (3,3) içeriyor mu? " + circle1.contains(3, 3));
        System.out.println("Circle1, Circle2'yi tamamen içeriyor mu? " + circle1.contains(circle2));
        System.out.println("Circle1, Circle3 ile çakışıyor mu? " + circle1.overlaps(circle3));
    }
}