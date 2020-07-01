# Student Competition Database

1. Log In to MySQL
  - `mysql -u root -p`

2. Create bank database
  - `create database student_competition;`

3. Change to bank database
  - `use student_competition;`

4. Create Tables

    - `create table student(id INT PRIMARY KEY AUTO_INCREMENT, name CHAR(30), class CHAR(10));`

    - `create table competition(id INT PRIMARY KEY AUTO_INCREMENT, name CHAR(20), type CHAR(15));`

    - `create table student_competition(id INT PRIMARY KEY AUTO_INCREMENT, rank TINYINT NOT NULL, year SMALLINT UNSIGNED, student_id INT NOT NULL, competition_id INT NOT NULL, FOREIGN KEY(student_id) REFERENCES student(id), FOREIGN KEY(competition_id) REFERENCES competition(id));`

### Sincde Student-Competition has M:M relationship, thus we need the student_competition table.


```sql
mysql> desc student;
+-------+----------+------+-----+---------+----------------+
| Field | Type     | Null | Key | Default | Extra          |
+-------+----------+------+-----+---------+----------------+
| id    | int(11)  | NO   | PRI | NULL    | auto_increment |
| name  | char(30) | YES  |     | NULL    |                |
| class | char(10) | YES  |     | NULL    |                |
+-------+----------+------+-----+---------+----------------+
3 rows in set (0.00 sec)

mysql> desc competition;
+-------+----------+------+-----+---------+----------------+
| Field | Type     | Null | Key | Default | Extra          |
+-------+----------+------+-----+---------+----------------+
| id    | int(11)  | NO   | PRI | NULL    | auto_increment |
| name  | char(20) | YES  |     | NULL    |                |
| type  | char(15) | YES  |     | NULL    |                |
+-------+----------+------+-----+---------+----------------+
3 rows in set (0.00 sec)

mysql> desc student_competition;
+----------------+----------------------+------+-----+---------+----------------+
| Field          | Type                 | Null | Key | Default | Extra          |
+----------------+----------------------+------+-----+---------+----------------+
| id             | int(11)              | NO   | PRI | NULL    | auto_increment |
| rank           | tinyint(4)           | NO   |     | NULL    |                |
| year           | smallint(5) unsigned | YES  |     | NULL    |                |
| student_id     | int(11)              | NO   | MUL | NULL    |                |
| competition_id | int(11)              | NO   | MUL | NULL    |                |
+----------------+----------------------+------+-----+---------+----------------+
5 rows in set (0.00 sec)

```