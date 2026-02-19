n=int(input("Enter the numbers in list"))
list=[]
for i in range(0,n):
    list2=int(input("Enter the members:"))
    list.append(list2)
print(list)
sum=0
for i in list:
    sum+=i
avg=sum/n
print(avg)

