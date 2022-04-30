# Write your MySQL query statement below
Select id, 'Root' As type
From Tree
Where p_id is Null
Union
Select id, 'Inner' As type
From Tree
Where p_id is Not Null And id in (Select p_id From Tree where p_id is Not Null)
Union
Select id, 'Leaf' As type
From Tree
Where p_id is Not Null And id not in (Select p_id From Tree where p_id is Not Null)
Order By id Asc;
