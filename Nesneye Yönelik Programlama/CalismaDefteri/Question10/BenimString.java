package Question10;

public class BenimString {
    private char[] karakterler;

    // Constructor: Diziyi alır ve yeni nesne oluşturur
    public BenimString(char[] karakterler) {
        this.setKarakterler(new char[karakterler.length]);
        System.arraycopy(karakterler, 0, this.getKarakterler(), 0, karakterler.length);
    }

    // Belirtilen indisteki karakteri döndürür
    public char karakterGetir(int indeks) {
        if (indeks < 0 || indeks >= getKarakterler().length) {
            throw new IndexOutOfBoundsException("İndeks sınırların dışında!");
        }
        return getKarakterler()[indeks];
    }

    // String'in uzunluğunu döndürür
    public int uzunluk() {
        return getKarakterler().length;
    }

    // Belirtilen aralıktaki karakterlerden oluşan yeni BenimString nesnesi oluşturur
    public BenimString altDizi(int baslangic, int bitis) {
        if (baslangic < 0 || bitis > getKarakterler().length || baslangic > bitis) {
            throw new IndexOutOfBoundsException("Geçersiz alt dizi aralığı!");
        }
        char[] altKarakterler = new char[bitis - baslangic];
        System.arraycopy(getKarakterler(), baslangic, altKarakterler, 0, bitis - baslangic);
        return new BenimString(altKarakterler);
    }

    // Karakterleri küçük harfe çeviren metod
    public BenimString kucukHarfYap() {
        char[] kucukKarakterler = new char[getKarakterler().length];
        for (int i = 0; i < getKarakterler().length; i++) {
            kucukKarakterler[i] = Character.toLowerCase(getKarakterler()[i]);
        }
        return new BenimString(kucukKarakterler);
    }

    // İki BenimString nesnesinin eşit olup olmadığını kontrol eder
    public boolean esitMi(BenimString s) {
        if (s.uzunluk() != this.uzunluk()) {
            return false;
        }
        for (int i = 0; i < getKarakterler().length; i++) {
            if (getKarakterler()[i] != s.karakterGetir(i)) {
                return false;
            }
        }
        return true;
    }

    // Belirtilen tamsayı değerini stringe çeviren statik metod
    public static BenimString sayiDegeri(int sayi) {
        return new BenimString(Integer.toString(sayi).toCharArray());
    }

	public char[] getKarakterler() {
		return karakterler;
	}

	public void setKarakterler(char[] karakterler) {
		this.karakterler = karakterler;
	}
}