# We are making n stone piles! The first pile has n stones. If n is even, then all piles have an even number of stones. If n is odd, all piles have an odd number of stones. Each pile must more stones than the previous pile but as few as possible. Write a Python program to find the number of stones in each pile.
list=[]
n=int(input("Enter the number of stones in first pile"))
if n%2==0:
    start=0
else:
    start=1
for i in range(start,n):
      i+=start
      print(list)
  
# Incomplete

