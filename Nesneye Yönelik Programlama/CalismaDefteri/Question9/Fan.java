package Question9;

public class Fan {
	public static final int slow = 1;
	public static final int medium = 2;
	public static final int fast = 3;
	
	private int speed ;
	private boolean on ;
	private double radius ;
	private String color ;
	
	public Fan() {
		this.speed = slow;
		this.on = false;
		this.radius = 5.0;
		this.color = "Blue";
	}

	public int getSpeed() {
		return speed;
	}

	public void setSpeed(int speed) {
		this.speed = speed;
	}

	public boolean isOn() {
		return on;
	}

	public void setOn(boolean on) {
		this.on = on;
	}

	public String getColor() {
		return color;
	}

	public void setColor(String color) {
		this.color = color;
	}

	

	public double getRedius() {
		return radius;
	}

	public void setRedius(double redius) {
		this.radius = redius;
	}

	@Override
    public String toString() {
        if (on) {
            return "Fan speed: " + speed + ", Color: " + color + ", Radius: " + radius;
        } else {
            return "Fan color: " + color + ", Radius: " + radius + " (Fan is off)";
        }

	}
	
	
	
	
	
	
	public String fanFormattedDescription() {
		StringBuilder sb = new StringBuilder();
		sb.append("Description of Fan ")
		.append(" Fan Speed : ").append(getSpeed())
		.append(" Fan Color : ").append(getColor())
		.append(" Fan Radius : ").append(getRedius());
		
		StringBuilder sb2 = new StringBuilder();
		sb2.append("Description of Fan ")
		.append(" Fan Color : ").append(getColor())
		.append(" Fan Radius : ").append(getRedius())
		.append(" fan is off ");
		
		if (on) {
			return sb.toString();
		} else {
			return sb2.toString() ;
		}
	}

}
















