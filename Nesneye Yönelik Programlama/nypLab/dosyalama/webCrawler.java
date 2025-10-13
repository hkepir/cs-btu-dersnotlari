package dosyalama;

import java.io.IOException;
import java.net.URL;
import java.util.Scanner;

public class webCrawler {
	
	public static void main(String[] args) throws IOException {
		
		//btu.edu.tr HTML icerigini cekip satir satir ekrana yazdirir.
		URL adres = new URL("https://www.btu.edu.tr/");
		Scanner okuyucu = new Scanner(adres.openStream());
		
		while(okuyucu.hasNext()) {
			System.out.println(okuyucu.nextLine());
		}
	okuyucu.close();
	}
}
