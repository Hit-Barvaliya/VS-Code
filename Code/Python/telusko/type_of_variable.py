
class Car :
    
    wheels = 4  
    # -> this is class variable
    # -> this is same for all the Car's object

    def __init__ (self):
        self.mil = 10   
        self.com = 'BMW'
        # -> this is instance variable
        # -> this is may be different for other object


c1 = Car()
c2 = Car()

c1.mil = 8  # -> instance variable are change by object
Car.wheels = 5  # -> class variable are change bu class name

print(c1.mil,c1.com,c1.wheels)
print(c2.mil,c2.com,c2.wheels)













"""
# -------------------------
# Global Variable
# -------------------------
company_name = "AutoWorld"

class Car:

    # -------------------------
    # Class Variable (Static Variable)
    # -------------------------
    wheels = 4

    def __init__(self, brand, mileage):
        # -------------------------
        # Instance Variables
        # -------------------------
        self.brand = brand
        self.mileage = mileage

    def show_details(self):
        # -------------------------
        # Local Variable
        # -------------------------
        message = "Car Information:"   # local variable (exists only in this method)

        return (
            f"{message}\n"
            f"Company: {company_name}\n"
            f"Brand: {self.brand}\n"
            f"Mileage: {self.mileage}\n"
            f"Wheels: {Car.wheels}\n"
        )


# -------------------------
# Creating Objects
# -------------------------
c1 = Car("BMW", 10)
c2 = Car("Maruti", 20)

# -------------------------
# Output
# -------------------------
print(c1.show_details())
print(c2.show_details())
"""

"""
| Variable Type         | Where Defined?                    | Example in Code              | Scope                          |
| --------------------- | --------------------------------- | ---------------------------- | ------------------------------ |
| **Global Variable**   | Outside class & functions         | `company_name`               | Available everywhere           |
| **Class Variable**    | Inside class but outside methods  | `wheels`                     | Shared by all objects          |
| **Instance Variable** | Inside `__init__()` using `self.` | `self.brand`, `self.mileage` | Unique for each object         |
| **Local Variable**    | Inside any method                 | `message`                    | Exists only inside that method |

"""
