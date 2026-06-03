<?php
require("baglanti.php");

// 1. Link üzerinden (GET ile) gelen oyuncu ID'sini yakalıyoruz
$silinecekID = $_GET['id'];

// 2. SQL Silme sorgumuzu hazırlıyoruz
$sorgu = "DELETE FROM oyuncular WHERE id = $silinecekID";

// 3. Sorguyu veritabanında çalıştırıyoruz
if (mysqli_query($baglanti, $sorgu)) {
    // Slayttaki yönlendirme mantığı: Silme bitince kullanıcıyı otomatik listeye geri fırlatıyoruz
    header("Location: oyuncu_listele.php");
    exit();
} else {
    echo "Kayıt silinirken bir hata oluştu: " . mysqli_error($baglanti);
}
?>