package lab9;

public class Movie extends Medialtem{
	private double duration;//in hours
	
	public Movie() {
		super("Untitled","Unknown");
		this.duration = 0.0;
	}
	
	public Movie(String title ,String director,double duraion) {
		super(title,director);
		this.duration = duraion;
	}
	
	public double getDuration() {
		return duration;
	}
	
	public void setDuration(double duration) {
		this.duration = duration;
	}

	@Override
	public String getItemInfo() {
		return "Movie: \""+title+"\" directed by " +creator+" lasts "+ duration+" hours.";
	}

}
