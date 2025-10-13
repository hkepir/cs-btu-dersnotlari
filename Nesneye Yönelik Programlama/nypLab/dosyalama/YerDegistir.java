package dosyalama;

import java.io.File;
import java.io.PrintWriter;
import java.io.IOException;
import java.util.Scanner;

public class YerDegistir {
    public static void main(String[] args) {
        // Kullanıcıdan dört argüman bekleniyor: kaynak dosya, hedef dosya, eski metin, yeni metin
        if (args.length != 4) {
            System.out.println("Kullanım: java ReplaceText sourceFile targetFile oldStr newStr");
            System.exit(1);
        }

        // Kaynak dosyanın var olup olmadığını kontrol et
        File sourceFile = new File(args[0]);
        if (!sourceFile.exists()) {
            System.out.println("Hata: Kaynak dosya " + args[0] + " bulunamadı.");
            System.exit(2);
        }

        // Hedef dosyanın zaten var olup olmadığını kontrol et
        File targetFile = new File(args[1]);
        if (targetFile.exists()) {
            System.out.println("Hata: Hedef dosya " + args[1] + " zaten mevcut.");
            System.exit(3);
        }

        // Dosya içeriğini okuyup değiştirerek yeni dosyaya yaz
        try (Scanner input = new Scanner(sourceFile);
             PrintWriter output = new PrintWriter(targetFile)) {

            while (input.hasNextLine()) {
                String originalLine = input.nextLine(); // Dosyadan satır oku
                String modifiedLine = originalLine.replace(args[2], args[3]); // Eski kelimeyi yeni kelimeyle değiştir
                output.println(modifiedLine); // Yeni dosyaya yaz
            }

            System.out.println("Dosya başarıyla oluşturuldu: " + targetFile.getAbsolutePath());

        } catch (IOException e) {
            System.out.println("Hata: Dosya işlemi sırasında hata oluştu! " + e.getMessage());
        }
    }
}
