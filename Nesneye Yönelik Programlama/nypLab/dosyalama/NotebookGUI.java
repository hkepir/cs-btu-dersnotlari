package dosyalama;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.util.Scanner;

public class NotebookGUI extends JFrame {

	private JTextField notAlani;
	private JButton kaydetButton, gosterButton;
	private JLabel notlarLabel,kutuJLabel;

	private final String dosyaAdi = "not_defteri.txt";

	public NotebookGUI() {
		super("Not Defteri");

		// Panel oluştur
		JPanel panel = new JPanel();
		panel.setLayout(new GridLayout(5, 1, 10, 10));
		panel.setBackground(Color.LIGHT_GRAY);
		panel.setBorder(BorderFactory.createEmptyBorder(10, 10, 10, 10));

		// Not giriş alanı
		notAlani = new JTextField();
		panel.add(new JLabel("Notunuzu girin:"));
		panel.add(notAlani);

		// Butonlar
		kaydetButton = new JButton("Kaydet");
		gosterButton = new JButton("Notları Göster");
		panel.add(kaydetButton);
		panel.add(gosterButton);

		// Not gösterim alanı
		notlarLabel = new JLabel("<html>Notlar burada gösterilecek</html>");
		panel.add(notlarLabel);
		kutuJLabel = new JLabel("Kutu Bos Alan");
		panel.add(kutuJLabel);
		add(panel);
		

		// ActionListener - Kaydet Butonu
		kaydetButton.addActionListener(e -> {
			String not = notAlani.getText();
			if (!not.isEmpty()) {
				try (PrintWriter pw = new PrintWriter(new FileWriter(dosyaAdi))) {
					pw.println(not);
					JOptionPane.showMessageDialog(this, "Not kaydedildi.");
					notAlani.setText("");
				} catch (IOException ex) {
					JOptionPane.showMessageDialog(this, "Dosya yazılırken hata oluştu.");
				}
			} else {
				JOptionPane.showMessageDialog(this, "Not alanı boş olamaz.");
			}
		});

		// ActionListener - Göster Butonu
		gosterButton.addActionListener(e -> {
			File file = new File(dosyaAdi);
			if (file.exists()) {
				try (Scanner scanner = new Scanner(file)) {
					StringBuilder notlar = new StringBuilder("<html>");
					while (scanner.hasNextLine()) {
						notlar.append(scanner.nextLine()).append("<br>");
					}
					notlar.append("</html>");
					notlarLabel.setText(notlar.toString());
				} catch (IOException ex) {
					JOptionPane.showMessageDialog(this, "Dosya okunurken hata oluştu.");
				}
			} else {
				notlarLabel.setText("Henüz hiç not eklenmemiş.");
			}
		});

		// Opsiyonel: Enter tuşu ile not kaydetme
		notAlani.addKeyListener(new KeyAdapter() {
			public void keyPressed(KeyEvent e) {
				if (e.getKeyCode() == KeyEvent.VK_ENTER) {
					kaydetButton.doClick();
				}
			}
		});

		// Pencere ayarları
		setSize(400, 300);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setLocationRelativeTo(null); // Ortala
		setVisible(true);
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		System.out.println("1. Terminal ile çalış");
		System.out.println("2. GUI ile çalış");
		int secim = input.nextInt();

		if (secim == 1) {
			Notebook.main(args); // terminal versiyonun
		} else if (secim == 2) {
			SwingUtilities.invokeLater(() -> new NotebookGUI());
		} else {
			System.out.println("Geçersiz seçim.");
		}

	}
}
