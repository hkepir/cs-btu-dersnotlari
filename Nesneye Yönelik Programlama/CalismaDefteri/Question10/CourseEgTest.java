package Question10;

import java.util.Arrays;

public class CourseEgTest {

	public static void main(String[] args) {
		CourseEg course = new CourseEg();
		
		course.addStudent("Ali");
		course.addStudent("Hilal");
		course.addStudent("Feride");
		course.addStudent("Hikmet");
		System.out.println("Kursa kayitli ogrenciler");
	
		for (String eleman : course.getStudents()) {
			if (eleman != null) {
				System.out.println(eleman);
			}
		}
		
		course.dropStudent("Hikmet");
		System.out.println("\n...1 yil sonra...");
		System.out.println("Hikmet mezun oldu...");
		for (String eleman : course.getStudents()) {
			if (eleman!=null) {
				System.out.println(eleman);
			}
		}
	
		System.out.println("\nDizi olarak görüntüle\n"+Arrays.toString(course.getStudents()));
	}

}
