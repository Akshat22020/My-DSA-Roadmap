# Write a Python class Employee with attributes like emp_id, emp_name, emp_salary, and emp_department and methods like calculate_emp_salary, emp_assign_department, and print_employee_details.
# Sample Employee Data:
# "ADAMS", "E7876", 50000, "ACCOUNTING"
# "JONES", "E7499", 45000, "RESEARCH"
# "MARTIN", "E7900", 50000, "SALES"
# "SMITH", "E7698", 55000, "OPERATIONS"
# Use 'assign_department' method to change the department of an employee.
# Use 'print_employee_details' method to print the details of an employee.


# Use 'calculate_emp_salary' method take two arguments: salary and hours_worked, which is the number of hours worked by the employee. If the number of hours worked is more than 50, the method computes overtime and adds it to the salary. Overtime is calculated as following formula:
# overtime = hours_worked - 50
# Overtime amount = (overtime * (salary / 50))


class employee():
    def __init__(self,emp_id,emp_name,emp_salary,emp_department):
        self.emp_id=emp_id
        self.emp_name=emp_name
        self.emp_salary=emp_salary
        self.emp_department=emp_department
    def assign_department(self,assign_department):
        self.emp_department





# pass
# employee_1=employee(123431,"Akshat",94000,"Artificial intelligence")
# employee_2=employee(123432,"Aman verma",92000,"Artificial intelligence")
# employee_3=employee(123433,"Aditya 5g",91000,"Cyber security")
# employee_4=employee(123434,"Adarsh",87000,"Software developer")
# print(employee_1.emp_name)
# print(employee_2.emp_department)
# print(employee_4)









