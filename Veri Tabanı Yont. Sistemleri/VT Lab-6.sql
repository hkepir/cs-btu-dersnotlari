--ALISTIRMA 1
--departments icin
--Gösterilen satır 0 - 8 (toplam 9, Sorgu 0,0075 saniye sürdü.)

--employees icin
-- MySQL boş bir sonuç kümesi döndürdü (yani sıfır satır). (Sorgu 0,0012 saniye sürdü.)


--ALISTIRMA 2
SELECT emp_no, first_name, last_name, hire_date
FROM employees
WHERE hire_date > '1999-01-31'
ORDER BY hire_date ASC
LIMIT 150;
-- MySQL boş bir sonuç kümesi döndürdü (yani sıfır satır). (Sorgu 0,0004 saniye sürdü.)

SELECT emp_no, first_name, last_name, hire_date
FROM employees
WHERE hire_date > '1999-01-31'
ORDER BY hire_date ASC
LIMIT 150 OFFSET 150;
-- MySQL boş bir sonuç kümesi döndürdü (yani sıfır satır). (Sorgu 0,0005 saniye sürdü.)

--ALISTIRMA 3
CREATE INDEX idx_name ON players (name);
SELECT COUNT(*) FROM players WHERE name LIKE 'bt%';

--1.yorum: belirgin bir hizalama gözlendi
--2.yorum: b şıkkı a şıkkına göre daha hızlı çalışmaktadır