# Write your MySQL query statement below
Select stock_name,  
Sum(Case 
When operation = 'Buy' Then (price * -1)
When operation = 'Sell' Then (price * 1)
End) As Capital_gain_loss
From stocks
Group By stock_name; 