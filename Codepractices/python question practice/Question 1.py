# 1. Write a Python program to find a list of integers with exactly two occurrences of nineteen and at least three occurrences of five. Return True otherwise False
list=[]
temp=0 
count=0
n=int(input("Enter the number of members in list"))
for i in range(0,n):
    ele=int(input("Enter the numbers you like to be in the list"))
    list.append(ele)
print(len(list))
if list.count(19)==2 and list.count(5)>=3:
    print("true")
else:
    print("false")