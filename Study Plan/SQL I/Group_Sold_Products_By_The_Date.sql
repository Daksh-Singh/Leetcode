# Write your MySQL query statement below
Select sell_date As sell_date,
Count(Distinct product) As num_sold,
Group_Concat(Distinct product Order By product Asc Separator ',') As products
From Activities
Group By sell_date;