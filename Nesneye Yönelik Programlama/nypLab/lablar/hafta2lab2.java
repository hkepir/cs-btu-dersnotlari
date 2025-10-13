package lablar;

import java.util.Scanner;

import javax.swing.JOptionPane;

public class hafta2lab2 {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		
		String urunAdi = JOptionPane.showInputDialog("Urun adini girin: ");
        String urunFiyatStr = JOptionPane.showInputDialog("Birim fiyatini girin: ");
        
        double urunFiyati = Double.parseDouble(urunFiyatStr);
        
        /*
        String adetStr = JOptionPane.showInputDialog("Kac adet alinacak ?");
        int adet = Integer.parseInt(adetStr);
        */
        System.out.println("Kac adet alinacak ?");
        int adet = scanner.nextInt();
        
        double toplamFiyat = urunFiyati * adet;
        
        String fisMesaji = "--------- Alisveris Fisi ---------\n"
                            + "Urun Adi: " + urunAdi + "\n"
                            + "Birim Fiyati: " + urunFiyati + " TL\n"
                            + "Adet: " + adet + "\n"
                            + "Toplam Fiyat: " + toplamFiyat + " TL\n"
                            + "-----------------------------------";
        
        
        JOptionPane.showMessageDialog(null, fisMesaji, "Alisveris Fisi", JOptionPane.INFORMATION_MESSAGE);
        
        System.out.println("Fis Mesaji\n"+fisMesaji);
        scanner.close();
		
		
	
	}

}
