CREATE DATABASE ogrenciler;
CREATE TABLE dersler(
    Matematik varchar(255),
    Turkce varchar(255)
);

CREATE TABLE notlar (
    ogrenci_id INT,
    ders VARCHAR(50),
    ogrenci_not INT,
    tarih DATE
);

CREATE TABLE ogr (
    ad VARCHAR(50),
    soyad VARCHAR(50)
);

DROP TABLE notlar; 

CREATE TABLE notlar ( 
    ogrenci_id INT AUTO_INCREMENT PRIMARY KEY, 
    ders VARCHAR(50), 
    ogrenci_not INT, 
    tarih DATE 
) AUTO_INCREMENT = 1000;
