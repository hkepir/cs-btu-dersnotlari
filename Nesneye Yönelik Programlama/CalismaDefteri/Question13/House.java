package Question13;
//SHALLOW COPY

class Oda {
	int m2;

	Oda(int m2) {
		this.m2 = m2;
	}
}

public class House implements Cloneable, Comparable<House> { //SHALLOW COPY
	private int id = 1;
	private double area;
	private java.util.Date whenBuilt;
	Oda oda;
	
	public House(int id, double area) {
		super();
		this.id = id;
		this.area = area;
		whenBuilt = new java.util.Date();
		oda = new Oda(20);
	}

	public int getId() {
		return id;
	}

	public double getArea() {
		return area;
	}

	public java.util.Date getWhenBuilt() {
		return whenBuilt;
	}

	@Override
	public Object clone() throws CloneNotSupportedException { //SHALLOW COPY
		return super.clone();
	}

	@Override
	public int compareTo(House o) {
		if (area > o.area) {
			return 1;
		} else if (area < o.area) {
			return -1;
		} else {
			return 0;
		}

	}
}
