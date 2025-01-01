# Write your MySQL query statement below
select t1.student_id,t1.student_name,Subjects.subject_name,COUNT(t2.subject_name) as attended_exams
from Students as t1 
JOIN Subjects 
LEFT JOIN Examinations as t2 on t1.student_id=t2.student_id and Subjects.subject_name=t2.subject_name
group by 1,2,3
order by student_id, subject_name;