n=int(input("Enter the number of pile of stones you wanna choose"))
if n%2==0:
    print("It's even")
    start_ev=2
elif n%2!=0:
    print("It's even")
    start_odd=1
else:
    print("The numbers are zero")
for i in range(0,n):
    print(i)