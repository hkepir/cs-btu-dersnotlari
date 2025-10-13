package object;

public class Insan {
	double boy;
	String cinsiyetString;
	int yas;
	
	public static String numaraString;
	//static olarak tanımlarnırsa 
	//nesneye ait degil sınıfa aittir.

	public static void main(String[] args) {
		Insan hilal = new Insan();
		hilal.boy = 1.63;
		hilal.cinsiyetString = "Women\n";
		hilal.yas = 19;
		System.out.println("Hilal'in Bilgileri \n" + "Yas: " + hilal.yas + " Boy: " + hilal.boy + " Cinsiyet: "
				+ hilal.cinsiyetString);
		
		
		hilal.numaraString = "471";// soyle erismek daha uygun Insan.numaraString = "471"; 
		System.out.println("Hilal numara : "+hilal.numaraString);
		Insan ayse =new Insan();
		System.out.println("Ayse numara : "+ayse.numaraString);//471 cikar 
		//static olmasaydi null yazilirdi
	}

}
