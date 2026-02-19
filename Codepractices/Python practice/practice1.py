n=int(input("Enter the umber you like to check"))
sum=0
temp=n
while temp>0:
    digit=temp%10
    sum+=digit**3
    temp//=10
if n== sum:

    print("yeah!")
else:
    print("Naah!")                                                                          