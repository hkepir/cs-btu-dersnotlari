--lab03 Alistirma #1

CREATE DATABASE deneme;

CREATE TABLE ogrenciler (
    ogrenci_id INT,
    ad VARCHAR(50),
    soyad VARCHAR(50),
    bolum VARCHAR(50),
    not_ortalamasi FLOAT
);


--Tabloya Veri Eklerken
--INSERT INTO {TABLO ADI} ({1. SÜTUN İSMİ}, {2. SÜTUN İSMİ}, ...) VALUES ({1. SÜTUN VERİSİ}, {2. SÜTUN VERİSİ}, ...);

--İlk satir
INSERT INTO ogrenciler (ogrenci_id, ad, soyad, bolum, not_ortalamasi) 
VALUES (1, 'Ahmet', 'Yilmaz', 'Bilgisayar Muhendisligi', 85.5);

-- İkinci satır
INSERT INTO ogrenciler (ogrenci_id, ad, soyad, bolum, not_ortalamasi)
VALUES (2, 'Mehmet', 'Kaya', 'Elektrik Elektronik Muhendisligi', 78.2);

-- Üçüncü satır
INSERT INTO ogrenciler (ogrenci_id, ad, soyad, bolum, not_ortalamasi)
VALUES (3, 'Ayse', 'Demir', 'Makine Muhendisligi', 92.0);


--INT PRIMARY KEY Kullanimi
CREATE TABLE ogrenciler2 (
    ogrenci_id INT PRIMARY KEY,
    ad VARCHAR(50),
    soyad VARCHAR(50),
    bolum VARCHAR(50),
    not_ortalamasi FLOAT
);

INSERT INTO ogrenciler2 (ogrenci_id, ad, soyad, bolum, not_ortalamasi)
VALUES (1, 'Ahmet', 'Yilmaz', 'Bilgisayar Muhendisligi', 85.5),
       (2, 'Mehmet', 'Kaya', 'Elektrik Elektronik Muhendisligi', 78.2),
       (3, 'Ayse', 'Demir', 'Makine Muhendisligi', 92.0);

--ogrenciler2 tablosuna daha once eklenmis Mehmet Kaya 'yi ekleme islemi

INSERT INTO ogrenciler2 (ogrenci_id, ad, soyad, bolum, not_ortalamasi)
VALUES (2, 'Mehmet', 'Kaya', 'ELektrik Elektronik  Muhendisligi', 78.2);

--#1062 - Duplicate entry '2' for key 'PRIMARY' 
--hata mesaji alindi.

CREATE TABLE ogrenciler3 (
    ogrenci_id INT AUTO_INCREMENT PRIMARY KEY,
    ad VARCHAR(50),
    soyad VARCHAR(50),
    bolum VARCHAR(50),
    not_ortalamasi FLOAT
);

INSERT INTO ogrenciler3 (ad, soyad, bolum, not_ortalamasi)
VALUES ('Ahmet', 'Yilmaz', 'Bilgisayar Muhendisligi', 85.5),
       ('Mehmet', 'Kaya', 'Elektrik Elektronik Muhendisligi', 78.2),
       ('Ayse', 'Demir', 'Makine Muhendisligi', 92.0);

CREATE TABLE ogrenciler3 (
    ogrenci_id INT AUTO_INCREMENT PRIMARY KEY,
    ad VARCHAR(50),
    soyad VARCHAR(50),
    bolum VARCHAR(50),
    not_ortalamasi FLOAT
) AUTO_INCREMENT = 100;

--#1050 - Table 'ogrenciler3' already exists
--hatasi alindi

DROP TABLE ogrenciler3;

--AUTO_INCREMENT 100 olarak ayarlandi
CREATE TABLE ogrenciler3 (
    ogrenci_id INT AUTO_INCREMENT PRIMARY KEY,
    ad VARCHAR(50),
    soyad VARCHAR(50),
    bolum VARCHAR(50),
    not_ortalamasi FLOAT
) AUTO_INCREMENT = 100;

INSERT INTO ogrenciler3 (ad, soyad, bolum, not_ortalamasi)
VALUES ('Ahmet', 'Yilmaz', 'Bilgisayar Muhendisligi', 85.5),
       ('Mehmet', 'Kaya', 'Elektrik Elektronik Muhendisligi', 78.2),
       ('Ayse', 'Demir', 'Makine Muhendisligi', 92.0);