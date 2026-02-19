# Write a Python program to test a list of one hundred integers between 0 and 999, which all differ by ten from one another. Return True otherwise False.
list=[]
n=int(input("Enter the number of members you'd like to keep:"))
for i in range(0,n):
    list2=input("Enter the members")
    list.append(list2)
print(list)
for j in range(len(list)):
    print(j)
    if list[j]-list[j-1]==10:
        print("True")
    else:
        print("False")