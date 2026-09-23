
# python will not support abstract class by-default

from abc import ABC,abstractmethod

class Computer(ABC) :
    @abstractmethod
    def process(self):
        pass


# c1 = Computer()
# c1.process()
# => this will give error

class Laptop (Computer):
    def process(self):
        print("It is running..")

l1 = Laptop()
l1.process()

"""
✅ 1. What is abc?

abc stands for Abstract Base Classes.

It is a built-in Python module used to create:

Abstract classes

Abstract methods

✅ 2. What is ABC?

ABC is a base class from the abc module.

When you write:

class Shape(ABC):


You are telling Python:

“This is an abstract class — it cannot be used to create objects directly.”

So ABC makes a class abstract.

✅ 3. What is abstractmethod?

abstractmethod is a decorator used to define an abstract method.

Example:

@abstractmethod
def area(self):
    pass


This tells Python:

“Every child class must provide its own version of this method.”
"""


