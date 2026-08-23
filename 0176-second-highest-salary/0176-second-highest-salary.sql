SELECT 
    CASE 
        WHEN COUNT(DISTINCT salary) < 2 THEN NULL
        ELSE (
            SELECT salary
            FROM Employee
            GROUP BY salary
            ORDER BY salary DESC
            LIMIT 1 OFFSET 1
        )
    END AS SecondHighestSalary
FROM Employee;