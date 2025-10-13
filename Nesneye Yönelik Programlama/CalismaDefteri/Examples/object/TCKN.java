package object;

import java.util.Random;

public class TCKN {
	
	private Long id;
	private String dogumYeri;
	private String tckn;
	
	public Long getId() {
		return id;
	}
	public void setId(Long id) {
		this.id = id;
	}
	public String getDogumYeri() {
		return dogumYeri;
	}
	public void setDogumYeri(String dogumYeri) {
		this.dogumYeri = dogumYeri;
	}
	public String getTckn() {
		return tckn;
	}
		
	public void setTckn(String tckn) {
		boolean kontrol = true;
		
		if (tckn.length() == 11) {
			for (int i = 0; i < tckn.length(); i++) {
				char c = tckn.charAt(i);
				if (Character.isDigit(c)) {
					kontrol = true;
				}else {
					kontrol = false;
					break;
				}
			}
		
		if (kontrol) {
			this.tckn = tckn;
			Random r = new Random();
			int giseNO = r.nextInt(100);//0 ile 100 arasinda
			System.out.println("Gise No: "+giseNO);
			
		}else {
			sonucuYazdir("Lutfen butun karakterleri rakam olacak sekilde giriniz");
		}
	}else 
		sonucuYazdir("TCKN 11 haneli olmak zorundadir !");
	}
		
	
	
	public void sonucuYazdir(String sonuc) {
		System.out.println(sonuc);
	}
	
}
