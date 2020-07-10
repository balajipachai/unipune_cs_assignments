# Railway Reservation Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database railway_reservation;`

3. Change to bank database
  - `use railway_reservation;`

4. Create Tables

    - `create table train(no INT PRIMARY KEY, name VARCHAR(20), depart_time TIME, arrival_time TIME, source_station VARCHAR(20), destination_station VARCHAR(20), no_of_bogies TINYINT UNSIGNED, bogie_capacity TINYINT UNSIGNED);`

    - `create table passenger(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(20), address VARCHAR(30), age TINYINT UNSIGNED, gender ENUM('M', 'F', 'T', 'O'));`

    - `create table train_passenger(ticket_no INT PRIMARY KEY, train_no INT, passenger_id INT, bogie_no TINYINT UNSIGNED, no_of_berths TINYINT UNSIGNED, booking_date DATE, ticket_amount DECIMAL(7,2), status ENUM ('W', 'C', 'RAC'), FOREIGN KEY (train_no) REFERENCES train(no) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY (passenger_id) REFERENCES passenger(id) ON DELETE CASCADE ON UPDATE CASCADE);`


```sql
mysql> desc train;
+---------------------+---------------------+------+-----+---------+-------+
| Field               | Type                | Null | Key | Default | Extra |
+---------------------+---------------------+------+-----+---------+-------+
| no                  | int(11)             | NO   | PRI | NULL    |       |
| name                | varchar(20)         | YES  |     | NULL    |       |
| depart_time         | time                | YES  |     | NULL    |       |
| arrival_time        | time                | YES  |     | NULL    |       |
| source_station      | varchar(20)         | YES  |     | NULL    |       |
| destination_station | varchar(20)         | YES  |     | NULL    |       |
| no_of_bogies        | tinyint(3) unsigned | YES  |     | NULL    |       |
| bogie_capacity      | tinyint(3) unsigned | YES  |     | NULL    |       |
+---------------------+---------------------+------+-----+---------+-------+
8 rows in set (0.00 sec)


mysql> desc passenger;
+---------+-----------------------+------+-----+---------+----------------+
| Field   | Type                  | Null | Key | Default | Extra          |
+---------+-----------------------+------+-----+---------+----------------+
| id      | int(11)               | NO   | PRI | NULL    | auto_increment |
| name    | varchar(20)           | YES  |     | NULL    |                |
| address | varchar(30)           | YES  |     | NULL    |                |
| age     | tinyint(3) unsigned   | YES  |     | NULL    |                |
| gender  | enum('M','F','T','O') | YES  |     | NULL    |                |
+---------+-----------------------+------+-----+---------+----------------+
5 rows in set (0.00 sec)

mysql> desc train_passenger;
+---------------+---------------------+------+-----+---------+-------+
| Field         | Type                | Null | Key | Default | Extra |
+---------------+---------------------+------+-----+---------+-------+
| ticket_no     | int(11)             | NO   | PRI | NULL    |       |
| train_no      | int(11)             | YES  | MUL | NULL    |       |
| passenger_id  | int(11)             | YES  | MUL | NULL    |       |
| bogie_no      | tinyint(3) unsigned | YES  |     | NULL    |       |
| no_of_berths  | tinyint(3) unsigned | YES  |     | NULL    |       |
| booking_date  | date                | YES  |     | NULL    |       |
| ticket_amount | decimal(7,2)        | YES  |     | NULL    |       |
| status        | enum('W','C','RAC') | YES  |     | NULL    |       |
+---------------+---------------------+------+-----+---------+-------+
8 rows in set (0.01 sec)

```