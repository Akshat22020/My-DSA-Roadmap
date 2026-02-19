# Write a Python program to check the nth-1 string is a proper substring of the nth string in a given list of strings.
list=[]
n=int(input("Enter the number of members you'd like to keep"))
for i in range(0,n):
    list2=input("Enter the members")
    list.append(list2)
print(list)
for j in range(n):
    print(j)
    if list[j-1] in list[j]:
        print("True")
    else:
        print("False")
