package GUI;

import javax.swing.*;
import java.awt.event.*;

public class OrnekFrame extends JFrame implements ActionListener {
    JTextField tf;
    JButton btn;
    JLabel label;

    OrnekFrame() {
        tf = new JTextField(20);
        btn = new JButton("Yazıyı Göster");
        label = new JLabel();

        btn.addActionListener(this);

        JPanel panel = new JPanel();
        panel.add(tf);
        panel.add(btn);
        panel.add(label);

        this.add(panel);
        this.setSize(300, 200);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);
        this.setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String yazi = tf.getText();
        label.setText("Girdi: " + yazi);
    }

    public static void main(String[] args) {
        new OrnekFrame();
    }
}
