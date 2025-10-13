package lab9;

import java.util.Date;

public class Main {
	public static void main(String[] args) {
	
		Book book = new Book("Sevgi Yukaridan Gelir","Hayati Inanc",100);
		Movie movie = new Movie("Inception","Christopher Nolan",2.5);
		
		book.setReleaseDate(new Date(84,5,8));//1984-06-08
		movie.setReleaseDate(new Date(110,6,16));//2010-07-16
		
		//System.out.println(book.toString());
		System.out.println(book.getItemInfo());
		
		//System.out.println(movie.toString());
		System.out.println(movie.getItemInfo());
	}
	
}
