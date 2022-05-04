# Write your MySQL query statement below
Select event_day As day, emp_id, Sum(out_time) - Sum(in_time) As total_time
From employees
Group By day, emp_id;
