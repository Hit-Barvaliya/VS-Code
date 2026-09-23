import numpy as np

# -> to creat a numpy array first we need to import numpy library

print(np.__version__)

my_list = [1,2,3,4,5,6,7,8]
print("my_list :- ",my_list)

arr = np.array(my_list, dtype = int)    
    # -> data-type is optional. if we not pass that perameter that time it will take automiticaly

print("This is numpy array :- ",arr)

print("type is :- ",type(arr))
print("Length is :- ",len(arr))
print("Number of dimension :- ",arr.ndim)
print("Shape of the array :- ",arr.shape)

# -> we can also reshape the array

arr = arr.reshape(4,2)  # -> rshape(rows,column)
# -> You cannot reshape the array to a size that does NOT match the total elements.
#   |-> we can not write arr.reshape(3,3)
print("\n\nAfter the reshape(4,2) :- ",arr)
print("number of dimension of arr :- ",arr.ndim)
print("Shape of arr :- ",arr.shape)

arr = arr.reshape(2,-1) # -> if we write -1 then that value is automitically calculated by the numpy library
#   |-> hear rows is 2 so the column is must be 4 which is calculated by numpy library and replace with -1

print("\n\nAfter the reshape(2,-1) :- ",arr)
print("number of dimension of arr :- ",arr.ndim)
print("Shape of arr :- ",arr.shape)



my_list2 = [1,2,3,4,5]
my_list3 = [2,3,4,5,6]
my_list4 = [9,8,7,6,5]

mul_array = np.array([my_list2,my_list3,my_list4])

print("mul_array is :- ",mul_array)
print("Shape of mul_array is :- ",mul_array.shape)
print("Reshape to (1,15) :- ",mul_array.reshape(1,15))


#<-----------numpy - Attributes-----------------

print("Shape of mul_array is :- ",mul_array.shape)
mul_array.shape = (5,3)     # -> this is second way to change the shape
print("Shape of mul_array after modify :- ",mul_array.shape)


b = mul_array.reshape(1,15)
print("This is b :- ",b)

r = range(24)   # -> it will make a range from 0 to 23
a = np.array(r)     # -> convert the range into an numpy array
print("hear we store range in array :- ",a)
print("number of dimenstion :- ",a.ndim)

print("Reshap this array in (6,4,1)",a.reshape(6,4,1))

print("Creat a new range in numpy :- ",np.arange(24))   
    # -> hear we directly creat a range in numpy


#<-----------OPERATION ON SET------------------

lst1 = np.array([[1,2],
                 [3,4]])

lst2 = np.array([[5,6],
                 [7,8]])

# -> addition and substraction are calculated for each element 
print("\nlst1 + lst2 :- \n",lst1+lst2)
print("\nnp.add(lst1,lst2) :- \n",np.add(lst1,lst2))

print("\nlst1 - lst2 :- \n",lst1-lst2)
print("\nnp.subtarct(lst1,lst2) :- \n",np.subtract(lst1,lst2))

# -> this multiplication will calculated for each element
print("\nlst1 * lst2 :- \n",lst1*lst2)
print("\nnp.multiply(lst1,lst2) :- \n",np.multiply(lst1,lst2))

# -> this multiplication will calculated like a metrix-multiplication
print("\nlst1.dot(lst2) :- \n ",lst1.dot(lst2))
print("\nnp.dot(lst1,lst2) :- \n",np.dot(lst1,lst2))


print("\nlst1 / lst2 :- \n",lst1/lst2)
print("\nnp.divide(lst1,lst2) :- \n",np.divide(lst1,lst2))

print("This is give lst1 :- \n",lst1)


#<--------numpy.sum() - return sum of all element or sum of all array element of give axis -------
print("\n np.sum(lst1) :- ",np.sum(lst1)) #-> if axis is not given then it give sum of all element
print("\n np.sum(lst1,axis=0) :- ",np.sum(lst1,axis=0)) # -> hear it will give sum of each column
print("\n np.sum(lst1,axis=1) :- ",np.sum(lst1,axis=1)) # -> hear it will give sum of each row



