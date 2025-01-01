# Write your MySQL query statement below
select a.machine_id, Round(AVG(a.timestamp-b.timestamp),3) as processing_time
from Activity as a,Activity as b 
where a.activity_type="end" and b.activity_type="start" and a.machine_id=b.machine_id
group by machine_id;