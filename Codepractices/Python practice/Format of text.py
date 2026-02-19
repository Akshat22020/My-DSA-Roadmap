a="Hello"
b="World"
c=a + " " + b
print(c)
age = 36
txt = "My name is John, and I am {}"
print(txt.format(age))
price=32
quantity=2
Itemnumber=659
myorder="I want {} pieces of item {} for {}  rupees."
print(myorder.format(quantity, Itemnumber, price))
Age=18
Roll=50
Class=13
myinfo="My roll number is {1} , i study in class{2} and my age is{0}"
print(myinfo.format(Age, Roll, Class))
print("I am a good boy")

State="Bihar"
District="Bhagalpur"
Country="India"
myaddress="My country is{0},My disctict is {1}, My state is{2}"
print(myaddress.format(Country,District,State))