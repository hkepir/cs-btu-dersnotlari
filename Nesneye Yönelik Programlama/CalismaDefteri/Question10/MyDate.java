package Question10;

import java.util.GregorianCalendar;

public class MyDate {
    private int year;
    private int month;
    private int day;

    // Varsayılan olarak bugünün tarihini oluşturur
    public MyDate() {
        GregorianCalendar calendar = new GregorianCalendar();
        this.year = calendar.get(GregorianCalendar.YEAR);
        this.month = calendar.get(GregorianCalendar.MONTH);
        this.day = calendar.get(GregorianCalendar.DAY_OF_MONTH);
    }

    // Belirtilen milisaniye değerine göre tarih oluşturur
    public MyDate(long elapsedTime) {
        setDate(elapsedTime);
    }

    // Belirtilen yıl, ay ve gün ile tarih oluşturur
    public MyDate(int year, int month, int day) {
        this.year = year;
        this.month = month;
        this.day = day;
    }

    // Getter metotları
    public int getYear() {
        return year;
    }

    public int getMonth() {
        return month;
    }

    public int getDay() {
        return day;
    }

    // Tarihi belirtilen milisaniye değeriyle ayarlar
    public void setDate(long elapsedTime) {
        GregorianCalendar calendar = new GregorianCalendar();
        calendar.setTimeInMillis(elapsedTime);
        this.year = calendar.get(GregorianCalendar.YEAR);
        this.month = calendar.get(GregorianCalendar.MONTH);
        this.day = calendar.get(GregorianCalendar.DAY_OF_MONTH);
    }
}
/*-----------------------------------
|          MyDate                 |
-----------------------------------
| - int year                      |
| - int month                     |
| - int day                       |
-----------------------------------
| + MyDate()                      |
| + MyDate(long elapsedTime)      |
| + MyDate(int year, int month, int day) |
| + int getYear()                 |
| + int getMonth()                |
| + int getDay()                  |
| + void setDate(long elapsedTime) |
-----------------------------------*/