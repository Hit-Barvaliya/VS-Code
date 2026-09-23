
# -> we have multipal library for to make a graph which are shown in photo
#   |-> hear we learn about the matplotlib, seaborn library

# ==> this is all about the matplotlib library

import numpy as np
import pandas as pd

import matplotlib.pyplot as plt

car_info = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx",sheet_name='ToyotaCar')

print("This is my original table ;- \n",car_info)

print("\nSize of original table :- ",car_info.size)

car_info.dropna(axis=0,inplace=True)
"""
dropna() removes rows or columns that contain NaN values.
axis=0 → Remove rows
axis=1 → Remove columns

✅ 2. inplace=True → Modify the original dataframe
inplace=True → Changes happen directly in car_info (no new object returned)
inplace=False (default) → Returns a new DataFrame but keeps original unchanged

Example :- 
If you wrote:
car_info.dropna(axis=0, inplace=False)

Then you must assign it, or nothing happens:
car_info = car_info.dropna(axis=0)

"""
print("\nSize of table after remove the row which anyone cell is empty :- ",car_info.size)

print("\n<---------------This is scatter graph--------------------->\n")

# plt.scatter(car_info['Index'],car_info['CC'],c='red')
# #   |-> pass the argument for (x-axis, y-axis, color_of_dots)
# plt.title('Scatter plot of Price vs Age of the car')
# plt.xlabel('Index')
# plt.ylabel('CC')
# plt.show()

print("\n<---------------This is Histogram graph--------------------->\n")

plt.hist(car_info['KM'])
# -> we can also add other paremeter in this function

plt.hist(car_info['KM'],
         color='green',
         edgecolor='red')
#   |-> hear we can also pass the bins=5 :- for specific number of columns
plt.title('Histogram of KiloMeter')
plt.xlabel('KiloMeter')
plt.ylabel('Frequency')
plt.show()

print("\n<---------------This is Bar Plot graph--------------------->\n")

count = [979,120,12]
fueltype = ('Petrol','disel','CNG')
index = np.arange(len(fueltype))

plt.bar(index,count,color=['red','blue','cyan'])
plt.title("Bar plot of a fuel type")
plt.xlabel('Fuel Type')
plt.ylabel('Frequency')
plt.xticks(index,fueltype,rotation=90)
plt.show()
#   |-> hear we can also use value_counts() {may be}

