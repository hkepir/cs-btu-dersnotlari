package mycodes;

import java.time.LocalDate;
import java.time.LocalTime;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;

public class DateTimeExample {
    public static void main(String[] args) {
        // Bugünün tarihi
        LocalDate today = LocalDate.now();
        // Şu anki saat
        LocalTime now = LocalTime.now();
        // Tarih + saat birlikte
        LocalDateTime dateTime = LocalDateTime.now();

        // Formatlı çıktı için formatter
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd.MM.yyyy HH:mm:ss");

        System.out.println("Bugünün tarihi: " + today);
        System.out.println("Şu anki saat: " + now);
        System.out.println("Tarih ve saat birlikte (formatlı): " + dateTime.format(formatter));
    }
}
