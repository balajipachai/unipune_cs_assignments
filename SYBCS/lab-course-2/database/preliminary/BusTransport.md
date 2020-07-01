# BusTransport Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database bus_transport;`

3. Change to bank database
  - `use bus_transport;`

4. Create Tables

  - `create table route(id INT PRIMARY KEY, source CHAR(20), destination CHAR(20), no_of_stations INT);`
  
  - `create table bus(id INT PRIMARY KEY, capacity INT NOT NULL, depot_name VARCHAR(20), route_id INT NOT NULL, FOREIGN KEY(route_id) REFERENCES route(id) ON DELETE CASCADE ON UPDATE CASCADE);`
  
  - `create table driver(id INT PRIMARY KEY, name CHAR(20), license_no INT UNIQUE, address CHAR(20), age INT, salary FLOAT);`
  
  - `create table bus_driver(id INT PRIMARY KEY AUTO_INCREMENT, date DATE, shift ENUM('Morning', 'Evening'), bus_id INT NOT NULL, driver_id INT NOT NULL, FOREIGN KEY(bus_id) REFERENCES bus(id) ON DELETE CASCADE ON UPDATE CASCADE, FOREIGN KEY(driver_id) REFERENCES driver(id) ON DELETE CASCADE ON UPDATE CASCADE);`

  ### Sincde Bus-Driver has M:M relationship, thus we need the bus_driver table.

```sql
mysql> desc route;
+----------------+----------+------+-----+---------+----------------+
| Field          | Type     | Null | Key | Default | Extra          |
+----------------+----------+------+-----+---------+----------------+
| id             | int(11)  | NO   | PRI | NULL    | auto_increment |
| source         | char(20) | YES  |     | NULL    |                |
| destination    | char(20) | YES  |     | NULL    |                |
| no_of_stations | int(11)  | YES  |     | NULL    |                |
+----------------+----------+------+-----+---------+----------------+
4 rows in set (0.00 sec)

mysql> desc bus;
+------------+-------------+------+-----+---------+-------+
| Field      | Type        | Null | Key | Default | Extra |
+------------+-------------+------+-----+---------+-------+
| id         | int(11)     | NO   | PRI | NULL    |       |
| capacity   | int(11)     | NO   |     | NULL    |       |
| depot_name | varchar(20) | YES  |     | NULL    |       |
| route_id   | int(11)     | NO   | MUL | NULL    |       |
+------------+-------------+------+-----+---------+-------+
4 rows in set (0.00 sec)

mysql> desc driver;
+------------+----------+------+-----+---------+-------+
| Field      | Type     | Null | Key | Default | Extra |
+------------+----------+------+-----+---------+-------+
| id         | int(11)  | NO   | PRI | NULL    |       |
| name       | char(20) | YES  |     | NULL    |       |
| license_no | int(11)  | YES  | UNI | NULL    |       |
| address    | char(20) | YES  |     | NULL    |       |
| age        | int(11)  | YES  |     | NULL    |       |
| salary     | float    | YES  |     | NULL    |       |
+------------+----------+------+-----+---------+-------+
6 rows in set (0.00 sec)

mysql> desc bus_driver;
+-----------+---------------------------+------+-----+---------+----------------+
| Field     | Type                      | Null | Key | Default | Extra          |
+-----------+---------------------------+------+-----+---------+----------------+
| id        | int(11)                   | NO   | PRI | NULL    | auto_increment |
| date      | date                      | YES  |     | NULL    |                |
| shift     | enum('Morning','Evening') | YES  |     | NULL    |                |
| bus_id    | int(11)                   | NO   | MUL | NULL    |                |
| driver_id | int(11)                   | NO   | MUL | NULL    |                |
+-----------+---------------------------+------+-----+---------+----------------+
5 rows in set (0.00 sec)


```
