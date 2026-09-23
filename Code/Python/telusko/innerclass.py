
class Student :

    def __init__(self,name,rollnum):
        self.name = name
        self.rollnum = rollnum
        self.lap = self.Laptop()

    def show(self):
        print(self.name,self.rollnum)

    class Laptop:

        def __init__(self):
            self.brand = 'hp'
            self.cpu = 'i5'
            self.ram = 8

        def show(self):
            print(self.brand,self.cpu,self.ram)

s1 = Student('Navin',2)
s2 = Student('Jenny',3)

s1.show()   # -> hear we access the outer class method
s1.lap.show()   # -> hear we access the inner class method

# same we access the inner-class outer-class method

print(s1.name,s1.lap.brand)







