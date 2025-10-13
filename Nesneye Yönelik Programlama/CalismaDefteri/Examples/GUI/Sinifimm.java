package GUI;

import java.awt.Color;
import java.awt.GridLayout;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextField;

class Penceremm extends JFrame{
	
	JPanel[] panellerJPanels;
	JButton[] buttons;
	JLabel jLabel;
	JTextField jTextField;
	
	Penceremm(String baslik){
		super(baslik);
		this.setSize(500,700);
		this.setResizable(false);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);//Varsayilan kapatma davranisini ayarla
		this.setLayout(new GridLayout(3,1));
		
		
		Color[] renkler = {Color.PINK,Color.PINK, Color.LIGHT_GRAY}; 
		panellerJPanels = new JPanel[3];
		for (int i = 0; i < panellerJPanels.length; i++) {
			 panellerJPanels[i] = new JPanel();
			 panellerJPanels[i].setBackground(renkler[i]);
			 this.add(panellerJPanels[i]);
			
		}
		panellerJPanels[0].setLayout(new GridLayout(5,4));
		buttons = new JButton[20];
		for (int i = 0; i < buttons.length; i++) {
			buttons[i] = new JButton(""+(i+1)); 
			panellerJPanels[0].add(buttons[i]);
		}
		
		panellerJPanels[1].setLayout(null);
		jLabel = new JLabel("Bir kelime giriniz");
		jLabel.setBounds(0,50,200,20);
		panellerJPanels[1].add(jLabel);
		
		jTextField = new JTextField();
		jTextField.setBounds(201,50,200,25);
		panellerJPanels[1].add(jTextField);
		
		//En son satir
		this.setVisible(true);
	}
}



public class Sinifimm {

	public static void main(String[] args) {
		new Penceremm("Deneme Penceremm"); 
	}

}
