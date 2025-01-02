# Write your MySQL query statement below
Select activity_date as day,COUNT(Distinct user_id) as active_users
from Activity where
 activity_date>="2019-6-28" 
 and 
  activity_date<="2019-07-27"
group by day;