SELECT
Employee
FROM
EmployeesView
WHERE Department = 'Sales';



SELECT
Department,
count(Department) AS number
FROM
EmployeesView
group by Department
order by Department;



SELECT
Employee
FROM
EmployeesView
WHERE Position = 'Programmer' AND (Age >= 25 AND Age <= 35);

