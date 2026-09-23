# -------------------------------------------
# 1️⃣ Formal vs Actual Arguments
# -------------------------------------------

# Formal arguments → inside function definition (a, b)
def add(a, b):
    print("Formal Arguments are a and b")
    print("Actual Arguments passed:", a, b)
    return a + b

# Actual arguments → values we pass (10, 20)
print("Sum:", add(10, 20))  
print()


# -------------------------------------------
# 2️⃣ Positional Arguments
# -------------------------------------------

def person_info(name, age):
    print("Name:", name)
    print("Age:", age)

# Values matched by position:
person_info("Rahul", 25)      # name = Rahul, age = 25
print()


# -------------------------------------------
# 3️⃣ Keyword Arguments
# -------------------------------------------

# Passing values using parameter names:
person_info(age=28, name="Naveen")  
print()


# -------------------------------------------
# 4️⃣ Default Arguments
# -------------------------------------------

def greet(name, message="Hello"):
    print(message, name)

greet("Amit")                 # message uses default value "Hello"
greet("Amit", "Good Morning") # default overridden
print()


# -------------------------------------------
# 5️⃣ Variable-Length Arguments (*args)
# -------------------------------------------

def total_marks(*marks):
    print("Marks received:", marks)  # collected into tuple
    print("Total:", sum(marks))

total_marks(80, 70, 90)
total_marks(10, 20, 30, 40, 50)

# -------------------------------------------
# Why do we use **kwargs?
# To make flexible functions that accept any named information.
# -------------------------------------------

def show_info(**kwargs):
    for key, value in kwargs.items():
        print(key, ":", value)

show_info(name="Naveen", age=28, city="Delhi", hobby="Cricket")


