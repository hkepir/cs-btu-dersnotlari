package deneme6;

import java.util.Date;

public class DateObj {

	public static void main(String[] args) {
		Date[] dates = new Date[10];
		for (int i = 0; i < dates.length; i++) {
			dates[i] = new Date();
		}
		System.out.println(dates[0].toString());
	}
}
