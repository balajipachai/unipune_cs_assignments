# Real Estate Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database real_estate;`

3. Change to bank database
  - `use real_estate;`

4. Create Tables

    - `create table agent(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(20), address VARCHAR(20), contact_no VARCHAR(10));`

    - `create table estate(id INT PRIMARY KEY AUTO_INCREMENT, estate_no INT UNIQUE, type VARCHAR(20), location VARCHAR(20), price INT NOT NULL);`

    - `create table customer(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(20), address VARCHAR(30), contact_no VARCHAR(10));`

    - `create table transaction(id INT PRIMARY KEY AUTO_INCREMENT, agent_id INT, estate_no INT, customer_id INT, purchase_date DATE, commission DECIMAL(7,2), FOREIGN KEY(agent_id) REFERENCES agent(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(estate_no) REFERENCES estate(estate_no) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(customer_id) REFERENCES customer(id) ON DELETE CASCADE ON UPDATE CASCADE);`


```sql
mysql> desc agent;
+------------+-------------+------+-----+---------+----------------+
| Field      | Type        | Null | Key | Default | Extra          |
+------------+-------------+------+-----+---------+----------------+
| id         | int(11)     | NO   | PRI | NULL    | auto_increment |
| name       | varchar(20) | YES  |     | NULL    |                |
| address    | varchar(20) | YES  |     | NULL    |                |
| contact_no | varchar(10) | YES  |     | NULL    |                |
+------------+-------------+------+-----+---------+----------------+
4 rows in set (0.00 sec)

mysql> desc estate;
+-----------+-------------+------+-----+---------+----------------+
| Field     | Type        | Null | Key | Default | Extra          |
+-----------+-------------+------+-----+---------+----------------+
| id        | int(11)     | NO   | PRI | NULL    | auto_increment |
| estate_no | int(11)     | YES  | UNI | NULL    |                |
| type      | varchar(20) | YES  |     | NULL    |                |
| location  | varchar(20) | YES  |     | NULL    |                |
| price     | int(11)     | NO   |     | NULL    |                |
+-----------+-------------+------+-----+---------+----------------+
5 rows in set (0.00 sec)

mysql> desc customer;
+------------+-------------+------+-----+---------+----------------+
| Field      | Type        | Null | Key | Default | Extra          |
+------------+-------------+------+-----+---------+----------------+
| id         | int(11)     | NO   | PRI | NULL    | auto_increment |
| name       | varchar(20) | YES  |     | NULL    |                |
| address    | varchar(30) | YES  |     | NULL    |                |
| contact_no | varchar(10) | YES  |     | NULL    |                |
+------------+-------------+------+-----+---------+----------------+
4 rows in set (0.00 sec)

mysql> desc transaction;
+---------------+--------------+------+-----+---------+----------------+
| Field         | Type         | Null | Key | Default | Extra          |
+---------------+--------------+------+-----+---------+----------------+
| id            | int(11)      | NO   | PRI | NULL    | auto_increment |
| agent_id      | int(11)      | YES  | MUL | NULL    |                |
| estate_no     | int(11)      | YES  | MUL | NULL    |                |
| customer_id   | int(11)      | YES  | MUL | NULL    |                |
| purchase_date | date         | YES  |     | NULL    |                |
| commission    | decimal(7,2) | YES  |     | NULL    |                |
+---------------+--------------+------+-----+---------+----------------+
6 rows in set (0.00 sec)

```