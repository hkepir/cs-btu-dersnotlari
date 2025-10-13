package Multithread;

import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;

class Gorev implements Runnable {
	boolean izin = false;
	JLabel benim_label;

	Gorev(JLabel x) {
		this.benim_label = x;
	}

	@Override
	public void run() {
		int i = 1;
		while (true) {
			if (izin) {
				benim_label.setText("" + i);
				i++;
			}
			try {
				Thread.sleep(1000);
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
}

class Pencere extends JFrame implements ActionListener {

	JLabel lbl1, lbl2;
	JButton dugme1, dugme2;
	Gorev gorev1, gorev2;

	public Pencere() {
		super("Pencerem");
		this.setResizable(false);
		this.setSize(600, 400);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);

		this.setLayout(new FlowLayout());

		lbl1 = new JLabel("Label1");
		lbl2 = new JLabel("Label2");

		dugme1 = new JButton("Basla");
		dugme2 = new JButton("Basla");

		dugme1.addActionListener(this);// içine neden this yazdık
		dugme2.addActionListener(this);

		this.add(lbl1);
		this.add(lbl2);
		
		this.add(dugme1);
		this.add(dugme2);
		

		gorev1 = new Gorev(lbl1);
		Thread t1 = new Thread(gorev1);
		t1.start();

		gorev2 = new Gorev(lbl2);
		Thread t2 = new Thread(gorev2);
		t2.start();

		this.setVisible(true);// En son Pencereyi gorunur yap
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if (e.getSource().equals(dugme1)) {
			// dugme1 e basildi
			if (dugme1.getText().equals("Basla")) {
				dugme1.setText("Dur");
				gorev1.izin = true;
			} else {
				dugme1.setText("Basla");
				gorev1.izin = false;
			}
		}

		else if (e.getSource().equals(dugme2)) {
			// dugme2 ye basildi
			if (dugme2.getText().equals("Basla")) {
				dugme2.setText("Dur");
				gorev2.izin = true;
			} else {
				dugme2.setText("Basla");
				gorev2.izin = false;
			}
		}

	}

}

public class Sinifim {
	public static void main(String[] args) {
		new Pencere();
	}
}
