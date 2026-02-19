a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
c=input("Enter the operator")
match c:
    case 1:
        print("The addition is:",a+b)
    case 2:
        print("The substraction is:",a-b)
    case 3:
        print("The multiplication is:",a*b)
    
