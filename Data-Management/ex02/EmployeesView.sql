CREATE
VIEW EmployeesView AS
SELECT
Employees.Name AS Employee,
Employees.Age AS Age,
Positions.Name AS Position,
Departments.Name AS Department
FROM Employees
JOIN DeptStaff ON Employees.ID = DeptStaff.EmployeeID
JOIN Departments ON DeptStaff.DepartmentID = Departments.ID
JOIN Positions ON Employees.PositionID = Positions.ID;