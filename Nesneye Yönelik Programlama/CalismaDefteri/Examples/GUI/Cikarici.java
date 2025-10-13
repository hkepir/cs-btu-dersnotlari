package GUI;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class PencereCikarma extends JFrame implements ActionListener{
	
	JTextField kutu1,kutu2;
	JLabel sonuc_kutusu;
	JButton buton1,buton2;
	
	PencereCikarma(String baslik){
		super(baslik);
		
		//Pencere ayarlari
		this.setResizable(true);
		this.setSize(500, 70);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setLayout(new GridLayout(1,5));
		
		//Bilesen Olusturma
		kutu1 = new JTextField();
		kutu2 = new JTextField();
		
		sonuc_kutusu = new JLabel();
		
		buton1 = new JButton("Çıkar");
		buton2 = new JButton("Sil");
		
		buton1.addActionListener(this);
		buton2.addActionListener(this);
		
		//Bilesenleri Pencereye Ekle 
		//Sira Önemli!!
		
		this.add(kutu1);
		this.add(kutu2);
		this.add(sonuc_kutusu);
		this.add(buton1);
		this.add(buton2);
		
		//Pencereyi Gorunur Yap
		this.setVisible(true);
	}
	
	//Butonlardan hangisine basildi anlammiz gerekiyor
	//Eger Temizle butonuna tiklanmissa -> tum alanlar temizlenecek
	//Eger Cikar butonuna basilmissa -> sayilar cikartilip sonuc gosterilecek
	
	@Override
	public void actionPerformed(ActionEvent ae) {
		JButton kaynak_butonu = (JButton)ae.getSource();
		
		if (kaynak_butonu == buton2) {
			
			kutu1.setText("");
			kutu2.setText("");
			sonuc_kutusu.setText("");
			
		} else {

			try {
				double sayi1 = Double.parseDouble(kutu1.getText());
				double sayi2= Double.parseDouble(kutu2.getText());
				double sonuc = sayi1-sayi2;
				sonuc_kutusu.setText(""+sonuc);
				
			} catch (Exception e) {
				sonuc_kutusu.setText("Hata!");
			}
		}
	}
}





public class Cikarici {

	public static void main(String[] args) {
		new PencereCikarma("Çıkarma İşlemi Makinesi :) Hoşgeldin Ayşe Amine");
	}

}
