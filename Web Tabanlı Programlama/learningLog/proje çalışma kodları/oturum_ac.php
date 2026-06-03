<?php
//oturum acma islemi ilk yapilir. Her zaman en uste yaz.
session_start();

// Sunucu tarafındaki gizli kasamıza verileri yazıyoruz
$_SESSION['admin_id'] = 1907;
$_SESSION['admin_user'] = "Espor_Yonetici";
$_SESSION['giris_zamani'] = date("H:i:s");

echo "<h2>Alıştırma 3: Güvenli Sunucu Oturumu (Session)</h2>";
echo "<p>✓ Giriş verileriniz XAMPP sunucusunun hafızasına güvenle kaydedildi.</p>";
echo "<p>Giriş Saati: " . $_SESSION['giris_zamani'] . "</p>";
echo "<a href='profil_kontrol.php'>Oturumun sitemizdeki diğer sayfada bizi hatırlayıp hatırlamadığına bakalım...</a>";
?>