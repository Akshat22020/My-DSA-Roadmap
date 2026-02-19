def Multiplication(list):
    mul=1
    for i in list:
        mul*=i
    return mul

list=[]
n=int(input("Enter the members"))
for i in range(0,n):
    list2=int(input("Enter the member"))
    list.append(list2)
print(list)
print(Multiplication(list))