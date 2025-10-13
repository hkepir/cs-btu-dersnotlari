package Question9;

public class BMITest {

	public static void main(String[] args) {

		BMI bmi1 = new BMI("Hikmet", 20, 53, 163);
		System.out.println("The BMI for " + bmi1.getName() + " is " + bmi1.getBMI() + " " + bmi1.getStatus());

		BMI bmi2 = new BMI("Hikmet", 60, 160);
		System.out.println("The BMI for " + bmi2.getName() + " is " + bmi2.getBMI() + " " + bmi2.getStatus());

		System.out.println(bmi1.equals(bmi2));// object equals referenslari karsilastirdi false
		System.out.println(bmi1.getName().equals(bmi2.getName()));// String equals içerikleri karsilastirdi truei

	}

}
