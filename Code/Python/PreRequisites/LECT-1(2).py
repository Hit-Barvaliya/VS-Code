"""
Types of Operator :- 

Arithmetic Operators. 
Relational Operators. 
Assignment Operators. 
Logical Operators. 
Membership Operators. 
Identity Operators. 
Bitwise Operators.

"""

# -> Membership Operator
a,b = 10,9
ls = [10,20,30,40,50]

if(a in ls):    # -> if a is from the list then return true
    print(a," is from the ls list")
else :
    print(a," is not from the ls list")

if(b not in ls):    # -> if b is not from then return true
    print(b," is not from the ls list")
else :
    print(b," is from the ls list")
    
"""
Classes and Objects - Python classes are the blueprint of the object. An object is a collection of data and method that act on the data.
Inheritance - An inheritance is a technique where one class inherits the properties of other classes.
Constructor - Python provides a special method __init__() which is known as a constructor. This method is automatically called when an object is instantiated.
Data Member - A variable that holds data associated with a class and its objects.
"""
