# Write your MySQL query statement below
Select Users.name, sum(amount) As balance
From Users 
Right Join Transactions
On Users.account = Transactions.account
Group By Transactions.account
Having balance > 10000;