# Write your MySQL query statement below
Select id,movie,description,rating from Cinema where (id%2)=1 and description NOT LIKE "boring" 
Order by rating DESC;