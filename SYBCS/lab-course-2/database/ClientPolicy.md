# Client Policy Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database client_policy;`

3. Change to bank database
  - `use client_policy;`

4. Create Tables

    - `create table policy(id INT PRIMARY KEY AUTO_INCREMENT, policy_no INT UNIQUE, name VARCHAR(20), min_age_limit TINYINT UNSIGNED, max_age_limit TINYINT UNSIGNED, maturity_age TINYINT UNSIGNED, min_sum_assured DECIMAL(7, 2), max_sum_assured DECIMAL(7, 2));`

    - `create table client(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(25), birth_date DATE, nominee_name VARCHAR(25), relation_with_client VARCHAR(2));`

    - `create table agent(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(25), license_no INT, branch_office VARCHAR(20));`

    - The above tables share a ternary relation thus, the below table is created:
      
      `create table agent_client_policy(agent_id INT, client_id INT, policy_no INT, policy_name VARCHAR(20), premium DECIMAL(7, 2), policy_date DATE, type ENUM('q', 'h', 'y'), sum_assured DECIMAL(7, 2), term INT, FOREIGN KEY(agent_id) REFERENCES agent(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(client_id) REFERENCES client(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(policy_no) REFERENCES policy(policy_no) ON DELETE CASCADE ON UPDATE CASCADE);`


```sql
mysql> desc policy;
+-----------------+---------------------+------+-----+---------+----------------+
| Field           | Type                | Null | Key | Default | Extra          |
+-----------------+---------------------+------+-----+---------+----------------+
| id              | int(11)             | NO   | PRI | NULL    | auto_increment |
| policy_no       | int(11)             | YES  | UNI | NULL    |                |
| name            | varchar(20)         | YES  |     | NULL    |                |
| min_age_limit   | tinyint(3) unsigned | YES  |     | NULL    |                |
| max_age_limit   | tinyint(3) unsigned | YES  |     | NULL    |                |
| maturity_age    | tinyint(3) unsigned | YES  |     | NULL    |                |
| min_sum_assured | decimal(7,2)        | YES  |     | NULL    |                |
| max_sum_assured | decimal(7,2)        | YES  |     | NULL    |                |
+-----------------+---------------------+------+-----+---------+----------------+
8 rows in set (0.00 sec)

mysql> desc client;
+----------------------+-------------+------+-----+---------+----------------+
| Field                | Type        | Null | Key | Default | Extra          |
+----------------------+-------------+------+-----+---------+----------------+
| id                   | int(11)     | NO   | PRI | NULL    | auto_increment |
| name                 | varchar(25) | YES  |     | NULL    |                |
| birth_date           | date        | YES  |     | NULL    |                |
| nominee_name         | varchar(25) | YES  |     | NULL    |                |
| relation_with_client | varchar(2)  | YES  |     | NULL    |                |
+----------------------+-------------+------+-----+---------+----------------+
5 rows in set (0.00 sec)

mysql> desc agent;
+---------------+-------------+------+-----+---------+----------------+
| Field         | Type        | Null | Key | Default | Extra          |
+---------------+-------------+------+-----+---------+----------------+
| id            | int(11)     | NO   | PRI | NULL    | auto_increment |
| name          | varchar(25) | YES  |     | NULL    |                |
| license_no    | int(11)     | YES  |     | NULL    |                |
| branch_office | varchar(20) | YES  |     | NULL    |                |
+---------------+-------------+------+-----+---------+----------------+
4 rows in set (0.00 sec)

mysql> desc agent_client_policy;
+-------------+-------------------+------+-----+---------+-------+
| Field       | Type              | Null | Key | Default | Extra |
+-------------+-------------------+------+-----+---------+-------+
| agent_id    | int(11)           | YES  | MUL | NULL    |       |
| client_id   | int(11)           | YES  | MUL | NULL    |       |
| policy_no   | int(11)           | YES  | MUL | NULL    |       |
| policy_name | varchar(20)       | YES  |     | NULL    |       |
| premium     | decimal(7,2)      | YES  |     | NULL    |       |
| policy_date | date              | YES  |     | NULL    |       |
| type        | enum('q','h','y') | YES  |     | NULL    |       |
| sum_assured | decimal(7,2)      | YES  |     | NULL    |       |
| term        | int(11)           | YES  |     | NULL    |       |
+-------------+-------------------+------+-----+---------+-------+
9 rows in set (0.00 sec)


```