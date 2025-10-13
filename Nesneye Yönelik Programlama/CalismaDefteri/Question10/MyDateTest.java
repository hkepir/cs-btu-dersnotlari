package Question10;

public class MyDateTest {
    public static void main(String[] args) {
        // Varsayılan tarih (bugünün tarihi)
        MyDate currentDate = new MyDate();
        System.out.println("Bugünün Tarihi: " + currentDate.getYear() + "-" + (currentDate.getMonth() + 1) + "-" + currentDate.getDay());

        // Belirli bir milisaniyeye göre tarih oluştur
        MyDate specificDate = new MyDate(355555133101L);
        System.out.println("Belirtilen Milisaniyeye Göre Tarih: " + specificDate.getYear() + "-" + (specificDate.getMonth() + 1) + "-" + specificDate.getDay());
    }
}