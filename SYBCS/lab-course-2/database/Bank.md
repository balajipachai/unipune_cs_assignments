# Bank Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database bank;`

3. Change to bank database
  - `use bank;`

4. Create Tables
  
  - `create table customer (id INT PRIMARY KEY AUTO_INCREMENT, name CHAR(20), street CHAR(15), city VARCHAR(20));`
  
  - `create table branch (id INT PRIMARY KEY AUTO_INCREMENT, name CHAR(70) NOT NULL, city VARCHAR(50));`
  
  - `create table account (id INT PRIMARY KEY, type CHAR(10), balance FLOAT(8, 2), customer_id INT NOT NULL, branch_id INT NOT NULL, FOREIGN KEY(customer_id) REFERENCES customer(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(branch_id) REFERENCES branch(id) ON DELETE CASCADE ON UPDATE CASCADE);`
  
  - `create table loan (id INT PRIMARY KEY, amount DOUBLE(9, 2), no_of_years INT, customer_id INT NOT NULL, branch_id INT NOT NULL, FOREIGN KEY(customer_id) REFERENCES customer(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(branch_id) REFERENCES branch(id) ON DELETE CASCADE ON UPDATE CASCADE);`

```sql
mysql> desc customer;
+--------+-------------+------+-----+---------+----------------+
| Field  | Type        | Null | Key | Default | Extra          |
+--------+-------------+------+-----+---------+----------------+
| id     | int(11)     | NO   | PRI | NULL    | auto_increment |
| name   | char(20)    | YES  |     | NULL    |                |
| street | char(15)    | YES  |     | NULL    |                |
| city   | varchar(20) | YES  |     | NULL    |                |
+--------+-------------+------+-----+---------+----------------+
4 rows in set (0.00 sec)

mysql> desc branch;
+-------+-------------+------+-----+---------+----------------+
| Field | Type        | Null | Key | Default | Extra          |
+-------+-------------+------+-----+---------+----------------+
| id    | int(11)     | NO   | PRI | NULL    | auto_increment |
| name  | char(20)    | NO   |     | NULL    |                |
| city  | varchar(20) | YES  |     | NULL    |                |
+-------+-------------+------+-----+---------+----------------+
3 rows in set (0.00 sec)

mysql> desc account;
+-------------+------------+------+-----+---------+-------+
| Field       | Type       | Null | Key | Default | Extra |
+-------------+------------+------+-----+---------+-------+
| id          | int(11)    | NO   | PRI | NULL    |       |
| type        | char(10)   | YES  |     | NULL    |       |
| balance     | float(8,2) | YES  |     | NULL    |       |
| customer_id | int(11)    | NO   | MUL | NULL    |       |
| branch_id   | int(11)    | NO   | MUL | NULL    |       |
+-------------+------------+------+-----+---------+-------+
5 rows in set (0.00 sec)

mysql> desc loan;
+-------------+-------------+------+-----+---------+-------+
| Field       | Type        | Null | Key | Default | Extra |
+-------------+-------------+------+-----+---------+-------+
| id          | int(11)     | NO   | PRI | NULL    |       |
| amount      | double(9,2) | YES  |     | NULL    |       |
| no_of_years | int(11)     | YES  |     | NULL    |       |
| customer_id | int(11)     | NO   | MUL | NULL    |       |
| branch_id   | int(11)     | NO   | MUL | NULL    |       |
+-------------+-------------+------+-----+---------+-------+
5 rows in set (0.00 sec)
```
