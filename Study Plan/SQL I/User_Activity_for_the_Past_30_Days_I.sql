# Write your MySQL query statement below
Select activity_date As day,
Count(Distinct user_id) As active_users
From Activity
Where DateDiff('2019-07-27', activity_date) < 30
Group By day;

