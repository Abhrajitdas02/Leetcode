# Write your MySQL query statement below
SELECT t2.product_name,t1.year,t1.price from Sales as t1 INNER JOIN Product as t2 on t1.product_id=t2.product_id;