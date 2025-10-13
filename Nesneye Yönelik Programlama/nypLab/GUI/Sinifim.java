
//GUI (Graphical User Interface) giriş kodu
package GUI;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

//SWING

//JFrame

class Pencerem extends JFrame{
	
	private static final long serialVersionUID = 1L;// bu satir eklenmezse warning verir
													//Pencerem sınıfı JFrame'den turetildigi icin Serializeable(Serilestirilebilir)
													//Bu uyari zorunlu degil amac versiyonlararası tutarliligi saglamak
	JPanel[] paneller;
	JButton[] dugmeler;
	JLabel jlbl;
	JTextField jtf;
	
	Pencerem(){
		super("Benim programım");
		int en=600, boy=750;
		this.setSize(en,boy);
		this.setResizable(false);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		this.setLayout(new GridLayout(3,1));
		
		Color[] renkler= {Color.RED,Color.GREEN,Color.BLUE};
		paneller=new JPanel[3];
		for(int i=0;i<paneller.length;i++)
		{
			paneller[i]=new JPanel();
			paneller[i].setBackground(renkler[i]);
			this.add(paneller[i]);
		}
		
		paneller[0].setLayout(new GridLayout(5,4));
		dugmeler=new JButton[20];
		for(int i=0;i<dugmeler.length;i++) {
			dugmeler[i]=new JButton(""+(i+1));
			paneller[0].add(dugmeler[i]);
		}
		
		paneller[1].setLayout(null);
		jlbl=new JLabel("Bir kelime giriniz: ");
		jlbl.setBounds(0,50,150,20);
		paneller[1].add(jlbl);
		jtf=new JTextField();
		jtf.setBounds(151,50,200,25);
		paneller[1].add(jtf);
		
		
		this.setVisible(true); //HER ZAMAN EN SON SATIRA
	}
}

public class Sinifim {
	public static void main(String[] args){
		Pencerem x=new Pencerem();
		x.jtf.setText("Merhaba!");  // TextField içine metin yerleştir
		x.dugmeler[0].setEnabled(false); // İlk butonu pasifleştir
		x.setTitle("Yeni Başlık"); // Pencere başlığını değiştir
	}
}

