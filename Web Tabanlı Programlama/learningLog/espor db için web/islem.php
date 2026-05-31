<?php
echo "<h2>Sunucudan Gelen Veriler İşleniyor...</h2>";

// form.html'deki inputların 'name' niteliklerini aynen buraya yazıyoruz
$gelenAd = $_POST['oyuncu_adi'];
$gelenTakim = $_POST['takim_secim'];

echo "<strong>Form Başarıyla Alındı!</strong><br>";
echo "Sisteme Eklenen Oyuncu: " . $gelenAd . "<br>";
echo "Katıldığı Takım: " . $gelenTakim . "<br>";

?>