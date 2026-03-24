--lab03 Alistirma #2

CREATE DATABASE library_db;

CREATE TABLE kategori (
    kitap_id INT AUTO_INCREMENT PRIMARY KEY,
    kategori_adi VARCHAR(50)
) AUTO_INCREMENT = 1000;

CREATE TABLE uyeler (
    uye_id int AUTO_INCREMENT,
    ad varchar(50),
    soyad varchar(50)
);

CREATE TABLE yazar (
    yazar_adi varchar(50) AUTO_INCREMENT PRIMARY KEY
);
