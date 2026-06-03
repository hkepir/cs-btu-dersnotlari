<?php
// 1. Önce veritabanı bağlantı köprümüzü bu sayfaya çağırıyoruz
/** @var mysqli $baglanti */
require("baglanti.php");

$mesaj = "";

// Form postalandı mı kontrol ediyoruz
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    // Formdan gelen verileri temiz bir şekilde alalım
    $oyuncuNick = $_POST['nickname'];
    $oyuncuRol = $_POST['rol'];
    
    // SQL Sorgusu hazırlıyoruz: oyuncular tablosuna verileri Ekle (INSERT INTO)
    // NOT: Henüz tablomuzu oluşturmadık, alttaki test aşamasında SQL ile oluşturacağız.
    $sorgu = "INSERT INTO oyuncular (nickname, rol) VALUES ('$oyuncuNick', '$oyuncuRol')";
    
    // Hazırladığımız sorguyu mysqli_query ile veritabanına ateşliyoruz
    
    if (mysqli_query($baglanti, $sorgu)) {
        $mesaj = "<p style='color:green;'>✔️ Oyuncu veritabanına başarıyla kaydedildi!</p>";
    } else {
        $mesaj = "<p style='color:red;'>❌ Kayıt hatası: " . mysqli_error($baglanti) . "</p>";
    }
}
?>

<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <title>E-Spor - Oyuncu Ekle</title>
</head>
<body>

    <h2>Veritabanına Yeni Oyuncu Kaydet</h2>
    <?php echo $mesaj; ?>

    <form action="oyuncu_ekle.php" method="POST">
        <label>Oyuncu Takma Adı (Nickname):</label><br>
        <input type="text" name="nickname" required><br><br>
        
        <label>Oyundaki Rolü:</label><br>
        <input type="text" name="rol" required placeholder="Örn: AWPer, IGL"><br><br>
        
        <button type="submit">Oyuncuyu Veritabanına Gönder</button>
    </form>

</body>
</html>