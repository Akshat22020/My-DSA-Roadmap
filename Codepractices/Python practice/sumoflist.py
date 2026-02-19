def addition(list):
    sum=0
    for i in list:
        sum+=i
    return sum
n=int(input("Enter the number of elements"))
list=[]
for i in range(0,n):
    list2=int(input("Enter the number in list"))
    list.append(list2)
print(list)
print(addition(list))