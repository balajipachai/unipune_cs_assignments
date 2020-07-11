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

