# Write your MySQL query statement below

# SELECT unique_id,name
# FROM Employees as e
# LEFT JOIN EmployeeUNI as
# eu
# ON e.id=eu.unique_id;

select unique_id, name from Employees as e
left join EmployeeUNI as c
on e.id = c.id
