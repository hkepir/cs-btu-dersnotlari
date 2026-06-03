<?php
session_start(); // Sunucu hafızasındaki kasayı açmak için her sayfada şarttır!

echo "<h2>Alıştırma 4: Güvenlik Duvarı ve Çıkış</h2>";

// Güvenlik Kilidi: Eğer kasada 'admin_user' tanımlı değilse, bu adam hacker veya yetkisiz biridir!
if (!isset($_SESSION['admin_user'])) {
    echo "<b style='color:red;'>🚨 GİRİŞ ENGELLENDİ! Önce oturum_ac.php sayfasından giriş yapmalısınız.</b>";
    exit(); // Kodun aşağı akıp gizli bilgileri göstermesini engeller.
}

// Giriş başarılıysa çalışacak alan:
echo "<p style='color:green;'>✓ Giriş Doğrulanmış Kullanıcı: " . $_SESSION['admin_user'] . "</p>";
echo "<p>Yönetim Panelindeki hassas e-spor transfer bütçesi: 5.000.000 TL</p>";

// Sistemden Güvenli Çıkış (Logout) Tetikleyicisi
if (isset($_GET['aksiyon']) && $_GET['aksiyon'] == "cikis") {
    
    // Slayt kuralı: Önce tüm oturum değişkenlerinin içini boşaltıyoruz
    session_unset();
    
    // Sonra oturumu sunucudan tamamen kökten siliyoruz
    session_destroy();
    
    // Sayfayı kendi kendine yeniliyoruz ki üstteki güvenlik kilidine takılsın
    header("Location: profil_kontrol.php");
    exit();
}

echo "<br><br>";
echo "<a href='profil_kontrol.php?aksiyon=cikis' style='color:red; font-weight:bold;'>[Güvenli Çıkış Yap (Oturumu Kapat)]</a>";
?>