<?php
if (isset($_POST['kaydet'])) {
    
    extract($_POST);
    //extract metodu post dizisindeki elemanlari otomatik degiskene cevirir
    //$takimAdi = $_POST['takim_adi'];
    //$takimBolgesi = $_POST['takim_bolgesi'];
    
    echo "<div style='background-color: #d4edda; color: #155724; padding: 15px; border-radius: 5px;'>";
    echo "<h3> Takım Alındı ve İşlendi</h3>";
    echo "<strong>Kayıt Edilen Takım:</strong> " . $takimAdi . "<br>";
    echo "<strong>Bölge/Lig:</strong> " . $takimBolgesi . "<br>";
    echo "</div>";
    
    exit(); 
}
?>

<!DOCTYPE html>
<html lang="tr">
<head>
    <meta charset="UTF-8">
    <title>E-Spor - Takım Yönetimi</title>
</head>
<body>

    <h2>Yeni E-Spor Takımı Ekle</h2>
    
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="POST">
        
        <label>Takım Adı:</label><br>
        <input type="text" name="takim_adi" required placeholder="Örn: Galaktik Espor"><br><br>
        
        <label>Bölge / Lig:</label><br>
        <select name="takim_bolgesi">
            <option value="Türkiye - TCL">Türkiye (TCL)</option>
            <option value="Avrupa - LEC">Avrupa (LEC)</option>
            <option value="Amerika - LCS">Amerika (LCS)</option>
        </select><br><br>
        
        <button type="submit">Takımı Sisteme Kaydet</button>
        
    </form>

</body>
</html>