package Question11;

class Parent {
    static int x = 3;

    public Parent() {
    
        process();
    }

    public void process() {
        System.out.println("Parent: x = " + x);
    }
}

class Child extends Parent {
	static int x = 8;//Shadowing

	public Child(){
		 x = 9;
	}
    @Override
    public void process() {  
    	//x = 7;
        System.out.println("Child: x = " + x);//default degeri basilir
    }

    
}