package mycodes;

//import java.util.Scanner;

//import javax.swing.JOptionPane;

public class ifCondition {

	public static void main(String[] args) {
		
	//Egzersiz 1 : Ders Gecme Durumu
		
		/*	
		Scanner input = new Scanner(System.in);
		
		System.out.println("Adiniz: ");
	
		String ad = input.nextLine();
		
		System.out.println("Soyadiniz: ");
		String soyadString = input.nextLine();
		
		System.out.println("Ders Adi");
		String dersAdi = input.nextLine();
		
		System.out.println("Vize Notu");
		double vize1 = input.nextDouble();
		
		System.out.println("Final Notu");
		double finalnot = input.nextDouble();
		
		double sonuc = (vize1*0.3)+(finalnot*0.7);
		
		if (sonuc>=60) {
			System.out.println(ad+" "+soyadString+" adli ogrenci "
								+dersAdi+ " dersinden "+ sonuc +" ortalamayla gecmistir :)" );
		}else {
			System.out.println("Dersten kaldiniz");
		}
		input.close();
		JOptionPane.showMessageDialog(null,"Puanı "+sonuc,"Dersten Gecme Durumu",JOptionPane.INFORMATION_MESSAGE); 
	*/
	
	
	//Kuruyemisci Problemi
		
		double toptanci = 12*(3.5)+25*(15.7)+40*22;
		double satis = 12*(3.5*1.5)+25*(15.7*(1.4))+40*(22*(1.6));
		double kazanilanPara = satis-toptanci;
		System.out.println("Kazanılan Para: "+kazanilanPara+"\nMaaliyet: "+toptanci);
		if (kazanilanPara>500) {
			System.out.println("Kira odenilebilir");
		}else {
			System.out.println("Kira odenilemiyor");
		}
	}

}
