# Write your MySQL query statement below
Select name 
From SalesPerson 
Where sales_id 
Not In 
(Select sales_id From Orders Where orders.com_id = 
 (Select com_id From Company Where name = 'RED'))
