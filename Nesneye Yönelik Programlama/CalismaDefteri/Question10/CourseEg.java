package Question10;

public class CourseEg {
	private String courseName;
	private String[] students = new String[10];
	private int numberOfStudents;
	
	public CourseEg() {
		
	}
	
	public CourseEg(String courseName) {
		this.courseName = courseName;
	}
	
	public String getCourseName() {
		return  courseName;
	}
	
	public void addStudent(String student) {
		students[numberOfStudents]=student;
		numberOfStudents++;
	}
	
	public void dropStudent(String student) {
		for (int i = 0; i < numberOfStudents; i++) {
			if (students[i].equals(student)) {
				//ogrenciyi listeden cikar
				for (int j = i; j < numberOfStudents-1; j++) {
					students[j]= students[j+1];
				}
				students[numberOfStudents-1] = null;//son ogeyi temizle
				numberOfStudents--;//ogrenci sayisini azalt
				break;
			}
		}
	}
	
	public String[] getStudents() {
		return students;
	}
	
	public int getNumberOfStudents() {
		return numberOfStudents;
	}
	
	
	
	
	
	
	
	
	
	
	
}
