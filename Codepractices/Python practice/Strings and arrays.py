# strings are immutable in nature meaningg we cannot change its values once it has been decleared
# after using any formatting tag we are basically creating new string with different memory allocation
new="akshat"
print(new.upper())




#here we learn different operations on a string

#Printing Hello world's selected letter
a="Hello world"
print(a[0])
print("\n")
#finding length
b="Hello world"
print(len(b))
print("\n")
#middle slicing
c = "Hello, World!"
print(b[2:5])
print("\n")
#front slicing
d="Akshat raj"
print(d[0:4])
print("\n")
#Back slicing
e="Riya roy"
print(e[2:])
print("\n")
#inverse slicing
f="Harsh"
print(f[-5:-2])
print("\n")
#replacing in strings
g="Hkshat"
print(g.replace("H", "A"))
mylist=[1,2,3,4,5,6]
print(len(mylist))

Mylist=[1,2,3,4,5,6,7,8]
print(Mylist[-4:-1])

Myset={1,2,3,4,5,6,7,8}
print(Myset)
print("\n")

Mylist.extend(Myset)
print(Mylist)
print("\n")


Mylist.remove(1)
print(Mylist)
print("\n")

del Mylist[2]
print(Mylist)
print("\n")

new1="!!!Akshat akshat akshat akshat riya aisha harsh akshat akshat!!!!!!!!!!!!!!!!"
print(new1.rstrip("!"))
print(new1.count("akshat"))
print(new1.count("riya"))
print(new1.count("harsh"))
print(new1.capitalize())
