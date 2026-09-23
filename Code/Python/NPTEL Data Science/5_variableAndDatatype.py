"""
in the name of variable we can use only A-Z,a-z,0-9,_

-> must start with A-Z,a-z,_
    |-> stat with number is not allowed
"""

# -> three way of naming conventation

# 1) Camel
ageEmp = 10
# 2) snake
age_emp = 10
# 3) Pascal
AgeEmp = 10



# assing value to the multipal variable
a,b,c = 1,2,3

"""
->  Statistically typed language
• Type of variable is known at compile time
• Type of variables declared upfront
• Eg-Java, C, C++

->  Dynamically typed language
• Type of variable known at run time
• Variable type need not be declared
Eg- Python, PHP

"""

print("Type of a variable :- ",type(a)) # -> return the data-type of that variable

# -> syntax for verify the data-type :- type(object) is datatype
print("Check the data-ytpe :- ",type(a) is int) # -> it will check the data-type and return boolean value



print("------------------------------------")
s = "-".join(["data", "science","HHHHH","IIIIIII"])
print(s)

print("------------------------------------")
import numpy as np
a = np.arange(10)
b = a[1:5]
b[0] = 10
print(b)

print("------------------------------------")
set1 = {1,2,"se",3.0,3}
print(set1)

print(type(np.nan),"=>",np.nan)


print("------------------------------------")
import pandas as pd
file1 = pd.read_excel(r"C:\Users\Dell\OneDrive\Desktop\Book1.xlsx")
print(file1.info())

print("------------------------------------")
a1 = a2 = 10
print("a1 :- ",a1," a2 :- ",a2)
b1,b2 = 10,10   # -> this both will creat two seperate variable
print("b1 :- ",b1," b2 :- ",b2)

print("------------------------------------")
print("python"[2])


