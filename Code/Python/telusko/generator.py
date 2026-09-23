
# generator will give us iterator

def topten() :
    yield 3
    yield 7
    yield 9
    yield 1
    yield 5


it1 = topten()
print("This is first iterator..")
print(next(it1))
print(it1.__next__())

for i in it1 :
    print(i)


def topten2() :

    n = 1

    while n<=10 :
        num = n * n
        yield num
        n += 1


it2 = topten2()
print("This is second iterator..")
for i in it2:
    print(i)

"""
⭐ Why use Generator instead of Iterator? (Main Reasons)
1️⃣ Less Code → More Work

Generators use yield, so Python automatically creates:

__iter__()

__next__()

StopIteration handling

So you write 3–4 lines instead of 20 lines.

2️⃣ Memory Efficient (Main Reason!)

Iterators or lists store all values in memory.

But generators produce one value at a time, so memory usage is very low.

✔ Perfect for large data
✔ Useful in data science, AI, log processing, big files

Example:

g = (x*x for x in range(1000000000))


This generator takes almost zero memory.

3️⃣ Faster execution

Because generator values are created on-demand, not stored.

4️⃣ Infinite sequences are possible

Generator can produce values forever:

def infinite():
    num = 1
    while True:
        yield num
        num += 1


You cannot do this with normal lists or iterators easily.

5️⃣ Clean, easy to read

Generators are simply more readable and more “Pythonic”.
"""





