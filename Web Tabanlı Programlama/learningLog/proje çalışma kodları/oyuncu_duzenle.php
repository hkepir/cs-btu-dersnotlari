<?php
require("baglanti.php");

// 1. Düzenlenecek oyuncunun ID'sini linkten alıyoruz
$oyuncuID = $_GET['id'];

// 2. Form ilk açıldığında kutuların içine eski verileri doldurmak için oyuncuyu veritabanından çekiyoruz
$eskiVeriSorgusu = "SELECT * FROM oyuncular WHERE id = $oyuncuID";
$sonuc = mysqli_query($baglanti, $eskiVeriSorgusu);
$oyuncu = mysqli_fetch_assoc($sonuc);

// 3. Kullanıcı formu düzenleyip "Kaydet" butonuna bastığında (POST ettiğinde) çalışacak alan:
if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $yeniNick = $_POST['nickname'];
    $yeniRol = $_POST['rol'];
    
    // SQL Güncelleme (UPDATE) sorgusu
    $guncelleSorgusu = "UPDATE oyuncular SET nickname='$yeniNick', rol='$yeniRol' WHERE id=$oyuncuID";
    
    if (mysqli_query($baglanti, $guncelleSorgusu)) {
        // Güncelleme başarılıysa listeleme sayfasına geri dön
        header("Location: oyuncu_listele.php");
        exit();
    } else {
        echo "Güncelleme hatası: " . mysqli_error($baglanti);
    }
}
?>

<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <title>E-Spor - Oyuncu Düzenle</title>
</head>
<body>

    <h2>Oyuncu Bilgilerini Güncelle (ID: <?php echo $oyuncuID; ?>)</h2>

    <form action="oyuncu_duzenle.php?id=<?php echo $oyuncuID; ?>" method="POST">
        <label>Oyuncu Nickname:</label><br>
        <input type="text" name="nickname" value="<?php echo $oyuncu['nickname']; ?>" required><br><br>
        
        <label>Oyundaki Rolü:</label><br>
        <input type="text" name="rol" value="<?php echo $oyuncu['rol']; ?>" required><br><br>
        
        <button type="submit">Değişiklikleri Kaydet ve Güncelle</button>
    </form>

    <br><a href="oyuncu_listele.php">İptal Et ve Geri Dön</a>
</body>
</html>