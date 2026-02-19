list=[]
n=int(input("Enter the number of elements"))
for i in range(1,n+1):
    list2=int(input("Enter the values of list"))
    list.append(list2)
sum=0
for i in list:
        sum=sum+i
        avg=sum/n
print(avg)