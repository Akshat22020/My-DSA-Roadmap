class animal:
    def __init__(self,name,speak):
        self.name=name
        self.speak=speak
        print(f"{self.name} speaks {self.speak}")
animal_1=animal("Dog","barks")
