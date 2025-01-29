# Write your MySQL query statement below
select e1.customer_id, COUNT(distinct(e1.visit_id)) as count_no_trans from Visits as e1 LEFT JOIN Transactions as e2
on e1.visit_id=e2.visit_id
where transaction_id is NULL
group by customer_id;