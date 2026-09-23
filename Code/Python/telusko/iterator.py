
nums = [7,8,9,5]

print(nums[2],"\n")  # access by index

for i in nums :
    print(i)

print()

# access by the iterator

it1 = iter(nums)

print(it1.__next__())
print(it1.__next__())
print(it1.__next__())
print(it1.__next__())
# print(it1.__next__()) => this is will StopIteration Exception

it2 = iter(nums)
print()
print(next(it2))
print(next(it2))
print(next(it2))
print(next(it2))
# print(next(it2))  => this will give StopIteration Exception


# From hear we creat our own iterator

class TopTen:

    def __init__ (self):
        self.num = 1
    
    def __iter__(self):
        return self
    
    def __next__ (self):
        if (self.num <= 10):
            val = self.num
            self.num += 1

            return val
        else :
            raise StopIteration    

val = TopTen()
print("\nThis is own iterator :- ")
print(val.__next__())
print(next(val))

print("Loop start from hear :: ")   
for i in val:
    print(i)






