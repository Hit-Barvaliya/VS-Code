
import array

## ==> String are immutable in python

str = "String"
print(str)

#-> this is list
# -> list are mutable in python
list1 = [1,2,3,4,5]     # -> list are access by it's index
print("This is first List :- ",list1,"\nThis is data type of that :- ",type(list1))
list2 = [1,2,3.4,5.6,'A',"String"]
print("This is second List :- ",list2,"\nThis is data type of that :- ",type(list2))


# -> this is array
arr = array.array('i',[1,2,3])  # -> hear 'i' is for integer, we can use different character for different data-type (refer photo)
print("This is first array :- ",arr)
print("This is with loop :- ")
for x in arr: print(x)


# -> this is tuple
#  method 1
tuple1 = (1,2,3,"str")  # -> tuple is same as list but there is only one change hear => we can't modify tuple
print("This is tuple1",tuple1," And data-type is :- ",type(tuple1))
#  method 2
tuple2 = 1,2,"Str2"     # -> we can remove bracket, this is also valid syntax
print("This is tuple2",tuple2," And data-type is :- ",type(tuple2))
# -> tuple will not have append method



# -> this is dictionary
#   |-> this is will not store the duplicate key so after inserting the duplicate key it will update the previous value
#  method 1
dict1 = {1:'first', 'second':2, 3:'three', 'four':4, 3:'hello'}
print("This is first dictionary :- ",dict1,"This is type of dict1 :- ",type(dict1))
#  method 2
dict2 = dict([(1,'first'),(4,'four'),('three',3)])
print("This is second dictionary :- ",dict2,"This is type of dict2 :- ",type(dict2))
#  method 3
dict3 = dict(first=1,foure=4,three=3)   #-> in this method we can't put number as key
print("This is third dictionary :- ",dict3,"This is type of dict3 :- ",type(dict3))


# -> this is set
#   |-> this is will not store duplicate element
#   |-> this will store element in random order
set1 = {'example',24,87.25,'data',24,'data'}
print("This is set1 :- ",set1,"This is type of set1 :- ",type(set1))
set2 = set((12,23)) #-> in the perameter we can pass list or dictionary or array
# -> hear we can pass a tuple of tuple :- ((11,22),(12,34))
# -> we can pass a list of tuple :- [(11,22),(12,34)]
# -> we can't pass list of list :- [[11,22],[12,34]]

print("This is set2 :- ",set2,"This is type of set2 :- ",type(set2))
# -> we can not creat a set of set
print(set('example'))
print(set({1:'firsts',2:'secons','third':3}))


# -> this is range in-built function
rangeVariable = range(1,14,3)
"""
✅ Meaning of parameters

range(start, stop, step)
start = 1 → starting number
stop = 14 → stops before 14 (14 is not included)
step = 3 → jump by 3 each time
"""
print("With print statement range is :- ",rangeVariable,"Type of range :- ",type(rangeVariable))

for x in rangeVariable : 
    print(x)


"""
Here is the **perfect comparison table** of **List, Set, String, Tuple, Range, Dictionary** with all important properties — very useful for exams/interviews.

---

# 📘 **Properties Comparison Table**

| Property                             | List                   | Set                     | String              | Tuple         | Range                              | Dictionary                        |
| ------------------------------------ | ---------------------- | ----------------------- | ------------------- | ------------- | ---------------------------------- | --------------------------------- |
| **Ordered**                          | ✔ Yes                  | ❌ No                    | ✔ Yes               | ✔ Yes         | ✔ Yes                              | ✔ Insertion-ordered (Python 3.7+) |
| **Indexed**                          | ✔ Yes                  | ❌ No                    | ✔ Yes               | ✔ Yes         | ✔ Yes                              | ❌ No (keys act like indexes)      |
| **Mutable**                          | ✔ Yes                  | ✔ Yes                   | ❌ No                | ❌ No          | ❌ No                               | ✔ Yes                             |
| **Allows Duplicates**                | ✔ Yes                  | ❌ No                    | ✔ Yes               | ✔ Yes         | ✔ Yes                              | ✔ Keys ❌ / Values ✔               |
| **Type of Elements**                 | Any                    | Only immutable          | Characters          | Any immutable | Integers only                      | Key–Value pairs                   |
| **Supports Slicing**                 | ✔ Yes                  | ❌ No                    | ✔ Yes               | ✔ Yes         | ✔ Yes                              | ❌ No                              |
| **Heterogeneous Data**               | ✔ Yes                  | ✔ Yes                   | ❌ (characters only) | ✔ Yes         | ❌ No                               | ✔ Yes                             |
| **Hashable / Used as Key**           | ❌ No                   | ❌ No                    | ✔ Yes               | ✔ Yes         | ❌ No                               | —                                 |
| **Supports index()/count()**         | ✔ Yes                  | ❌ No                    | ✔ Yes               | ✔ Yes         | ❌ index(), ✔ count via list(range) | ❌ No                              |
| **Adding Elements**                  | `append()`, `insert()` | `add()`                 | ❌ Not allowed       | ❌ Not allowed | ❌ Not allowed                      | Assign key or `update()`          |
| **Deleting Elements**                | `remove()`, `pop()`    | `remove()`, `discard()` | ❌ No                | ❌ No          | ❌ No                               | `del`, `pop()`                    |
| **Duplicates Removed Automatically** | ❌ No                   | ✔ Yes                   | ❌ No                | ❌ No          | ❌ No                               | Keys only                         |
| **Ordered Since**                    | Always                 | Never                   | Always              | Always        | Always                             | Python 3.7+                       |

---

# ⭐ **Quick Summary (One Line Each)**

### **List**

* Ordered, indexed, mutable, allows duplicates.

### **Set**

* Unordered, no indexing, unique elements, mutable but elements must be immutable.

### **String**

* Ordered, indexed, immutable, sequence of characters.

### **Tuple**

* Ordered, indexed, immutable, allows duplicates.

### **Range**

* Ordered sequence of numbers, immutable, used mostly for loops.

### **Dictionary**

* Key-value pairs, ordered (Python 3.7+), keys must be unique, values can repeat.

---

If you want, I can also give you a **chart**, **practice MCQs**, or a **PDF-style summary** of these differences.

"""

