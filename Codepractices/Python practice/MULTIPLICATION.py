def multiplication(list):
    mul=1
    for i in list:
        mul=mul*i
        pass
    print(mul)
list=[]
n=int(input("Enter the number of members in the list"))
for i in range(0,n):
    list2=int(input("Enter the numbers"))
    list.append(list2)
multiplication(list)
