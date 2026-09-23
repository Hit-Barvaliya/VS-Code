
"""
in python we can not creat a multipal method with same name in same class
    |-> so, method overloading is not happen with multipal methods
-> this means python will not support method overloading by-default
"""

class Student :

    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def sum(self,a=None,b=None,c=None):

        # sum = a+b+c this is also work

        sum = 0
        if(a!=None and b!=None and c!=None):
            sum = a + b + c
        elif(a!=None and b!=None):
            sum = a+b
        else:
            sum = a

        return sum
    """
    This is another soultion for method overloading
    
    def sum(self, *args):
        total = 0
        for x in args:
            total += x
        return total
    """

s1 = Student(58,69)

print(s1.sum(5,9,6))


# this is about the method overriding

class AA:
    
    def future1(self):
        print("future 1-A is working..")


class DD(AA):
   
    def future1(self):
        print("future 1-B is working..")


obj = DD()
obj.future1()





