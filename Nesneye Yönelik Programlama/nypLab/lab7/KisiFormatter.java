package lab7;

public class KisiFormatter {
	public static String format(Kisi kisi) {
		StringBuilder sb = new StringBuilder();
		
		sb.append(" Ad : ").append(kisi.getAd())
		.append(" Soyad : ").append(kisi.getSoyad())
		.append(" Yas : ").append(kisi.getYas())
		.append(" Yetiskin mi? ")
		.append(kisi.getYas() >= 18 ? " Evet " : " Hayir ");

		return sb.toString();
	}
}
