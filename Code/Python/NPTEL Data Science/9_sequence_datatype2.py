
import array

# -> STRING INDEXING

str1 = "learning"

print("Index of 'e' :- ",str1.index("e"))
print("Index of 'ning' :- ",str1.index("ning")) 
# print(str1.index('x'))    ==> if this is not found the give error :- ValueError: substring not found
print("Character at 5th index :- ",str1[5])
print("Character at -2nd index :- ",str1[-2])   # -> start from last is -1, second last is -2 ...
# print(str1[11])   --> give error :- IndexError: string index out of range


# -> LIST INDEXING
list1 = [1,2,3.4,5.6,'A',"String"]
print(list1.index(5.6)) # -> this will return the index of this element
print(list1.index('A')) # -> hear we have also other perameter :- index(element,start,end)
                        #   |-> it will search from start to end index not at any other index
print(list1[3]) # -> if index out of range the give :- IndexError: list index out of range
print(list1[-1])


# -> ARRAY INDEXING
arr = array.array('d',(1.1,2.3,4.3,8.2))
print("This is using loops :- ")

for x in arr :
    print(x)
print("This is array index -2 :- ",arr[-2])


# -> TUPLE INDEXING
print("Tuple indexing is same list indexing there is no changes :- ")

# -> SET INDEXING
# -> in the set data-structure we can not apply index()
#   |-> if we use then give error


# -> DICTIONARY INDEXING
dic = dict([(1,'first'),('second',2),(3,3),('four',4)])
print("This is value for key:1 :- ",dic[1])   # -> this will return the value according to the key
# print(dic[2])     # -> this will give error
print("This is a value for key:second :- ",dic['second'])


# -> RANGE INDEXING
range1 = range(1,12,4)
# print(range1.index(0))    -> this value is not in range so this will give error
print("Index of 5 in range1 :- ",range1.index(5))
print("This is element at index 2 :- ",range1[2])
# print(range1[4])  -> this is will give error because of outof range index






"""
->Sequential data means data that is arranged in a specific order, and where the position of each element matters.
📌 Sequential Data Types in Python
Type	        Sequential?
String	        ✔ Yes
List	        ✔ Yes
Tuple	        ✔ Yes
Range	        ✔ Yes
Set	            ❌ No
Dictionary	    ❌ No

-> we can not perform the indexing on the non-sequential data
    |-> in the dictionary we can perfomr the indexing based on the key not based on the index

"""
