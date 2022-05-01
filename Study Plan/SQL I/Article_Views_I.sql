# Write your MySQL query statement below
Select Distinct(author_id) As id
From Views
Where author_id = viewer_id
Order by id Asc;
