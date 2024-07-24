# Write your MySQL query statement below
select p.firstname,p.lastName,a.city,a.state from Person as p LEFT JOIN Address as a ON p.personId=a.personId;