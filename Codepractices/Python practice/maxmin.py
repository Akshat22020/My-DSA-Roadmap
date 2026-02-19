list=[]
n=int(input("Enter the number of members in the list:"))
for i in range(1,n+1):
    list2=int(input("Enter the members"))
    list.append(list2)
print(list)
count=0
print(len(list))
print(max(list))
print(min(list))
if max(list)==min(list):
    print("Bhak bhosdike")
else:
    pass
    