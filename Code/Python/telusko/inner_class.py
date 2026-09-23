class Student:

    def __init__(self, name, roll):
        self.name = name          # instance variable
        self.roll = roll          # instance variable
        self.lap = self.Laptop()  # creating object of inner class

    def show(self):
        print("Student Name:", self.name)
        print("Roll Number:", self.roll)
        self.lap.show()           # calling inner class method

    # Inner Class
    class Laptop:
        def __init__(self):
            self.brand = "HP"
            self.cpu = "i5"
            self.ram = 8

        def show(self):
            print("Laptop Details:", self.brand, self.cpu, self.ram)


# ----------- Creating objects ---------------
s1 = Student("Naveen", 2)
s2 = Student("Jenny", 3)

# ----------- Using objects ------------------
s1.show()
s2.show()

# Create Laptop object from outside
lap1 = Student.Laptop()
# lap1 = s1.Laptop()    => this is also work
lap1.show()
