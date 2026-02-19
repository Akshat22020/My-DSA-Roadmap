a=int(input("entee a number"))
b=int(input("entee a number"))
c=int(input("entee a number"))
if a>b and a>c:
    print(a," is largest")
    max_no=a
elif b>a and b>c:
    print(b,"is largrest")
    max_no=b
else:
    print(c,"is largest") 
    max_no=c

if a<b and a<c:
    print(a," is smallest")
    min_no=a
elif b<a and b<c:
    print(b,"is smallest")
    min_no=b
else:
    print(c,"is smallest") 
    min_no=c
sum=max_no+min_no
print(sum)
sub=max_no-min_no
print(sub)
mul=max_no*min_no
print(mul)
div=max_no/min_no
print(div)
