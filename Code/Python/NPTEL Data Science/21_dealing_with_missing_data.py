
# -> hear how can we manage a empty cell method to fill that empty cell

import numpy as np
import pandas as pd

car_info = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx")

# -> hear we make a copy of car_info
car_info_copy1 = car_info.copy()
car_info_copy2 = car_info.copy()
car_info_copy3 = car_info.copy()

print("This is the main table :- \n",car_info)

"""
-> in pandas datafream missing element is represented as NaN
-> we have two function to check element is missing or not :- isnull(), isna() which are return a boolean value True for NaN values
"""

# -> if any row have all values are missing or most of the values are missing then we remove that row from the observation it is more helpfull instade we refill all that missing element

print("\nList of all the missing element from the whole table :- \n",car_info.isnull().sum())

# -> with second method :- 
# print("\nList of all the missing element from the whole table :- \n",car_info.isna().sum())


missing = car_info[car_info.isnull().any(axis=1)]
# -> this will give all the rows which have minimum 1 missing element
print("\nall rows which have a missing values :- \n",missing)

"""
.any() returns:

True → if at least one value in the selected axis is True
False → if none of the values are True

🔍 Example 1: Using on a list
x = [False, False, True]
print(any(x))

Output:
True
"""

# -> we have two approch to fill the missing element
#   |-> 1) Fill the missing values by mean/median, in case of numaric variable
#   |-> 2) Fill the missing values with the class maximum count, in case of categorical variable

print("\n\nThis is describe() function :- \n",car_info.describe())
#   |-> this function will give only the information about the numeric column not any other

print("\n\nafter fill the missing element in SpealWidthCm column :- \n")
# -> hear we work with car_info_copy because car_info will change at missing variable
car_info_copy1['SpealWidthCm'] = car_info_copy1['SpealWidthCm'].fillna(car_info_copy1['SpealWidthCm'].mean(),inplace=False)
#   |-> hear we fill the missing element with mean value of that column

print(car_info_copy1)

# -> at this way we fill all the column
#   |-> when we fill the value at the missing element that time if the diffarence between the mean-value and median-value(50%-value) is very large {Mean ≫ Median => Use median} the use median


# -> hear we fill all the missing element of SpealLengthCm,PetalLengthCm
car_info_copy1['SpealLengthCm'] = car_info_copy1['SpealLengthCm'].fillna(car_info_copy1['SpealLengthCm'].mean(),inplace=False)
car_info_copy1['PetalLengthCm'] = car_info_copy1['PetalLengthCm'].fillna(car_info_copy1['PetalLengthCm'].mean(),inplace=False)

print("\n\nafter fill missing element in first tree column :- \n",car_info_copy1.isnull().sum())

# -> from hear we learn about how to fill the missing element in the categorical variable
#   |-> in this method we count the frequency of all that values of that column and find that element which has highest frequecy and put that element at all the all the missing element

# -> first we make that column categorical data-type
car_info_copy1['Species'] = car_info_copy1['Species'].astype('category')

print("\n\nAfter change the datatype of the Species column :- ",car_info_copy1['Species'].dtype)

print("\n\n frequency of Species column :- ")
# print(pd.crosstab(index=car_info_copy1['Species'],columns='frequency',dropna=False))
# print(car_info_copy1['Species'].value_counts())     # -> 2 method to count the frequency
print(car_info_copy1['Species'].value_counts().index[0]) 

#<---------------------------------this is for catogary variable--------------------------------->

# ==> from hear we fill the missing element with most frequently element of that column
car_info_copy1['Species'] = car_info_copy1['Species'].fillna(car_info_copy1['Species'].value_counts().index[0],inplace=False)
print("\n\nAfter fill the last column of the table :- \n",car_info_copy1)

# ==> this is second method to fill te misssing element in for category data-type column
#   |-> hear we use second copy of the object

print("\n\nThis is second copy the table :- \n",car_info_copy2)

# -> first we need to change the datatype of the last column to catagory
car_info_copy2['Species'] = car_info_copy2['Species'].astype('category')

car_info_copy2['Species'] = car_info_copy2['Species'].fillna(car_info_copy2['Species'].mode()[0],inplace=False)
print("\n\nAfter fill the missing element of that last column :- \n",car_info_copy2)

"""
If a column has two top values with equal frequency,
.mode() returns both.

Example:
Values → [A, B, A, B]

.mode() → A, B
.value_counts().index[0] → randomly picks the first in alphabetical order
(= not always accurate)
"""

# -> hear we fill all the missing element in all the column at a single time

car_info_copy3 = car_info_copy3.apply(lambda x : x.fillna(x.mean()) if x.dtype=='float' else x.fillna(x.value_counts().index[0]))

print("\n\nAfter fill all the values :- \n",car_info_copy3)

"""
The .loc[] method in pandas is used to select rows and columns by LABEL (not by number).

| Method      | Selects by   | Example                         |
| ----------- | ------------ | ------------------------------- |
| **.loc[]**  | Label        | `df.loc[1:5]`                   |
| **.iloc[]** | Index number | `df.iloc[1:5]` (5 not included) |

"""

print("\n------------------------------------------------\n")



