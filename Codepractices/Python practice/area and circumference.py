class circle:
    def __init__(self,r):
         self.radius=r
         self.area=3.14*r**2
         self.circumference=2*3.14*r
circle_1=circle(4)
print(circle_1.area)
print(circle_1.circumference)
