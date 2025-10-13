package GUI;

import java.awt.Color;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JPanel;

public class myJPanel {

	public static void main(String[] args) {
		
		JFrame pencere = new JFrame("Panel Ornegi");
		pencere.setSize(400,300);
		pencere.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		JPanel panelim = new JPanel();
		panelim.setBackground(Color.cyan);
		panelim.setLayout(new GridLayout(2,2));
		
		String[] secenekler = {"A", "B", "C", "D"};

        for (String secenek : secenekler) {
            JButton btn = new JButton(secenek);
            // Tıklanınca yapılacak işlemi tanımlıyoruz
            btn.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent e) {
                    System.out.println(secenek + " şıkkı seçildi");
                }
            });
            panelim.add(btn);
        }


		/*
		panelim.add(new JButton("A"));
		panelim.add(new JButton("B"));
		panelim.add(new JButton("C"));
		panelim.add(new JButton("D"));
		*/
		
		pencere.add(panelim);
		pencere.setVisible(true);
		
	}

}
