# Write your MySQL query statement below
Select name as Customers
From Customers
Where id Not in (Select customerId From Orders);