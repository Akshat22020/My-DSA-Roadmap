# Write a Python program that accepts a list of integers and calculates the length and the fifth element. Return true if the length of the list is 8 and the fifth element occurs thrice in the said list.
list=[]
n=int(input("Enter the number of members in the list"))
for i in range(0,n):
    list2=int(input("Enter the members"))
    list.append(list2)
print(list)
print("The length of the list is:",len(list))
print("The 5th element of list is:",list[4])
if len(list)==8 and list.count(list[4])==3:
    print("true")
else:
    print("False")
