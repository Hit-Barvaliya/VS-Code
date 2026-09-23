# -> this is all about the method of string

str1 = "learning if fun !"

print("This is original str1ing :- ",str1)
print("str1.capitalize() :- ",str1.capitalize())
    # -> return the string with it's letter is capital and rest of letter are lower case

print("str1.title() :- ",str1.title())
    # -> to capital the first letter of each word

print("str1.swapcase() :- ",str1.swapcase())
    # -> swap the case of each letter

print("str1.find('a') :- ",str1.find('a'))

print("str1.count('n') :- ",str1.count('n'))

print("str1.replace('fun','joyfull') :- ",str1.replace('fun','joyfull'))
    # -> replcae all the occurance

print("str1.isalnum() :- ",str1.isalnum())
    # -> it return true if it contains only A-Za-z0-9
    # -> return false if contain special character or empty str1ing

name1 = 'GITAA'
name2 = 'PVT'
name3 = 'LTD'

name = '{} {}. {}.'.format(name1,name2,name3)
print("This is name with formate :- ",name,"\n\n\n.........................................")

# print(dir(name))    # -> it will return all the method's name of strnig

# print(help(str))    # -> it will give the all method's documentation of string

# print(help(str.find))   # -> it will give the documentation of 'find()' method
#                           -> at this way we can find the documentation of specific method
print("Hello")

str1 = "learning if fun !"

lst = [1,2,'a','sam',2]

import array
arr = array.array('i',[1,2,3,4])

tup = (1,2,3,4,3,'py')

dic = {1:'first', 'second':2, 3:3, 'four':4}

set1 = {'example',24,87.5,'data',24,'data'}

key = (1,'second',3,'four')

range1 = range(1,12,4)


#<-------------len(object) - return the number of element in object----------------->

print("No. of elements in the object:")
print("string = {}, list = {}, array = {}, tuple = {}, dictionary = {}, set = {}, range = {},"
      .format(len(str1),len(lst),len(arr),len(tup),len(dic),len(set1),len(range1)))

#---------------------------------------------
print("this is lst :- ",lst)
lst.reverse()   # -> this will reverse the original string and not return the new string 
                #   |-> it will applicable in list, array

print("after lst.reverse() :- ",lst)

#---------------------------------------------
lst.clear()     # -> it will remove all the element from the sequence data-type
                #   |-> it will applicable in list, dictionary, set
print("After lst.clear() :- ",lst)

#---------------------------------------------
print("This is original array :- ",arr)
arr.append(123)     # -> it will add an element in the array
                #   |-> it will applicable in array, list, set
print("After append(123) :- ",arr)

lst = [1,2,'a','sam',2]
print("This is list :- ",lst)
lst.append([11,22,33])  # -> it will add list
print("After lst.append([11,22,33]) :- ",lst)

set1.add('newnew')  # -> set have different name for append
print("After set1.add('newnew) :- ",set1)

#---------------------------------------------

print("This is original set :- ",set1)
set1.update([11,22,33])     # -> hear we can insert multipal element at a time
                            #   |-> hear we can pass list,set,tuple,range,string,dictionary
print("after add the list new set1 is :- ",set1)
set1.update({99:'STRING'})  # -> hear it will insert the key only in the set
print("after add the dictionary's element new set1 is :- ",set1)


#<---------------------DICTIONARY METHODS---------------------

print("This is original dictionary :- ",dic)
dic[1] = 'newfirst' # -> this will update the value of key if key is not exist then it will make a new key
print("After update the key(1) :- ",dic)
dic['five'] = 5
print("After insert new key(five) :- ",dic)

print("Return all the keys of set as list :- ",list(dic))   # -> it will return list of all the keys of dictionary

print("number of element in dictionary :- ",len(dic)) 

print("Access the value of given key :- ",dic.get('four')) # -> it will return the value of given key

print("List of all the key of given dictinary :- ",dic.keys())

print("Return the list of (Key,Value) tuple pair :- ",dic.items())


#<----------insert() - insert the element at specific index of the object-------------
#   |->supported datatype is array, list

print("Given array is :- ",arr)
arr.insert(1,99)    
print("insert 99 at index 1 :- ",arr)

