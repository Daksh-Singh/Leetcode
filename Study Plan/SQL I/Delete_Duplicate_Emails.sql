# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below
Delete p From Person p, Person q
Where p.email = q.email And p.id > q.id;
