# => this is all about the 'slice()' and concatenation & multiplication for sequential data


import array


# -> in the silce method we have three perameter slice(start,stop,step)

lst = [10,20,'A',"string",30,'B',"string2"]
print("This is slice(1,6,2) :- ",lst[slice(1,6,2)])
print("This is second method for writting slice() method :- ",lst[1:6:2])

# -> refer 22_string_slice.py ==> for more information
#   |-> in this given file we take example of string but this also work on the list

dic = {1:'first','second':2,3:3,4:'four'}
# print(dic[1:3])   -> in dictionary we can not apply 'slice()' because it has no index


set1 = {1,'A',3,"String",2}
# print(set1[1:3])  -> in set we can not apply 'slice()' because it has no index



arr = array.array('i',[1,2,3,4,5,6,7,8,9])
print("answer of arr[1:8:2] is :- ",arr[1:8:2])
print("answer of arr[1:-2]",arr[1:-2])




range1 = range(1,10,2)
print(range1)
for x in range1 : 
    print(x)

print("This is method for range[1:4] :- ")
for x in range1[1:4] : 
    print(x)


#<--------------SEQUENCE DATA OPERATION :- CONCATENATION------------------>
# -> concatenation is done with :- ',' '+' '+='

# -> concatenation in string

str = "First"
print("Before addition :- "+str)
print("After addition in print() :- ",str+" ","String")
print("This is original string :- ",str)    # -> hear this is a string
str = str+' ',"String"      # -> wheneve we put ',' it will make a tuple
                            # -> hear we make a tuple not a string
print("After addition in original :- ",str) # -> hear this is become a tuple

# <----------- str is key-word in python so avoid to use this ------------------->


# -> concatenation in List
print("This is original list :- ",lst)
lst = lst + ['py','py2']    # -> add as a element in the list
print("After addition of list :- ",lst)


# -> concatenation of array 
print("This is an original array :- ",arr)
# arr = arr + [10,20]   => this will throw an error we can't concatenation of array with list
arr = arr + array.array('i',[88,99])    # -> add as a element in the list
print("After addition :- ",arr)


# -> concatenation of tuple
tup = (1,2,3,'py')
print("This is original tuple :- ",tup)
tup += ('Ab','Cd')    # -> add as a element in the list
print("after addition :- ",tup)

# -> concatenation of set
print("This is original set :- ",set1)  
set2 = set1,242     # -> hear we make a tuple of set1 & 242
# -> we can't do concatenation of two set at this way
# -> for the concatenation we take union of two set 
print("This is after addition of set :- ",set2)


#<--------------SEQUENCE DATA OPERATION :- MULTIPLICATION------------------>

# -> for string
str2 = "String"
print("str2 :- ",str2)
print("str2 * 3 :- ",str2*3)

# -> for list
lst2 = [1,2,'a','sam']
print("lst2 :- ",lst2)
print("lst * 2 :- ",lst2*2)

print("lst2[1] :- ",lst2)
lst2[1] = lst2[1]*2
print("lst2[1]*=2 :- ",lst2)
print("lst2[3]*3 :- ",lst2[3]*3)


# -> for tuple
print("This is original tuple :- ",tup)
print("tup[2:5]*2 :- ",tup[2:5]*2)  # => this is not afect on original

tup = tup[2:4]*3
print("tup = tup[2:4]*3 :- ",tup)


# -> for array
arr2 = array.array('i',[1,2,3,4,5])
print("this is original array :- ",arr2)
print("arr2 * 2 :- ",arr2*2)

# -> for range it is not supproted
# print("This is range :- ",range1*2)   => throw an error




