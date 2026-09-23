from functools import reduce

# ---------------------------------------------------------
# 1️⃣ FILTER EXAMPLES
# ---------------------------------------------------------

numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
print("Original List:", numbers)


# ---- a) Filter using a normal function ----
def is_even(n):
    return n % 2 == 0

even_numbers_func = list(filter(is_even, numbers))
print("\nEven numbers (using normal function):", even_numbers_func)


# ---- b) Filter using lambda function ----
even_numbers_lambda = list(filter(lambda x: x % 2 == 0, numbers))
print("Even numbers (using lambda):", even_numbers_lambda)


# ---------------------------------------------------------
# 2️⃣ MAP EXAMPLE (Double all even numbers)
# ---------------------------------------------------------

doubled_evens = list(map(lambda x: x * 2, even_numbers_lambda))
print("\nDoubled even numbers (using map + lambda):", doubled_evens)


# ---------------------------------------------------------
# 3️⃣ REDUCE EXAMPLE (Add all numbers)
# ---------------------------------------------------------

sum_all = reduce(lambda a, b: a + b, numbers)
print("\nSum of all numbers (using reduce + lambda):", sum_all)


# ---------------------------------------------------------
# 4️⃣ Complete Pipeline (Filter → Map → Reduce)
# ---------------------------------------------------------
# Step 1: Get even numbers
# Step 2: Double them
# Step 3: Add them together

result = reduce(
    lambda a, b: a + b,
    map(
        lambda x: x * 2,
        filter(lambda x: x % 2 == 0, numbers)
    )
)

print("\nPipeline Result (sum of doubled even numbers):", result)

"""
✅ 1. filter() — Simple Definition
filter() is used to pick/select only those items from a list that satisfy a condition.

✅ 2. map() — Simple Definition
map() applies a function to every item in a list and returns a new list with the updated values.

✅ 3. reduce() — Simple Definition
reduce() combines all items in a list into a single value by repeatedly applying a function.

✅ 4. lambda — Simple Definition
lambda is a small, one-line function without a name.

"""

