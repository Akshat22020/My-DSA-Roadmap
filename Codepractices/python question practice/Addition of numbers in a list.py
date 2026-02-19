def Addition(list):
    sum=0
    for i in list:
        sum+=i
    return sum

list=[]
n=int(input("Enter the members:"))
for i in range(0,n):
    list2=int(input("Enter the numbers:"))
    list.append(list2)
print("The addition is :",list)
print(Addition(list))