# Write your MySQL query statement below
Select actor_id, director_id 
From ActorDirector
Group By actor_id, director_id
Having Count(actor_id)> 2 And Count(director_id) > 2;