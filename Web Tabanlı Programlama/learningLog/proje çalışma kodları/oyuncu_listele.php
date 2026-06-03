<?php
require("baglanti.php");

echo "<h2>🏆 E-Spor Takım Kadrosu ve Yönetim Paneli</h2>";

$sorgu = "SELECT id, nickname, rol FROM oyuncular";
$sonuc = mysqli_query($baglanti, $sorgu);

if (mysqli_num_rows($sonuc) > 0) {
    
    echo "<table border='1' cellpadding='10' cellspacing='0' style='width:600px; text-align:left;'>";
    echo "<tr style='background-color:#eee;'>
            <th>ID</th>
            <th>Oyuncu Nickname</th>
            <th>Rolü</th>
            <th>İşlemler</th>
          </tr>";
          
    while ($satir = mysqli_fetch_assoc($sonuc)) {
        echo "<tr>";
        echo "<td>" . $satir['id'] . "</td>";
        echo "<td><strong>" . $satir['nickname'] . "</strong></td>";
        echo "<td>" . $satir['rol'] . "</td>";
        
        // 💡 BURASI ÇOK KRİTİK: Bölüm 12'de öğrendiğimiz GET yöntemiyle 
        // silme ve düzenleme sayfalarına oyuncunun benzersiz ID'sini link üzerinden postalıyoruz.
        echo "<td>
                <a href='oyuncu_duzenle.php?id=" . $satir['id'] . "' style='color:blue; margin-right:10px;'>[Düzenle]</a> 
                <a href='oyuncu_sil.php?id=" . $satir['id'] . "' style='color:red;' onclick='return confirm(\"Bu oyuncuyu silmek istediğinize emin misiniz?\")'>[Sil]</a>
              </td>";
        echo "</tr>";
    }
    echo "</table>";
} else {
    echo "<p>Sistemde henüz kayıtlı bir oyuncu bulunamadı!</p>";
}
echo "<br><a href='oyuncu_ekle.php'>[+ Yeni Oyuncu Ekle]</a>";
?>