# Write your MySQL query statement below
Select employee_id, 
Case 
When (employee_id % 2 != 0 And name Not Like 'M%')  Then salary
Else 0
End As bonus
From Employees
Order By employee_id;
