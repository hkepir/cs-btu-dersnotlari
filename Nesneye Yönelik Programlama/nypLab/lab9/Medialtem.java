package lab9;

import java.util.*;

public abstract class Medialtem {
	protected String title;
	protected String creator;
	protected Date releaseDate;

	protected Medialtem(String title, String creator) {
		this.creator = creator;
		this.title = title;
		this.releaseDate = new Date();
	}

	public String getTitle() {
		return title;
	}

	public void setTitle(String title) {
		this.title = title;
	}

	public String getCreator() {
		return creator;
	}

	public void setCreator(String creator) {
		this.creator = creator;
	}

	public Date getReleaseDate() {
		return releaseDate;
	}

	public void setReleaseDate(Date releaseDate) {
		this.releaseDate = releaseDate;
	}

	@Override
	public String toString() {
		return "Title: " + title + ", Creator: " + creator + ", Release Date:" + releaseDate;
	}

	public abstract String getItemInfo();

}
