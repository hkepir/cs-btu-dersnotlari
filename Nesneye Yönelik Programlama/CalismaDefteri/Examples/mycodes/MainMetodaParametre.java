package mycodes;

public class MainMetodaParametre {
	public static void main(String[] args) {
		System.out.println("Number of strings is "+args.length);
		for (String string : args) {
			System.out.println(string);
		}
	}
}
