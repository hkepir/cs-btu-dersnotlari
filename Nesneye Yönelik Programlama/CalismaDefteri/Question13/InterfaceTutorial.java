package Question13;

interface Dog2 {
    void bark(); // Otomatik olarak public ve abstract olur
    void metotAbs(); // Soyut metot
}

class A implements Dog2 { // Interface'i implement eden sınıf
    @Override
    public void bark() {
        System.out.println("Bark! ");
    }

    @Override
    public void metotAbs() {
        System.out.println("Soyut metot ezildi :)");
    }
}

public class InterfaceTutorial {
    public static void main(String[] args) {
        A dog = new A();
        dog.bark();
        dog.metotAbs();
    }
}