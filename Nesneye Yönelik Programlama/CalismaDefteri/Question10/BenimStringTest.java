package Question10;

public class BenimStringTest {
    public static void main(String[] args) {
        BenimString yazi = new BenimString(new char[]{'M', 'e', 'r', 'h', 'a', 'b', 'a'});
        BenimString yazi2 = new BenimString(new char[]{'M', 'e', 'r', 'h', 'a', 'b', 'a'});

        System.out.println("Yazının Uzunluğu: " + yazi.uzunluk());
        System.out.println("3. karakter: " + yazi.karakterGetir(2));
        System.out.println("Alt dizi (1,4): " + new String(yazi.altDizi(1, 4).getKarakterler()));
        System.out.println("Küçük harf: " + new String(yazi.kucukHarfYap().getKarakterler()));
        System.out.println("Eşit mi? " + yazi.esitMi(yazi2));
        System.out.println("Sayıdan String: " + new String(BenimString.sayiDegeri(1234).getKarakterler()));
    }
}