package lablar;

import java.util.concurrent.Callable;

public class SumTask implements Callable<Integer> {
	
	private int a,b;
	
	public SumTask(int a,int b) {
		this.a = a;
		this.b = b;
	}
	@Override
    public Integer call() {
        System.out.println("Toplama başladı");
        int result = a + b;
        System.out.println("Toplama bitti");
        return result;
    }
}
