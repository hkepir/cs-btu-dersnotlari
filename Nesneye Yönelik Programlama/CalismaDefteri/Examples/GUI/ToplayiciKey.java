package GUI;

import java.awt.GridBagLayout;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class PencereToplaKey extends JFrame implements KeyListener{
	
	JTextField box1,box2;
	JLabel result_box;
	
	
	public PencereToplaKey(String title) {
		super(title);
		this.setSize(1000,700);
		this.setResizable(false);
		this.setDefaultCloseOperation(EXIT_ON_CLOSE);
		
		this.setLayout(new GridBagLayout());
		box1 = new JTextField();
		box2 = new JTextField();
		result_box = new JLabel();
		
		box1.addKeyListener(this);
		box2.addKeyListener(this);
		
		this.add(box1);
		this.add(box2);
		this.add(result_box);
		
		this.setVisible(true);
		
		}
	@Override
	public void keyTyped(KeyEvent e) {}
	public void keyReleased(KeyEvent e) {}
	public void keyPressed(KeyEvent e) {
		//Eger basilan tus enter ise
		if (e.getKeyCode() == KeyEvent.VK_ENTER) {
			try {
				double number1 = Double.parseDouble(box1.getText());
				double number2 = Double.parseDouble(box2.getText());
				result_box.setText(""+(number1+number2));
			} catch (Exception excpt) {
				result_box.setText("Error!");
			}
		}
	}
	
}


public class ToplayiciKey {

	public static void main(String[] args) {
		new PencereToplaKey("Toplama Makinesi ");
		
	}

}
