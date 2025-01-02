# Write your MySQL query statement below
select ROUND(SUM(IF(order_date=customer_pref_delivery_date,1,0))/COUNT(DISTINCT customer_id)*100,2) as immediate_percentage
from Delivery
where (customer_id,order_date) IN
(select customer_id,MIN(order_date) 
from Delivery
group by customer_id);