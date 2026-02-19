# Write a Python program to find a list of integers containing exactly four distinct values, such that no integer repeats twice consecutively among the first twenty entries.
n=int(input("Enter the number of members in list"))
list=[]
for i in range(0,n):
    ele=int(input("Enter the numbers"))
    list.append(ele)
print(list)

