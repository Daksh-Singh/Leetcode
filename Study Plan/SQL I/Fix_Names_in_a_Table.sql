# Write your MySQL query statement below
Select user_id, 
Concat(Upper(Substr(name, 1, 1)), Lower(Substr(name, 2, Length(name)))) As name
From Users
Order By user_id;