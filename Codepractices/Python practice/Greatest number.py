              #This program is to determine the greatest of three numbers or even equality#
print("Enter the numbers below") 
a=int(input("Enter the value of a:"))
b=int(input("Enter the value of b:"))
c=int(input("Enter the value of c:"))
print("The chosen numbers are:")
print(a)
print(b)
print(c)
print("\n")
if a>b and a>c:
    print("The number a is greatest , that is :",a)
elif b>a and b>c:
    print("The number b is greatest, that is:",b)
elif c>a and c>b:
    print("The number c is greatest, that is:",c)
else:
    print("The numbers are either equal or zero")
    
print(type(a))