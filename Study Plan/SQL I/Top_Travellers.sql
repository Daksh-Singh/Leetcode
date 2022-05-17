# Write your MySQL query statement below
SELECT U.name, IfNull(Sum(R.distance),0) As travelled_distance 
From Users As U 
Left Join Rides as R
On U.id = R.user_id
Group By R.user_id
Order By travelled_distance Desc, name;
