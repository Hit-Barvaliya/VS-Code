
"""
in polymirphism we have 4 concept
1) Duck Typing
2) Method Overloading
3) Method Overriding
4) Operator Overloading
"""


"""
Python does not check the type of an object.
It only checks whether the object has the required methods or attributes.

👉 If it walks like a duck and quacks like a duck,
Python assumes it is a duck.
"""


class Pycharm:
    def execute(self):
        print("Compiling")
        print("Running")

class MyEditior:
    def execute(self):
        print("Spell Check")
        print("Coventation Check")
        print("Compiling")
        print("Running")


class Laptop:

    def code(self,ide):
        ide.execute()


ide = MyEditior()     # hear we have may diffarent name

lap = Laptop()

lap.code(ide)




