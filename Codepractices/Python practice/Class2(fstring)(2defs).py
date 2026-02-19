class professor:
    def __init__(self,name,address):
        self.name=name
        self.address=address
# professor_1=professor("Akshat","BHAGALPUR")
# professor_2=professor("Riya kukreti","DEHRADUN")
# professor_3=professor("Harsh anand","KHAGARIYA")
# print(professor_2.address)
# print(professor_1.name)
    def post(self,post):
     self.post=post
     print(f"I am a {self.post} and my name is {self.name}, i live in {self.address}")
professor_1=professor("Akshat raj","BHAGALPUR")
professor_1.post("HOD")
























# pass
# professor_1=professor()
# professor_1.name="Akshat raj"
# professor_1.address="BGP"
# print(professor_1.name) 