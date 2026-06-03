<?php
    session_start();
    require('mysqlbaglan.php');
    if (isset($_POST['username']) and isset($_POST['password'])){
    extract($_POST);
    
    // sifre metni SHA256 ile şifreleniyor.
    $password = hash('sha256', $password);
    $sql = "SELECT * FROM `kullanicilar` WHERE ";
    $sql= $sql . "kullaniciadi='$username' and
    sifre='$password'";
    
    $cevap = mysqli_query($baglanti, $sql);
    //eger cevap FALSE ise hata yazdiriyoruz.      
    if(!$cevap ){
    echo '<br>Hata:' . mysqli_error($baglanti);
    }
    //veritabanindan dönen satır sayısını bul
$say = mysqli_num_rows($cevap);
if ($say == 1){
$_SESSION['username'] = $username;
}else{
$mesaj = "<h1> Hatalı Kullanıcı adı veya Şifre!</h1>";
}
}
if (isset($_SESSION['username'])){
header("Location: uyesayfasi.php");
}else{
//oturum yok ise login formu görüntüle
?>


<html>
    <meta http-equiv="Content-Type" content="text/html; 
    charset=UTF-8" />
    <body>
        <form action="<?php $_PHP_SELF ?>" method="POST">
            <?php
            if(isset($mesaj)){ echo $mesaj;}
            ?>
            Kullanıcı Adı:
            <input type="text" name="username"><br />
            Şifre: 
            <input type="password" name="password" ><br /><br />
            <input type="submit" value="GİRİŞ"/><br /><br />
            <a href="register.php">[Kayıt Ol]</a>
        </form>
    </body>
</html>
<?php } ?>