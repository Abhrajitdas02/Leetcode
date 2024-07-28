# Write your MySQL query statement below
select t1.customer_id,COUNT(t1.visit_id) as count_no_trans from Visits t1
LEFT JOIN transactions t
ON t1.visit_id=t.visit_id
WHERE t.transaction_id is NULL
group by t1.customer_id;
