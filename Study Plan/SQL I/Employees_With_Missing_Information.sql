# Write your MySQL query statement below
Select employee_id 
From Employees
Where employee_id Not in (Select employee_id From Salaries)
Union
Select employee_id
From Salaries
Where employee_id Not in (Select employee_id From Employees)
Order By employee_id Asc;
