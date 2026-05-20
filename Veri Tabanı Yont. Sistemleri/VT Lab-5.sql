CREATE TABLE Customers (
  CustomerID INT PRIMARY KEY,
  CustomerName VARCHAR(255),
  ContactName VARCHAR(255),
  Address VARCHAR(255),
  City VARCHAR(255),
  PostalCode VARCHAR(10),
  Country VARCHAR(255)
);

UPDATE Customers
SET CustomerName = 'Around the Horn'
WHERE Country = 'Mexico';

UPDATE Customers
SET CustomerName = 'Satyam',
    Country = 'USA'
WHERE CustomerID = 1;


CREATE TABLE gfg_employee (
  id INT PRIMARY KEY,
  name VARCHAR(20),
  email VARCHAR(25),
  department VARCHAR(20)
);

INSERT INTO gfg_employee (id, name, email, department) VALUES
(1, 'Jessie', 'jessie23@gmail.com', 'Development'),
(2, 'Praveen', 'praveen_dagger@yahoo.com', 'HR'),
(3, 'Bisa', 'dragonBall@gmail.com', 'Sales'),
(4, 'Rithvik', 'msvv@hotmail.com', 'IT'),
(5, 'Suraj', 'srjsunny@gmail.com', 'Quality Assurance'),
(6, 'Om', 'OmShukla@yahoo.com', 'IT'),
(7, 'Naruto', 'uzumaki@konoha.com', 'Development');

DELETE FROM gfg_employee WHERE name='Rithvik';
DELETE FROM gfg_employee WHERE department='Development';
DELETE FROM gfg_employee;



