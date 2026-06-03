<?php
// Veritabanı Sunucu Bilgileri (XAMPP Varsayılan Ayarları)
$sunucu = "localhost";
$kullanici = "root";
$sifre = "";
$veritabanı = "espor_db";

// Slayttaki meşhur bağlantı fonksiyonu
$baglanti = mysqli_connect($sunucu, $kullanici, $sifre, $veritabanı);

// Bağlantı başarılı mı kontrol edelim
if (!$baglanti) {
    // Eğer bağlantı başarısızsa sistemi durdur ve hatayı ekrana bas
    die("❌ Veritabanı bağlantı hatası: " . mysqli_connect_error());
}

// Türkçe karakter sorunu yaşamamak için karakter setini ayarlıyoruz
mysqli_set_charset($baglanti, "utf8");

// NOT: Bu dosya sadece bir köprüdür, doğrudan tarayıcıda açıldığında boş beyaz ekran verir.
// Başarılıysa hiçbir şey yazmaz, hata varsa yukarıdaki die() çalışır.
?>