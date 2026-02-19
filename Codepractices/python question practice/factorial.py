n=int(input("Enter the value of number you want to find the factorial of:"))
factorial_value=1
for i in range(1,n+1):
    factorial_value=factorial_value*i
print(factorial_value)