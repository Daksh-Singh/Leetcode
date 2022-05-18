# Write your MySQL query statement below
Select product_id, product_name 
From Product
Where product_id
Not In (Select product_id From Sales Where sale_date Not Between '2019-01-01' And '2019-03-31');
