"""
we have two type for tyep conversion :- 
    1) Type conversion 2) Type casting

1) -> This will happen by compiler automitically because this is small range to big range
2) -> We have force fully to the compiler for type casting
"""

# type conversion
var1 = 10
var2 = 10.32

print((var1+var2))


# type casting
a,b = 1,"2"
print("Type of variable a :- ",type(a))  # -> this is will print the data-type of that variable
print("Type of variable b :- ",type(b))
c = int(b)
print("Value and Type of variable c :- ",c,type(c))
d = str(a)
print("Value and Type of variable d :- ",d,type(d))
e = True
print("Type of variable e :- ",type(e))
f = 1.2
print("Type of variable f :- ",type(f))

#the way to declare complex number
g = complex(1,-2)
h = complex(3)
print("Value and Type of variable g :- ",g,type(g),"Type of variable h :- ",h)