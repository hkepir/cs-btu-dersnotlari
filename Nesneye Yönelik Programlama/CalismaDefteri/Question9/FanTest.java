package Question9;

public class FanTest {

	public static void main(String[] args) {
		Fan fan1 = new Fan();
		
		fan1.setOn(true);
		fan1.setSpeed(Fan.fast);
		fan1.setRedius(10.0);
		fan1.setColor("Yellow");
		
		Fan fan2 = new Fan();
		
		fan2.setOn(false);
		fan2.setSpeed(Fan.medium);
		fan2.setRedius(5);
		fan2.setColor("Blue");
	
		System.out.println("Fan 1: \n"+fan1.toString());
		System.out.println("Fan 2: \n"+fan2.toString());
		
		System.out.println("\n\nwith String Builder ");
		System.out.println(fan1.fanFormattedDescription());
		System.out.println(fan2.fanFormattedDescription());
	
	}

}
