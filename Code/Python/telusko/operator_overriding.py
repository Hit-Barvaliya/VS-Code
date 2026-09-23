

# -> we do operation on user define object then we use operator-overriding concept

a = 10
b = 20

print(a+b)  # when we do any operation then it will call the methods internally
print(int.__add__(a,b))

string1 = "Hello "
string2 = "World"
print(string1+string2)
print(str.__add__(string1,string2))
"""
+ <-> __add__
- <-> __sub__
* <-> __mul__
ETC.
-> all this functions are called an magic functions
"""
print()
print()

class Student:

    def __init__(self,m1,m2):
        self.m1 = m1
        self.m2 = m2

    def __add__(self,other):
        r1 = self.m1 + other.m1
        r2 = self.m2 + other.m2
        s3 = Student(r1,r2)
        return s3

    def __gt__ (self,other):
        sum1 = self.m1 + self.m2
        sum2 = other.m1 + other.m2
        if sum1 > sum2 :
            return True
        else : 
            return False
        
    def __str__ (self):
        # -> hear we can not return an integer because print() will print only string
        return '{} {}'.format(self.m1,self.m2)
        

s1 = Student(58,69)
s2 = Student(69,65)

s3 = s1 + s2

print(s3.m1,s3.m2)

if(s1 > s2):    # call __gt__ magic function
    print("Student 1 wins")
else:
    print("Student 2 wins")

print(s1)   # call __str__ magic function





