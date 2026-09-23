import pandas as pd

data_excel = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx")

print("Data from the book1.xlsx :- \n",data_excel)

print("\n\nget index(row-label) of given data frame :- ",data_excel.index)
print("\nColumn labels from the data frame :- \n",data_excel.columns)
print("\ntotal number of element in the file :- ",data_excel.size)
print("\ngive the dimension of the give file :- ",data_excel.shape)
#   |-> give shape in rows*column
print("\nGive the memory use of each column in bytes :- \n",data_excel.memory_usage())
print("\nnumber of dimension is :- ",data_excel.ndim)


#<-------------read the some specific rows from the data------------------------

# -> read the rows from start
print("\nread the first 3 rows from the file :- \n",data_excel.head(3))
#   |-> by-default it will pass 5 in the argument

# -> read the rows from the end
print("\n read the last 3 rows from the file :- \n",data_excel.tail(3))
#   |-> by-default it will pass 5 in the argument


#<-------------read the some specific cell from the data------------------------

print("\nthe data of 4th-row and SpealWidthCm-column :- ",data_excel.at[3,'SpealWidthCm'])
#   |-> hear index of rows start from 0 
#       |-> but if we pass index_col=0 then it will return value of 3rd row instade of 4th row because that time index start from 1
#   |-> in column we pass the name of that column

print("\nthe data of 4th-row and 4th-column :- ",data_excel.iat[3,3])
#   |-> hear index of rows & column start from 0
#   |-> in row and column  we pass index



#<-------------read the some specific column from the data------------------------

print("\nthis is SpealWidthCm :- \n",data_excel.loc[:,'SpealWidthCm'])
#   |-> we can give value to slice() method to get some column
#   |-> we can also get mulitpal column at a time 

print("\nthis is SpealWidthCm & SpealLengthCm:- \n",data_excel.loc[:,['SpealWidthCm','SpealLengthCm']])


