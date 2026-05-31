<?php
include("menu.php"); // Menüyü normal şekilde çağırıyoruz

echo "<h2>Oyuncu Kadroları</h2>";

// Farz edelim ki veritabanı bağlantı dosyamızın adı 'baglanti.php' olsun 
// ve şu an bu dosya klasörde mevcut değil.
// require hata durumunda kodu durduracağı için altındaki 'Kritik Bilgiler' yazısı asla ekrana gelmeyecek.
require("baglanti.php"); 

echo "<p>Bu yazı ve kritik oyuncu listesi sadece baglanti.php dosyası varsa görünecektir.</p>";
?>