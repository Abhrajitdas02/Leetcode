# Write your MySQL query statement below
Select t1.customer_id,COUNT(Distinct t1.visit_id) as count_no_trans from Visits as t1
LEFT JOIN transactions as t2 on t1.visit_id=t2.visit_id
where t2.transaction_id is null
group by customer_id;