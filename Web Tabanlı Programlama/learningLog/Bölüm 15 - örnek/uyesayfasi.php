<?php
//oturumu başlat
session_start();

//eğer username adlı oturum değişkeni yok ise 
//login sayfasına yönlendir
if ( !isset($_SESSION['username']) ) {
header("Location: login.php");
exit();
}
?>


<html>
<meta http-equiv="Content-Type"
content="text/html; charset=UTF-8" />
<p> Merhaba <? echo $_SESSION['username'] ?>, <br />
Özel sayfanıza hoş geldiniz.<br /><br />
<a href="kayitformu.php">Personel Otomasyonu</a>
<br /><br />
<a href='logout.php'>[Oturumu Kapat]</a>
</html>