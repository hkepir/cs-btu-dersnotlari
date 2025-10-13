package lab9;

public class Book extends Medialtem {
	private int pages ;
	
	public Book() {
		super("Unknown", "Unknown");
		this.pages = 0;
	}
	
	public Book(String title, String author,int pages) {
		super(title, author);
		this.pages = pages;
	}

	public int getPages() {
		return pages;
	}

	public void setPages(int pages) {
		this.pages = pages;
	}
	
	@Override 
	public String getItemInfo() {
		return "Book: \""+title+"\" by " +creator+" with "+pages+" pages.";
	}
	
	

}
