a=int(input("Enter the number a:"))
b=int(input("Enter the number b:"))
sum=a+b
sub=a-b
mul=a*b
div=a/b
Operation=input("Enter the desired operator you want to perform")
if  Operation =='Sum':
    print(sum)
elif Operation=='Sub':
    print(sub)
elif Operation =='mul':
    print(mul)
elif Operation=='div':
    print(div)
else:
    print("Numbers are not favourable")
    