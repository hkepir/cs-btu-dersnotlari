package Question11;

class Example {
    int y = 20;

    Example() { 
        method();  
    }

    void method() {  
        System.out.println("Method called with: " + y);
    }

    public static void main(String[] args) {
        Example obj = new Example(); // Nesne oluşturuluyor
        Example obj2=new Miras();
    }
}

class Miras extends Example{
 int y = 2;
	@Override
	void method() {
		System.out.println("Iki kati  " + 2*y);
	}
	
}