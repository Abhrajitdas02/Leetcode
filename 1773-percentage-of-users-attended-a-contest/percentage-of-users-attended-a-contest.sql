# Write your MySQL query statement below
Select contest_id,ROUND((COUNT(user_id)/(Select COUNT(user_id) from Users)*100),2) as percentage
From Register 
group by contest_id
order by percentage DESC,contest_id;