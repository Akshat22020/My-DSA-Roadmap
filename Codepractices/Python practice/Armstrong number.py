n=int(input("Enter the number you want to check"))
temp=n
sum=0
while temp>0:
    digit=temp%10
    sum+=digit**3
    temp//=10
if sum==n:
    print("The number is armstrong")
else:
    print("The number is not armstrong")

