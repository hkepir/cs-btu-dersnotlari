<?php
    //echo "<h2> XML Dosyasından Veri Okuma</h2>";
    $xmlData = simplexml_load_file("turnuva.xml");

    if($xmlData){
        echo "<h2>Güncel E-Spor Turnuva Listesi</h3>";

        foreach($xmlData->turnuva as $turnuva){
            echo "<div style='border: 1px solid #ccc; padding: 10px; margin-bottom: 10px; background-color: #f9f9f9;'>";
            echo "<strong>🏆 Turnuva Adı:</strong> " . $turnuva->adi . "<br>";
            echo "<strong>🎮 Oyun:</strong> " . $turnuva->oyun . "<br>";
            echo "<strong>💰 Ödül Havuzu:</strong> <span style='color: green; font-weight: bold;'>" . $turnuva->odul . "</span><br>";
            echo "</div>";
        }
    }else{
        echo "XML dosyası yüklenirken bir hata oluştu!";
    }
?>