n=int(input("Enter  the numberos rows you want to keep"))
for i in range(0,n):
    for j in range(1,n+1):
        if j>=1 or j>=(2*n-1):
         print('*',end="")
        else:
           print("",end='')
    print('\n')

#   *
#  ***
# *****
#  ***
#   *