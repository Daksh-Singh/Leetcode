# Write your MySQL query statement below
Select product_id, 'store1' As store, store1 As price
From products
Where store1 Is Not Null
Union
Select product_id, 'store2' As store, store2 As price
From products
Where store2 Is Not Null
Union
Select product_id, 'store3' As store, store3 As price
From products
Where store3 Is Not Null
