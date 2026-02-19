# n=int(input("Enter the number you want to create the table of :"))
# i=1
# while(n<i):
#     n=n*i
#     print(f"{n}*{i}=",n)
# Multiplication table (from 1 to 10) in Python

num = int(input("Enter the number:"))

# To take input from the user
# num = int(input("Display multiplication table of? "))

# Iterate 10 times from i = 1 to 10
for i in range(1, num):
   print(num, 'x', i, '=', num*i)
