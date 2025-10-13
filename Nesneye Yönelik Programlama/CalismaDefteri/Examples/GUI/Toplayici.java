package GUI;

import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class PencereTopla extends JFrame implements ActionListener {

	JTextField jtfa, jtfb;
	JLabel jlbl;
	JButton buton1, buton2;

	PencereTopla(String baslik) {
		super(baslik);
		this.setSize(500, 70);
		this.setResizable(false);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		this.setLayout(new GridLayout(1, 5));//1 satır 5 sutun
		jtfa = new JTextField();
		jtfb = new JTextField();
		jlbl = new JLabel();

		buton1 = new JButton("Topla");
		buton1.addActionListener(this);

		buton2 = new JButton("Sil");
		buton2.addActionListener(this);

		this.add(jtfa);
		this.add(jtfb);
		this.add(jlbl);
		this.add(buton1);
		this.add(buton2);
		
		this.setVisible(true);

	}

	@Override
	public void actionPerformed(ActionEvent e) {
		JButton kaynak = (JButton) e.getSource();

		if (kaynak == buton2) {
			jtfa.setText("");
			jtfb.setText("");
			jlbl.setText("");
		} else {
			try {
				double sayi1 = Double.parseDouble(jtfa.getText());
				double sayi2 = Double.parseDouble(jtfb.getText());
				jlbl.setText("" + (sayi1 + sayi2));
			} catch (Exception ex) {
				jlbl.setText("HATA!");
			}
		}
	}

}

public class Toplayici {

	public static void main(String[] args) {
		new PencereTopla("Toplama Programi Hosgeldin Ayşe Amine :) ");
	}

}
