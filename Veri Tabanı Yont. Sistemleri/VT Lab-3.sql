
--lab03 Alistırma #2 ogrenciler database

DROP TABLE ogr;

CREATE TABLE ogr (
    ogrenci_id INT UNSIGNED AUTO_INCREMENT PRIMARY KEY,
    ad VARCHAR(50),
    soyad VARCHAR(50)
) AUTO_INCREMENT = 1000;

INSERT INTO ogr (ad, soyad)
VALUES ('Ahmet', 'Yilmaz'),
       ('Mehmet', 'Kaya'),
       ('Ayse', 'Demir');

SELECT * FROM ogr;

DROP TABLE notlar;

CREATE TABLE notlar (
    id INT AUTO_INCREMENT PRIMARY KEY,
    ogrenci_id INT,
    ders VARCHAR(50),
    ogrenci_not INT,
    tarih DATE
) AUTO_INCREMENT = 1000;
