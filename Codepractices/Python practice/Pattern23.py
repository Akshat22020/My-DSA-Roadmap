rows=5
for i in range(rows):
    for j in range(0,rows):
        if j%2==0:
          print("@",end=" ")
        else:
           print("*",end=" ")
    print()
#@ *@ *@ 
#@ *@ *@
#@ *@ *@
#@ *@ *@
#@ *@ *@


# rows=5
# for i in range(rows):
#     for j in range(0,rows):
#         if i%2==0:
#           print("@",end=" ")
#         else:
#            print("*",end=" ")
#     print()
# @ @ @ @ @ 
# * * * * *
# @ @ @ @ @
# * * * * *
# @ @ @ @ @
