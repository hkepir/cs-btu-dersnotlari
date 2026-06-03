<?php
//damgalama mantigi gibi dusunebilirsin, cerez kac gunluk olursa olsun sen uzerine geçmis damgasi basinca otomatik olarak siliyor.
// Bir çerezi silmenin tek yolu, aynı isimle ömrünü GEÇMİŞ bir tarih yapmaktır.
// time() - 3600 -> Ömrünü 1 saat öncesine çekerek tarayıcıya "bu çerezi derhal sil" deriz.
setcookie("site_temasi", "", time() - 3600);

echo "<h2>Alıştırma 2: Çerez Silme İşlemi</h2>";
echo "<p>✓ 'site_temasi' isimli çerez tarayıcınızdan başarıyla silindi!</p>";
echo "<a href='tema_hatirla.php'>Temayı tekrar oluşturmak için tıkla</a>";
?>