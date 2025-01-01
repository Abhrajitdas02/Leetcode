# Write your MySQL query statement below
Select project_id,Round(AVG(t2.experience_years),2) as average_years
from Project as t1 LEFT JOIN Employee as t2 on t1.employee_id=t2.employee_id
group by project_id;