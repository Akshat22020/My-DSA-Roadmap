#  Write a Python program that accepts an integer and determines whether it is greater than 4^4 and which returns 4 when divided by 32
n=int(input("Enter the number you'd like to chose"))
a=4**4

if n>a and n%34==4:
    print("True")
else:
    print("False")