print("Give list is :- ",lst)
lst.insert(1,2323)  # -> if index is out-of range then insert at last in both lst & arr
print("Insert 2323 at index 1 :- ",lst)


#<----------pop() - removes an element-------------
#   |->supported datatype is array, list, set, dictionary
#   |-> it is based on the index

print("Given array is :- ",arr)
arr.pop(1)   # -> delet element at given index, if value will not pass then by-default value is -1
print("delet at index 1 :- ",arr)
deletedElement = arr.pop()  # -> it is also return the deleted element
print("By default delet given index is -1 :- ",arr)
print("Deleted element is :- ",deletedElement)

# -> for set & dictionary we pass the keys into the perameter for delet element
print("Given dictionary is :- ",dic)
dic.pop(3)
print("Dictionary after delet key(3) :- ",dic)


#<----------remove() - removes an element-------------
#   |->supported datatype is array, list, set, dictionary
#   |-> it is based on the value

print("Give set is :- ",set1)
set1.remove(99)
print("new set is :- ",set1)
# set1.remove(999)  => if the key is not present in the set then it will give "'KeyError'"

set1.discard(999)   # => if the key is not present in the set then it will not give error


#<----------del obj_name - to delet an entire object-------------
#   |-> del is key word of python

del dic
# print(dic)   => ths will give error because we delet that obeject

# -> we can also delet some spefice element or number of element

print("Give List is :- ",lst)
del lst[2]
print("After delet index 2 :- ",lst)
del lst[2:4]
print("after delet lst[2:4] :- ",lst)
# del lst[:]    => this is to delet all the element


#<-----extends() - add a specified list(list, set, tuple, ect.) at the end of current list -------

print("Give array is :- ",arr)
arr.extend([4,5,3,5])   # add a tuple to the end of array
print("Updated array is :- ",arr)
# arr.extend(('sam'))   => it will give error because our array is integer type

print("Give array is :- ",arr)
arr.fromlist([33,44])   # -> add a value from a list to an array
print("New updates array :- ",arr)
"""
| Method               | Works With   | Why It Exists                      | Modern Use  |
| -------------------- | ------------ | ---------------------------------- | ----------- |
| **fromlist(list)**   | Only list    | Old method (before extend existed) | Rare        |
| **extend(iterable)** | Any iterable | Flexible and newer                 | Recommended |

"""
print(arr.tolist())     # -> convert the array to a list


#<-------------------SET OPERATION----------------

setA = {'example',24,87.5,'data',24,'data'}
setB = {24,87.5,'newexample'}

print("This is set A :- ",setA)
print("This is set B :- ",setB)

print("setA | setB :- ",setA|setB)
print("setA & setB :- ",setA&setB)



"""
reverse(),clear(),apppend(),add(),update(),insert()
pop(),remove(),discard,()
extends(),fromlist()
tolist()
"""

#------------------------------------------------------------------------------------------------
#----------------this is a summary of all the methods which are shown in the code----------------
    


