# a=int(input("Enter the integer number to covert:"))
# print("The hexa-decimal conversion of a is:",hex(a))
# print("The binary conversion of a is:",bin(a))
# print("The octal conversion of a is:",oct(a))

list=[]
n=int(input("ENter the numbers of members that you like"))
for i in range(0,n):
    ele=input("Enter the list values")
    list.append(ele)
print(list)
if ele[i-1] in ele[i] and ele[i] in ele[i+1]:
    print("True")
else:
    print("False")



