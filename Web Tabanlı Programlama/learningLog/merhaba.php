<html>
    <body>
        <?php
        
        //Yazim Kurallari ve Degiskenler
        $a = 10;
        $b = 20;
        //Noktali virgul zorunlu - parse error
        $Ad = "Ali";
        $ad = "Ahmet";
        
        //Tek tirnak vs Cift tirnak
        echo "Hello PHP";
        echo "<br>Today $Ad coding";
        echo "<br>";
        echo 'wather\'s sunny';
        //echo cikti vermek icin kullanilir
        //tek tirnak icinde baska degisken kullanilamaz
        //cift tirnak kullanilirsa degiskenlerin degeri otomatik string icine yerlesir
        $x = "Cuma";
        $mesaj = 'Bugun $x gunudur.<br>';
        echo $mesaj;
        $mesaj = "Bugun $x gunudur.<br>";
        echo $mesaj;
        
        //Sabitler
        define("Year",2050);
        echo "<br>Year:".Year;
        
        //Operatorler ve Kontrol Yapilari
        $toplam = $a + $b;
        echo "<br>Toplam:".$toplam;
        
        //Ternary Oprt
        echo "<br>".($a>$b?"a buyuktur":"b buyuktur");
        
        //Dongu Ornegi
        echo "<br>For Dongusu: ";
        for($i=1;$i<=3;$i++){
            echo $i." ";
            }
            
            //Switch-Case Ornegi
            $weekday = "Friday";
            switch($weekday){
                case "Monday": 
                    echo "<br>The first day of week";
                    break;
                    case "Cuma":
                        echo "<br>Todayyy";
                        break;
                        default:
                        echo "<br>Can't find today";
                        }
                        
                        //Diziler
                        $sayilar = array(10, 20, 30);// Sayısal Dizi
                        echo "<br> Sayisal Dizi Elemanlari: <br>";
                        foreach($sayilar as $deger) {
                            echo $deger . " "; 
                            }
                        //. string birlestirme operatoru olarak kullanilir.
                            
                            $plaka = array("ankara" => "06", "istanbul" => "34");// 2. Çağrışımsal Dizi
                            echo "Cagrisimsal Dizi Elemanlari: <br>";
                            foreach($plaka as $sehir => $kod) {
                                echo "<br>$sehir => $kod <br>";
                                }
                                
                                //String Fonksiyonlari
                                $metin = "Merhaba Php";
                                echo "<br>Uzunluk: ".strlen($metin);
                                echo "<br>'PHP'  konumu:" .strpos($metin,"PHP");
                                
                                //Fonksiyonlar
                                function kare($f){
                                    return $f * $f;
                                    }
                                    echo "<br>5'in karesi:".kare(5);
                                    ?>
    </body>
    </html>