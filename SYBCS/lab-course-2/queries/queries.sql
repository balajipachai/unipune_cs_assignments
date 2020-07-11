/* SET A */

/* Using Bank Database */
SELECT name Customer
FROM customer c, loan l
WHERE c.id = l.customer_id AND l.amount > 10000;

SELECT name Customer
FROM customer c, loan l, account a
WHERE c.id = a.customer_id AND c.id != l.customer_id;

SELECT name Customer
FROM customer c, loan l, account a
WHERE c.id = a.customer_id AND c.id = l.customer_id;

SELECT c.name Customer
FROM customer c, loan l, branch b
WHERE c.id = l.customer_id AND l.branch_id = b.id AND b.name = 'Pimpri';

SELECT c.name Customer
FROM customer c, account a
WHERE c.id = a.customer_id AND a.type = 'Savings';

SELECT SUM(l.amount) TotalAmount
FROM
    loan l, branch b
WHERE l.branch_id = b.id AND b.city = 'Nagar';

SELECT c.name
FROM
    customer c, branch b, loan l
WHERE c.id = l.customer_id AND l.branch_id = b.id AND c.city = b.city;

/* Using Bus Database */
SELECT d.id DriverId, d.name DriverName
FROM driver d, bus_driver bd
WHERE d.id = bd.driver_id AND bd.shift = 'Morning';

SELECT source, destination, no_of_stations TotalStations
FROM route r, bus b
WHERE
r.id = b.route_id AND b.capacity = 20;

SELECT d.name DriverName, d.license_no LicenseNo
FROM driver d, bus_driver bd
WHERE
bd.date = '12-01-2008' AND bd.shift = 'Morning' AND bd.shift = 'Evening';

DELETE FROM route WHERE no_of_stations < 3;

SELECT COUNT(b.id) TotalBuses
FROM bus b, route r
WHERE
b.route_id = r.id AND r.source = 'Chinchwad' AND r.destination = 'Corporation';

UPDATE driver SET salary = 1000 WHERE age > 35;

SELECT b.id BusNo
FROM bus b, route r
WHERE
b.route_id = r.id AND b.capacity = 50 AND r.source = 'Swargate' AND r.destination = 'Hadapsar';

/* Using Student Competition Database */
SELECT COUNT(c.id) TotalCompetitions
FROM competition c, student_competition sc
WHERE c.id = sc.competition_id;

SELECT s.name StudentName, sc.rank Rank
FROM student s, student_competition sc, competition c
WHERE s.id = sc.student_id AND c.id = sc.competition_id AND sc.rank = 1 AND c.name =  'Running Race' AND sc.year >= 1995 AND sc.year <= 2005;