"""
Here is a **clean, simple, exam-friendly summary of ALL methods** you used — categorized and explained clearly.

---

# ✅ **STRING METHODS SUMMARY**

### **1. capitalize()**

```python
str1.capitalize()
```

👉 First character uppercase, rest lowercase.
**"learning is fun" → "Learning is fun"**

---

### **2. title()**

```python
str1.title()
```

👉 First letter of each word becomes capital.
**"learning is fun" → "Learning Is Fun"**

---

### **3. swapcase()**

```python
str1.swapcase()
```

👉 Converts uppercase → lowercase & lowercase → uppercase.

---

### **4. find()**

```python
str1.find('a')
```

👉 Returns **index** of first occurrence.
👉 Returns **-1 if not found**.

---

### **5. count()**

```python
str1.count('n')
```

👉 Counts occurrences of a character or substring.

---

### **6. replace()**

```python
str1.replace('fun','joyfull')
```

👉 Replaces **all** occurrences of old substring.

---

### **7. isalnum()**

```python
str1.isalnum()
```

👉 True if contains **only A–Z, a–z, 0–9**
👉 False if space or special characters exist.

---

---

# ✅ **GENERAL FUNCTION**

### **len(object)**

Returns number of elements in:

* string
* list
* array
* tuple
* dictionary (counts keys)
* set
* range

---

---

# ✅ **LIST METHODS**

### **1. reverse()**

```python
lst.reverse()
```

👉 Reverses list **in-place** (no new list returned).

---

### **2. clear()**

```python
lst.clear()
```

👉 Removes **all elements** (works for list, dict, set).

---

### **3. append()**

```python
lst.append(10)
```

👉 Adds a **single element** at the end.
👉 If you append a list → list inside list.

---

### **4. insert(index, value)**

```python
lst.insert(1, 99)
```

👉 Inserts at specific index.
👉 If index > length → appends at end.

---

### **5. pop()**

```python
lst.pop(1)
lst.pop()
```

👉 Removes element by **index**.
👉 Default index = `-1` (last element).
👉 Returns removed element.

---

### **6. remove(value)**

```python
lst.remove(100)
```

👉 Removes by **value** (first match).
👉 Error if value not found.

---

### **7. del keyword**

```python
del lst[2]
del lst[2:5]
del lst
```

👉 Deletes slice, item, or entire object.

---

### **8. extend(iterable)**

```python
lst.extend([1,2,3])
```

👉 Adds multiple elements from **list, tuple, set**, etc.

---

---

# ✅ **ARRAY METHODS (array module)**

### **1. append()**

```python
arr.append(10)
```

👉 Add single element (must match type).

---

### **2. insert()**

```python
arr.insert(1, 99)
```

👉 Insert at index.

---

### **3. pop()**

Same as list.

---

### **4. fromlist()**

```python
arr.fromlist([33,44])
```

👉 Add all values from a list to array.

---

### **5. tolist()**

```python
arr.tolist()
```

👉 Convert array → Python list.

---

---

# ✅ **SET METHODS**

### **1. add()**

```python
set1.add(10)
```

👉 Adds single element.

---

### **2. update(iterable)**

```python
set1.update([1,2,3])
```

👉 Adds multiple elements from list, set, tuple, dict, range, string.

👉 For dictionary → **only keys** are added.

---

### **3. remove()**

```python
set1.remove(10)
```

👉 Removes value.
👉 Error if value not found.

---

### **4. discard()**

```python
set1.discard(10)
```

👉 Removes value.
👉 **NO error** if value doesn’t exist.

---

### **5. Set operations**

```python
setA | setB    # union
setA & setB    # intersection
setA - setB    # difference
setA ^ setB    # symmetric difference
```

---

---

# ✅ **DICTIONARY METHODS**

### **1. Update or Add Key**

```python
dic[key] = value
```

👉 If key exists → updates
👉 If key doesn’t exist → new key added.

---

### **2. get()**

```python
dic.get('key')
```

👉 Returns value.
👉 Returns `None` if key doesn't exist (NO error).

---

### **3. keys()**

```python
dic.keys()
```

👉 Returns all keys.

---

### **4. items()**

```python
dic.items()
```

👉 Returns list of (key, value) pairs.

---

### **5. pop(key)**

```python
dic.pop('name')
```

👉 Removes **key-value** pair.
👉 Error if key doesn’t exist.

---

---

# ⭐ Final Clean Summary Table

| Method       | Type            | Meaning                             |
| ------------ | --------------- | ----------------------------------- |
| capitalize() | string          | First letter uppercase              |
| title()      | string          | First letter of each word uppercase |
| swapcase()   | string          | Upper ↔ lower case                  |
| find()       | string          | Index of substring                  |
| count()      | string          | Count of substring                  |
| replace()    | string          | Replace substring                   |
| isalnum()    | string          | Only letters + numbers              |
| reverse()    | list            | Reverse in-place                    |
| clear()      | list/set/dict   | Remove all elements                 |
| append()     | list/array      | Add one element                     |
| add()        | set             | Add one element                     |
| update()     | set             | Add multiple elements               |
| insert()     | list/array      | Insert at index                     |
| pop()        | list/array/dict | Remove by index or key              |
| remove()     | list/set        | Remove by value                     |
| del          | all             | Delete element/object               |
| extend()     | list/array      | Add many elements                   |
| fromlist()   | array           | Add list to array                   |
| tolist()     | array           | Convert array to list               |
| keys()       | dict            | List of keys                        |
| items()      | dict            | List of (key,value)                 |

---

If you want, I can turn this into a **PDF Notes** file so you can print or revise easily.

"""

