<?php
// 1. Çerez Yazma: 'site_temasi' adında, değeri 'dark' olan bir çerez oluşturuyoruz.
// time() + (86400 * 7) -> Şu andan itibaren 7 gün boyunca tarayıcıda saklanır.
setcookie("site_temasi", "dark", time() + (86400 * 7));

echo "<h2>Alıştırma 1: Çerez (Cookie) Hafızası</h2>";

// 2. Çerez Okuma: Tarayıcıda bu çerez kayıtlı mı diye kontrol ediyoruz.
if (isset($_COOKIE['site_temasi'])) {
    $mevcutTema = $_COOKIE['site_temasi'];
    echo "<p>Sistem çerezleri okudu. Tercih ettiğiniz tema: <strong>" . $mevcutTema . "</strong></p>";
    
    // Küçük bir görsel test yapalım:
    if ($mevcutTema == "dark") {
        echo "<div style='background-color: #222; color: #fff; padding: 20px;'>Siyah Arka Plan (Dark Mode Aktif)</div>";
    }
} else {
    echo "<p>Henüz tema çerezi tarayıcıya ulaşmadı. Lütfen sayfayı yenileyin (F5)!</p>";
}
?>