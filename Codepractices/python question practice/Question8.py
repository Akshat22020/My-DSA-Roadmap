#greatest number in a set.
list=[]
n=int(input("Enter the number of members in the list"))
for i in range(n):
    list2=int(input("Enter the members"))
    list.append(list2)
print(list)
for j in range(len(list)):
    if list[j]<list[j+1]:
        print("The number",list[j],"is smaller than the number",list[j+1])
    elif list[j]>list[j+1]:
        print("The number",list[j],"is greater than the number",list[j+1])