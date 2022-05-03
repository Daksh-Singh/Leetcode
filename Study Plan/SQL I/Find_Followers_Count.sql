# Write your MySQL query statement below
Select user_id, Count(*) As followers_count
From Followers
Group by user_id
Order By user_id;