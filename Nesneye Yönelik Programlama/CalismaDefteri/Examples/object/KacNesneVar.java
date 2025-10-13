package object;

public class KacNesneVar {

	static int nesneSayisi;
	char oprt;
	
	public KacNesneVar() {
		nesneSayisi++;
	}
	
	
	public KacNesneVar(char oprt) {
		this.oprt = oprt;
	}


	public int uretilenNesneAdedi() {
		return nesneSayisi;
	}
	
	public static void yazdir() {
		System.out.print("Nesnenin Operatoru --> ");
		//System.out.println(oprt); bu satir calismaz static bir metottan non-static bir degiskene erisilemez !!!
	}

}
