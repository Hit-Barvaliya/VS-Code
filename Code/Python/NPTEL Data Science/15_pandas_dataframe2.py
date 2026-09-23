import pandas as pd

data_txt = pd.read_csv(r"C:\Users\Dipal\OneDrive\Desktop\demo2.txt",delimiter='\t')
#   |-> hear delimiter='\t' because out table in demo2.txt is tab-separated
#   |-> we give value to delimiter ' ' / ',' for 'space separated' / 'comma separated' table
print("Give table is :- ")
print(data_txt)

"""
in pandas we have may be different name of data-type
    |-> python : int , pandas : int64
    |-> python : float , pandas : float64 
"""

print("\n\n-> data_txt.dtypes will give the datatype of all the column :- \n",data_txt.dtypes)
print("\n\n -> data_txt.dtypes.value_counts() give all the datatype with count :- \n",data_txt.dtypes.value_counts())


print("\n\n -> this will return some selected column based on the data-type :-\n",data_txt.select_dtypes(['int64','float64']))
#   |-> hear we can also pass the multipal datatype as a list :- select_dtypes(['int64','float64'])

#data_txt.select_dtypes(exclude=[object],include=[object])
print("\n\ndata_txt.select_dtypes(exclude=['int64']) :- \n",data_txt.select_dtypes(exclude=['int64']))
#   |-> Select all columns whose datatype is NOT int64.

print("\n\ndata_txt.select_dtypes(include=['int64']) :- \n",data_txt.select_dtypes(include=['int64']))
# -> Select ONLY the columns whose datatype is int64. Hide all other columns.

print("\n\n information of demo2.txt file :- \n")
"""
it will print these information of fream
• data type of index
• data type of columns
• count of non-null values
• memory usage
"""
data_txt.info() # -> this function will not return any value so we can't call this function with printf statement

import numpy as np

print("\nnp.unique(data_txt['Marks']) :- ",np.unique(data_txt['Marks']))
#   |-> it is used to find the unique element from the column
#   |-> we can not perform an unique() operation on multipal array. it is done only on single array


