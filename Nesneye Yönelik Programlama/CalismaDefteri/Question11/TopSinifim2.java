package Question11;

import javax.swing.JOptionPane;

class kucukTop {
	void atis() {// Bos Metot yapabilirim, nasilsa ezilecek
		// Ama bu metodu yazmasam olmaz boş bile olsa yazmak gerekir
	}
	private void privateMetot() {
		System.out.println("Ben private metodum.");
	}
	public void get_private_metot() {
		 privateMetot();
	}
	
}

class Tenis_Topu extends kucukTop {
	@Override
	void atis() {
		System.out.println("Tenis topu atildi.");
	}
}

class Pinpon_Topu extends kucukTop {
	@Override
	void atis() {
		System.out.println("Pinpon topu atildi.");
	}
}

public class TopSinifim2 {

	public static void main(String[] args) {
		kucukTop tt = new Tenis_Topu();
		kucukTop pt = new Pinpon_Topu();
		kucukTop kt = new kucukTop();
		atisi_cagir(tt);
		atisi_cagir(pt);
		atisi_cagir(kt);// bos hicbir cikti vermez
		
		top_bilgi(kt);
		top_bilgi(pt);
		top_bilgi(tt);
		tt.get_private_metot();
		kt.get_private_metot();
		pt.get_private_metot();
	}

	static void atisi_cagir(kucukTop x) {// Polimorfik Metot
		x.atis();
	}

	static void top_bilgi(kucukTop x) {
		if (x instanceof Tenis_Topu)
			JOptionPane.showMessageDialog(null,
					"Tenis topu, tenis maçlarında kullanılan, sıkıştırılmış hava ile doldurulmuş bir lastik topdur",
					"Tenis Topu Bilgi", JOptionPane.INFORMATION_MESSAGE);
		else if (x instanceof Pinpon_Topu)
			JOptionPane.showMessageDialog(null,
					"Pinpon topları genellikle selüloz asetat veya plastik malzemeden üretilir.Masa tenisi oyununda kullanilir.",
					"Pinpon Topu Bilgi", JOptionPane.INFORMATION_MESSAGE);
		else {
			JOptionPane.showMessageDialog(null, "Yalnızca kucukTop.Vasifsiz.", "Top Bilgi",
					JOptionPane.INFORMATION_MESSAGE);
		}
	}

}
