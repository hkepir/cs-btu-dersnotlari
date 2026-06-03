<?php
echo "<h2>PHP Dosya İşlemleri (File Handling)</h2>";

// 1. ADIM: Dosyaya Veri Yazma / Ekleme
// 'mac_raporlari.txt' adında bir dosya açıyoruz. 
// 'a' modu (Append) kullanıyoruz; çünkü dosya yoksa sıfırdan oluşturur, varsa eski verileri silmeden altına yazar.
$dosya = fopen("mac_raporlari.txt", "a");

if ($dosya) {
    // Yazmak istediğimiz veri metni (\n işareti bir alt satıra geçmeyi sağlar)
    $yeniRapor = "Tarih: " . date("Y-m-d H:i:s") . " | Galaktik Espor: 2 - Anadolu Kartalları: 1 \n";
    
    // Slayttaki gibi fwrite ile dosyaya değişkenimizi yazıyoruz
    fwrite($dosya, $yeniRapor);
    
    // İşimiz bitince dosyayı kapatıyoruz
    fclose($dosya);
    echo "<p style='color:green;'>✔️ Maç raporu dosyaya başarıyla kaydedildi!</p>";
} else {
    echo "<p style='color:red;'>❌ Dosya açma hatası oluştu.</p>";
}

echo "<hr>";

// 2. ADIM: Dosyadan Veri Okuma
echo "<h3>Kayıtlı Tüm Maç Raporları:</h3>";

// Okuma işlemi yapacağımız için 'r' (Read) modunda açıyoruz
$dosyaOku = fopen("mac_raporlari.txt", "r");

if ($dosyaOku) {
    // Slayttaki feof() fonksiyonu: Dosyanın sonuna (End of File) gelinip gelinmediğini kontrol eder.
    // Döngü, dosyanın son satırına ulaşana kadar döner.
    while (!feof($dosyaOku)) {
        // fgets() fonksiyonu dosyadaki veriyi satır satır okur
        $satir = fgets($dosyaOku);
        echo $satir . "<br>";
    }
    
    fclose($dosyaOku);
} else {
    echo "Henüz okunacak bir rapor dosyası bulunamadı.";
}
?>