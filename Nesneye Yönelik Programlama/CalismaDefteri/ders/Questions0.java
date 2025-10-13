package ders;

//import java.util.Scanner;

public class Questions0 {

	public static void main(String[] args) {

		
		  // Alegebra Solve Cramer's Rule--------------------------------------------------
		/* 
		 * Scanner input = new Scanner(System.in); double a = input.nextDouble(); double
		 * b = input.nextDouble(); double c = input.nextDouble(); double d =
		 * input.nextDouble(); double e = input.nextDouble(); double f =
		 * input.nextDouble();
		 * 
		 * double determinant = a * d - b * c;
		 * 
		 * if (determinant == 0) { System.out.println("Denklemin cozumu yoktur"); } else
		 * { double x = (e * d - b * f) / determinant; double y = (a * f - e * c) /
		 * determinant;
		 * 
		 * System.out.println("Çözüm: x = " + x + ", y = " + y); } input.close();
		 */
		
		  //Desimalden Hekzadesimale--------------------------------------------------------
		/*
		Scanner input = new Scanner(System.in);

		System.out.print("Enter a decimal number: ");
		int decimal = input.nextInt();

		String hex = "";

		while (decimal != 0) {
			int hexValue = decimal % 16;

			char hexDigit = (hexValue <= 9 && hexValue >= 0) ? (char) (hexValue + '0') : (char) (hexValue - 10 + 'A');

			hex = hexDigit + hex;
			decimal = decimal / 16;
		}

		System.out.println("The hex number is " + hex);
		input.close();
		*/
		
		
		// Display the header of the table--------------------------------------------------------
		/*
		System.out.printf("%-10s%-10s%-10s%-10s%-10s\n", "Degrees", "Radians", "Sine", "Cosine", "Tangent");

		// Display values for 30 degrees
		int degrees = 30;
		double radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n", degrees, radians, Math.sin(radians), Math.cos(radians),
				Math.tan(radians));

		// Display values for 60 degrees
		degrees = 60;
		radians = Math.toRadians(degrees);
		System.out.printf("%-10d%-10.4f%-10.4f%-10.4f%-10.4f\n", degrees, radians, Math.sin(radians), Math.cos(radians),
				Math.tan(radians));
		
		*/
		
		//Find your Birthday----------------------------------------------------------------------
		/*
		String set1 =
			      " 1  3  5  7\n" +
			      " 9 11 13 15\n" +
			      "17 19 21 23\n" +
			      "25 27 29 31";

			    String set2 =
			      " 2  3  6  7\n" +
			      "10 11 14 15\n" +
			      "18 19 22 23\n" +
			      "26 27 30 31";

			    String set3 =
			      " 4  5  6  7\n" +
			      "12 13 14 15\n" +
			      "20 21 22 23\n" +
			      "28 29 30 31";

			    String set4 =
			      " 8  9 10 11\n" +
			      "12 13 14 15\n" +
			      "24 25 26 27\n" +
			      "28 29 30 31";

			    String set5 =
			      "16 17 18 19\n" +
			      "20 21 22 23\n" +
			      "24 25 26 27\n" +
			      "28 29 30 31";

			    int day = 0;

			    // Create a Scanner
			    Scanner input = new Scanner(System.in);

			    // Prompt the user to answer questions
			    System.out.print("Is your birthday in Set1?\n");
			    System.out.print(set1);
			    System.out.print("\nEnter 0 for No and 1 for Yes: ");
			    int answer = input.nextInt();

			    if (answer == 1)
			      day += 1;

			    // Prompt the user to answer questions
			    System.out.print("\nIs your birthday in Set2?\n");
			    System.out.print(set2);
			    System.out.print("\nEnter 0 for No and 1 for Yes: ");
			    answer = input.nextInt();

			    if (answer == 1)
			      day += 2;

			    // Prompt the user to answer questions
			    System.out.print("Is your birthday in Set3?\n");
			    System.out.print(set3);
			    System.out.print("\nEnter 0 for No and 1 for Yes: ");
			    answer = input.nextInt();

			    if (answer == 1)
			      day += 4;

			    // Prompt the user to answer questions
			    System.out.print("\nIs your birthday in Set4?\n");
			    System.out.print(set4);
			    System.out.print("\nEnter 0 for No and 1 for Yes: ");
			    answer = input.nextInt();

			    if (answer == 1)
			      day += 8;

			    // Prompt the user to answer questions
			    System.out.print("\nIs your birthday in Set5?\n");
			    System.out.print(set5);
			    System.out.print("\nEnter 0 for No and 1 for Yes: ");
			    answer = input.nextInt();

			    if (answer == 1)
			      day += 16;

			    System.out.println("\nYour birthday is " + day + "!");
			    input.close();
		*/
		
	}

}
