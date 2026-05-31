<?php
// 1. Değişken Tanımlamaları (Veri Tipleri)
$takimAdi = "Galaktik Espor"; // String (Metin)
$oyuncuSayisi = 5;            // Integer (Tam Sayı)
$KDA_Orani = 4.5;             // Float (Ondalıklı Sayı)
$aktifMi = true;              // Boolean (Doğru/Yanlış - Aktiflik durumu)

// 2. Ekrana Yazdırma ve Birleştirme Operatörü (.)
// PHP'de iki metni veya değişkeni birleştirmek için NOKTA (.) işareti kullanılır.
echo "<h3>Takım Bilgileri</h3>";
echo "Takım Adı: " . $takimAdi . "<br>";
echo "Kadro: " . $oyuncuSayisi . " Oyuncu<br>";
echo "Takım KDA Ortalaması: " . $KDA_Orani . "<br>";

// Slayttaki strlen() fonksiyonu: Metnin karakter uzunluğunu bulur.
echo "Takım adının harf sayısı: " . strlen($takimAdi) . " karakterdir.<br>";

// Koşul Yapısı Örneği
echo "<h3>Lig Katılım Durumu</h3>";

$gerekliKDA = 3.5;

if ($KDA_Orani >= $gerekliKDA) {
    echo "<p style='color:green;'>Tebrikler! " . $takimAdi . " pro lige katılmaya hak kazandı.</p>";
} else {
    echo "<p style='color:red;'>Maalesef KDA oranınız pro lig için yetersiz.</p>";
}

echo "<h3>Antrenman Programı</h3>";

// $i sıfırdan başlasın, 5 olana kadar her seferinde 1 artsın ($i++)
for ($i = 1; $i <= 5; $i++) {
    echo "Hafta " . $i . ": Antrenman Maçı Yapılacak.<br>";
}

echo "<h2>Diziler (Arrays) Kullanımı</h2>";

// 1. İndeksli Dizi Oluşturma
$oyuncular = array("Xantares", "Woxic", "ImoRR");

echo "Takımın ilk oyuncusu: " . $oyuncular[0] . "<br>"; // Diziler her zaman 0'dan başlar!
echo "Takımın ikinci oyuncusu: " . $oyuncular[1] . "<br><br>";

// 2. Foreach Döngüsü ile Tüm Diziyi Ekrana Yazdırma (Slayttaki en önemli döngü)
echo "<strong>Kadro Listesi:</strong><br>";
foreach ($oyuncular as $oyuncu) {
    echo "- Oyuncu Adı: " . $oyuncu . "<br>";
}

echo "<hr>"; // Araya bir çizgi çekelim

// 3. İlişkili Dizi Oluşturma (Key => Value ilişkisi)
// E-spor projesinde bir oyuncunun rollerini tutmak için mükemmeldir.
$oyuncuRolleri = array(
    "Xantares" => "Rifler / Kaptan",
    "Woxic"    => "AWPer (Keskin Nişancı)",
    "ImoRR"    => "Entry Fragger"
);

echo "<strong>Oyuncu Rolleri:</strong><br>";
foreach ($oyuncuRolleri as $isim => $rol) {
    echo $isim . " isimli oyuncunun rolü: " . $rol . "<br>";
}

echo "<hr><h2>Fonksiyonlar (Functions) Kullanımı</h2>";

// KDA Hesaplama Fonksiyonu Tanımlıyoruz
function kdaHesapla($kill, $death) {

    if ($death == 0) {
        return $kill; 
    }
    
    $sonuc = $kill / $death;
    return round($sonuc, 2); //echo round(1.95583, 2);  // 1.96
}

// Fonksiyonu Farklı Oyuncular İçin Çağırıp Kullanalım
$oyuncu1_KDA = kdaHesapla(25, 12); // 25 kill, 12 death
echo "Xantares maç sonu KDA Oranı: " . $oyuncu1_KDA . "<br>";

$oyuncu2_KDA = kdaHesapla(18, 15); // 18 kill, 15 death
echo "Woxic maç sonu KDA Oranı: " . $oyuncu2_KDA . "<br>";
?>