# Mobile Billing Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database mobile_billing;`

3. Change to bank database
  - `use mobile_billing;`

4. Create Tables

    - `create table plan(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(20), no_of_free_calls INT, rate_per_call_per_min DOUBLE, free_call_time INT, fixed_amount DOUBLE DEFAULT 0);`

    - `create table customer(id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(20), mobile_no VARCHAR(10), plan_no INT, FOREIGN KEY(plan_no) REFERENCES plan(id) ON DELETE CASCADE ON UPDATE CASCADE);`

    - `create table cust_call_info(receiver_no INT PRIMARY KEY, customer_id INT, no_of_calls INT, total_talktime INT, cycle_period VARCHAR(20), FOREIGN KEY(customer_id) REFERENCES customer(id) ON DELETE CASCADE ON UPDATE CASCADE);`

    - `create table bill(bill_no INT PRIMARY KEY AUTO_INCREMENT, receiver_no INT, final_bill_amount DOUBLE, cycle_date DATE, bill_due_date DATE, status VARCHAR(10), bill_pay_date DATE, customer_id INT, FOREIGN KEY(customer_id) REFERENCES customer(id) ON DELETE CASCADE ON UPDATE CASCADE);`


```sql
mysql> desc plan;
+-----------------------+-------------+------+-----+---------+----------------+
| Field                 | Type        | Null | Key | Default | Extra          |
+-----------------------+-------------+------+-----+---------+----------------+
| id                    | int(11)     | NO   | PRI | NULL    | auto_increment |
| name                  | varchar(20) | YES  |     | NULL    |                |
| no_of_free_calls      | int(11)     | YES  |     | NULL    |                |
| rate_per_call_per_min | double      | YES  |     | NULL    |                |
| free_call_time        | int(11)     | YES  |     | NULL    |                |
| fixed_amount          | double      | YES  |     | 0       |                |
+-----------------------+-------------+------+-----+---------+----------------+
6 rows in set (0.00 sec)

mysql> desc customer;
+-----------+-------------+------+-----+---------+----------------+
| Field     | Type        | Null | Key | Default | Extra          |
+-----------+-------------+------+-----+---------+----------------+
| id        | int(11)     | NO   | PRI | NULL    | auto_increment |
| name      | varchar(20) | YES  |     | NULL    |                |
| mobile_no | varchar(10) | YES  |     | NULL    |                |
| plan_no   | int(11)     | YES  | MUL | NULL    |                |
+-----------+-------------+------+-----+---------+----------------+
4 rows in set (0.00 sec)


mysql> desc cust_call_info;
+----------------+-------------+------+-----+---------+-------+
| Field          | Type        | Null | Key | Default | Extra |
+----------------+-------------+------+-----+---------+-------+
| receiver_no    | int(11)     | NO   | PRI | NULL    |       |
| customer_id    | int(11)     | YES  | MUL | NULL    |       |
| no_of_calls    | int(11)     | YES  |     | NULL    |       |
| total_talktime | int(11)     | YES  |     | NULL    |       |
| cycle_period   | varchar(20) | YES  |     | NULL    |       |
+----------------+-------------+------+-----+---------+-------+

mysql> desc bill;
+-------------------+-------------+------+-----+---------+----------------+
| Field             | Type        | Null | Key | Default | Extra          |
+-------------------+-------------+------+-----+---------+----------------+
| bill_no           | int(11)     | NO   | PRI | NULL    | auto_increment |
| receiver_no       | int(11)     | YES  |     | NULL    |                |
| final_bill_amount | double      | YES  |     | NULL    |                |
| cycle_date        | date        | YES  |     | NULL    |                |
| bill_due_date     | date        | YES  |     | NULL    |                |
| status            | varchar(10) | YES  |     | NULL    |                |
| bill_pay_date     | date        | YES  |     | NULL    |                |
| customer_id       | int(11)     | YES  | MUL | NULL    |                |
+-------------------+-------------+------+-----+---------+----------------+
8 rows in set (0.00 sec)


```