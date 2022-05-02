# Write your MySQL query statement below
Select Distinct(w2.id)
From Weather w1, Weather w2
Where Datediff(w1.recordDate,w2.recordDate) = -1 And 
    w1.temperature < w2.temperature
