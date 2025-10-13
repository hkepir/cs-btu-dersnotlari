package GUI;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class PencereCarp extends JFrame implements ActionListener {

	JButton b1, b2;
	JLabel sonuc_kutusu;
	JTextField kutu1, kutu2;

	PencereCarp(String baslik) {
		super(baslik);
		// Pencere Ayarlari

		this.setResizable(false);
		this.setSize(500, 70);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setLayout(new GridLayout());

		// Bilesen Ayarlari

		kutu1 = new JTextField();
		kutu2 = new JTextField();

		sonuc_kutusu = new JLabel();

		b1 = new JButton("Carp");
		b1.addActionListener(this);

		b2 = new JButton("Sil");
		b2.addActionListener(this);

		// Bilesenler Pencereye Eklendi

		this.add(kutu1);
		this.add(kutu2);
		this.add(sonuc_kutusu);
		this.add(b1);
		this.add(b2);

		// Pencere Gorunur
		this.setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent ae) {
		
		JButton dinleyen_buton = new JButton();
		
		if (dinleyen_buton == b2) {
			kutu1.setText("");
			kutu2.setText("");
			sonuc_kutusu.setText("");
			
		} else {
			
			try {
				double sayi1 = Double.parseDouble(kutu1.getText()); 
				double sayi2 = Double.parseDouble(kutu2.getText()); 
				double carpim_sonucu = sayi1*sayi2;
				
				sonuc_kutusu.setText(""+carpim_sonucu);
			
			} catch (Exception e) {
				sonuc_kutusu.setText("HATA");
			}
			
		}
	}
}

public class CarpGUI {

	public static void main(String[] args) {
		new PencereCarp("Çarpma Programina Hosgeldin Ayse Amine :)");
	}

}
