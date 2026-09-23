
# -> we can pass the function into another functions as an argument and we can also return that function in return statement

# -----------------------------------------------------
# Original function (we don't want to modify this code)
# -----------------------------------------------------
def div(a, b):
    return a / b


# -----------------------------------------------------
# Decorator function — adds new behavior
# -----------------------------------------------------
def smart_div(func):

    def inner(a, b):
        # new feature: swap if a < b
        if a < b:
            a, b = b, a
        return func(a, b)  # call original div()

    return inner   # return modified function


# -----------------------------------------------------
# Decorate the original function
# -----------------------------------------------------
div = smart_div(div)


# -----------------------------------------------------
# Testing the decorated function
# -----------------------------------------------------
print(div(2, 10))   # numerator < denominator → will be swapped
print(div(20, 4))   # numerator > denominator → normal division
