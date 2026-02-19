# Star pyramid with spaces

rows=int(input("Enter rows:"))
for i in range(rows):
    for j in range(rows-i-1):
        print(" ",end="")
    for j in range(i+1):
        print("*",end=" ")
    print()


#        *
#       * *
#      * * *
#     * * * *
#    * * * * *
    

# rows=int(input("Enter rows:"))
# for i in range(rows):
#     for j in range(rows-i-1):
#         print(" ",end="")
#     for j in range(i+1):
#         print(i+1,end=" ")
#     print()

#        1
#       2 2
#      3 3 3
#     4 4 4 4
#    5 5 5 5 5