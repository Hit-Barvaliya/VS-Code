

# -> hear we try to use that functions which are made in other file

num1,num2 = 20,5

# -> this is method 1

# -> first we import that file

"""
import Calc


ans = Calc.mul(num1,num2)
print(ans)

ans = Calc.add(num1,num2)
print(ans)
"""

# -> this is method 2

# -> hear we import a specific function at a time
# from Calc import add
#   |-> after this we can use only add function not any other

# -> haer we import all the function at a time
from Calc import *


ans = add(num1,num2)
print(ans)




