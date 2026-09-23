class student :
    def __init__(self,name,age):
        self.name = name
        self.age = age

    def getinfo() :
        print("Name of student is :- ", self.name)

obj = student('Hit',19)
obj.getinfo()


