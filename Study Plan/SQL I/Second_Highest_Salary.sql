# Write your MySQL query statement below
Select Max(salary) As SecondHighestSalary
From Employee
Where salary != (Select Max(salary) From Employee);

