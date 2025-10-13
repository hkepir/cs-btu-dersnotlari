package object;

public class KacNesneVarTest {

	public static void main(String[] args) {
		KacNesneVar n1 = new KacNesneVar();
		KacNesneVar n2 = new KacNesneVar();
		KacNesneVar n3 = new KacNesneVar();
		
		System.out.println(n1.uretilenNesneAdedi()+" adet nesne olusturuldu");
		System.out.println(n2.uretilenNesneAdedi()+" adet nesne olusturuldu");
		System.out.println(n3.uretilenNesneAdedi()+" adet nesne olusturuldu");//hepsi 3 verir cunku static degisken
		n1.oprt='*';
		
		//static metot cagirma
		KacNesneVar.yazdir();
		System.out.print(n1.oprt);
	}

}
