package lablar;

import java.util.Arrays;
import java.util.Random;

public class StopWatch {

	private long startTime;
	private long endTime;

	public StopWatch() { //Constructor
		
	}

	public void start() {
		startTime = System.currentTimeMillis();
	}

	public void stop() {
		endTime = System.currentTimeMillis();
	}

	public long getElapsedTime() {
		return endTime - startTime;
	}

	public long getStartTime() {
		return startTime;
	}

	public long getEndTime() {
		return endTime;
	}

	public static void main(String[] args) {

		int numara[] = new int[100000];
		Random random = new Random();

		for (int i = 0; i < numara.length; i++) {
			numara[i] = random.nextInt(100000);
		}

		StopWatch stopWatch = new StopWatch();

		stopWatch.start();

		Arrays.sort(numara);

		stopWatch.stop();

		System.out.println("100.000 sayiyi hasaplamak " + stopWatch.getElapsedTime() + " milisaniye sürdü");

	}
}
