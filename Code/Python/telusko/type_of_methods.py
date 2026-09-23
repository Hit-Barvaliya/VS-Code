class Student :
    
    school = 'tlusko'   # class variable

    def __init__(self,m1,m2,m3):
        self.m1 = m1    # instance variable
        self.m2 = m2
        self.m3 = m3

    # -> for the instance variable we have two type of method
    #   |-> 1) Accessor Method  => this is access(return) the value
    #   |-> 2) Mutator Method   -> this is change the value

    # Accessor variable
    def get_m1(self):
        return self.m1
    
    # Mutator Method
    def set_m1(self,value):
        self.m1 = value

    def avg(self):
        return (self.m1+self.m2+self.m3)/3
    
    @classmethod
    def getschool(cls):  # -> in the classmethod we 'cls' as an argument
        print('Our school name is :- ',Student.school)
    
    @staticmethod
    def info():
        print("This is student class in abc module..")

s1 = Student(34,47,32)
s2 = Student(89,32,12)

print(s1.avg())
print(s2.avg())

# -> hear we pass class as an argument
Student.getschool()
s1.getschool()

# -> hear we call a static method
s1.info()
Student.info()





# => this is summary of this video

"""
class Car:

    # ---------------------
    # Class Variable
    # ---------------------
    wheels = 4       # shared by all objects

    def __init__(self, brand, mileage):
        # ---------------------
        # Instance Variables
        # ---------------------
        self.brand = brand
        self.mileage = mileage

    # ---------------------
    # Instance Method   => instance method have 'self' key-word & '@InstanceMethod' is also required
    # ---------------------
    def show_details(self):
        return f"Brand: {self.brand}, Mileage: {self.mileage}, Wheels: {Car.wheels}"

    # ---------------------
    # Class Method  => class method have 'cls' key-word & '@ClassMethod' is also required
    # ---------------------
    @classmethod
    def change_wheels(cls, new_count):
        cls.wheels = new_count         # modifies class variable
        return f"Wheels changed to {cls.wheels}"

    # ---------------------
    # Static Method
    # ---------------------
    @staticmethod
    def is_luxury(mileage):
        # a utility method, doesn't use self or class
        return mileage < 10            # low mileage = luxury car

    # ---------------------
    # Object Comparison Method
    # ---------------------
    def compare(self, other):
        if self.mileage == other.mileage:
            return True
        return False


# ---------------------
# Creating Objects
# ---------------------
c1 = Car("BMW", 8)
c2 = Car("Audi", 8)
c3 = Car("Maruti", 18)

# ---------------------
# Using Instance Method
# ---------------------
print(c1.show_details())
print(c2.show_details())
print(c3.show_details())

# ---------------------
# Using Class Method
# ---------------------
print(Car.change_wheels(6))

print(c1.show_details())   # wheels updated for all cars
print(c2.show_details())
print(c3.show_details())

# ---------------------
# Using Static Method
# ---------------------
print(Car.is_luxury(c1.mileage))   # True
print(Car.is_luxury(c3.mileage))   # False

# ---------------------
# Comparing Objects
# ---------------------
print(c1.compare(c2))  # True (same mileage)
print(c1.compare(c3))  # False
"""
"""
| Method Type         | Use When …                                                                       | Access to Instance Data? | Access to Class Data?                       |
| ------------------- | -------------------------------------------------------------------------------- | ------------------------ | ------------------------------------------- |
| **Instance Method** | Behavior depends on instance’s data                                              | ✅ Yes (`self`)           | ✅ (via `self.__class__`) ([Real Python][1]) |
| **Class Method**    | Behavior tied to class-level data / you want a factory / alternative constructor | ❌ No                     | ✅ Yes (`cls`) ([GeeksforGeeks][2])          |
| **Static Method**   | Utility functionality — independent of instance or class data                    | ❌ No                     | ❌ No ([GeeksforGeeks][2])                   |

[1]: https://realpython.com/instance-class-and-static-methods-demystified/?utm_source=chatgpt.com "Python's Instance, Class, and Static Methods Demystified"
[2]: https://www.geeksforgeeks.org/python/class-method-vs-static-method-python/?utm_source=chatgpt.com "Class method vs Static method in Python"

"""
