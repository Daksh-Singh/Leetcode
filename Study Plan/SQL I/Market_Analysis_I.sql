# Write your MySQL query statement below
Select user_id As buyer_id,
    join_date,
    Count(order_id) As orders_in_2019
From Orders o
Right Join Users u
On o.buyer_id = u.user_id And YEAR(order_date) = 2019
Group By 1, 2; 
