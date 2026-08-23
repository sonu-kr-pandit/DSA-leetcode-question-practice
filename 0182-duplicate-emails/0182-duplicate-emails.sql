# Write your MySQL query statement below
SELECT email AS Email FROM Person
GROUP BY Email
HAVING COUNT(Email) > 1 ;
-- GROUP BY Email;