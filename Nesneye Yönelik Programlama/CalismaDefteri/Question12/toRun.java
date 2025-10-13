package Question12;

public class toRun {

	public static void main(String[] args) {
		try {			
			for (int i = 0; i <2; i++) {
				System.out.println(i+" ");
				System.out.println(1/0);
			}
		}
		catch (Exception e) {
			System.out.println(e.getMessage());
			e.printStackTrace();
			
			System.out.println("Hata Yazdirma");
			StackTraceElement[] ste = e.getStackTrace();
			for (StackTraceElement stackTraceElement : ste) {
				System.out.println(stackTraceElement);
			}
		}
	}

}
