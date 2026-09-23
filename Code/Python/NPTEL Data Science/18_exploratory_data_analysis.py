import pandas as pd

toyota_car = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx",sheet_name='ToyotaCar')

print("This is my original table ;- \n",toyota_car)

car_info_copy = toyota_car.copy()
"""
This creates a new, independent DataFrame object in memory.
So:
✔ car_info_copy is a new object
✔ It has its own memory
✔ Changes in car_info_copy do NOT affect toyota_car
✔ Changes in toyota_car do NOT affect car_info_copy
"""

print("\n\nThis is the frequency table of Age column :- ")
print(pd.crosstab(index=car_info_copy['Age'],columns='count',dropna=True))
"""
| Parameter | Value                  | Work / Effect                                             
| --------- | ---------------------- | ----------------------------------------------------------
| `index`   | `car_info_copy['Age']` | Makes each unique Age a row.                              
| `columns` | `'count'`              | Creates a single column named 'count' to hold frequencies.
| `dropna`  | `True`                 | Ignores missing Age values (NaNs).                        

 ==> what is the role of dropna=True :- 

✔ What dropna=True does:

If car_info_copy['Age'] contains any missing values (NaN), then:

Those NaN rows will NOT appear in the crosstab.

Pandas will exclude them from counting.

❌ If you use dropna=False:

Then pandas will include a separate row for NaN, like this:

Age   count
20      3
25      5
NaN     2
With dropna=True, this row will not be included.

"""

# -> To look at the frequency distribution of gearbox types with respect to different fuel types of the cars
print("\nThis is the frequency table of Gear-Box based on FuelType :- ")
# -> 0 for menual gear & 1 for automatic gear
print(pd.crosstab(index=(car_info_copy['Automatic']),columns=(car_info_copy['FuelType']),dropna=True))


# -> two way table() - Joint probability
#   |-> Join probability is the likelihood of two independent events happening at the same time
print("\nThis is join probability :- ")
print(pd.crosstab(index=(car_info_copy['Automatic']),columns=(car_info_copy['FuelType']),normalize=True,dropna=True))
#   |-> it will give the total probability of that event occur in respect of all other event


# -> two way table() - marginal probability
#   |-> Marginal Probability is the probability of the occurance of the single event
print("\nThis is marginal probability :- ")
print(pd.crosstab(index=(car_info_copy['Automatic']),columns=(car_info_copy['FuelType']),margins=True,normalize=True,dropna=True))
#   |-> hear we get the sum of all the probability baseed on the all columns and rows


# -> Two-way table - conditional probability
#   |-> Conditional probability is the probability of an event (A), given that another event (B) has already occurred
#   |-> Given the type of gear box, probability of different fuel type
print("\nThis is probibality when we give the second event as gear type is selected :- ")
print(pd.crosstab(index=(car_info_copy['Automatic']),columns=(car_info_copy['FuelType']),margins=True, dropna=True, normalize='index'))
"""
What the last row “All” means :- 

The last row is the overall probability of each FuelType, ignoring the Gearbox type.
Formula :- P(FuelType) = (Total count of that FuelType)/(Total number of cars)

Let's compute step by step:
CNG → 6 / 16 = 0.375
Diesel → 6 / 16 = 0.375
Petrol → 4 / 16 = 0.25
"""


# -> Two-way table - conditional probability pandas. crosstab()
#   |-> Conditional probability is the probability of an event (A), given that another event (B) has already occurred
print("\nThis is probibality when we give the second event as Fuel type is selected :- ")
print(pd.crosstab(index=(car_info_copy['Automatic']),columns=(car_info_copy['FuelType']),margins=True, dropna=True, normalize='columns'))



print("\nHear we are making the tabel for the correlation between two columns :- ")
numerical_data = car_info_copy.select_dtypes(exclude=['object'])

print(numerical_data.corr(method='pearson'))
#   |-> this argument is not required because this is default argument
#   |-> {this is extra : other example}'spearman' → Spearman rank correlation (non-parametric, monotonic relationship)
#   |-> show photo for more understanding

"""
Pearson correlation measures the linear relationship between two numeric columns.

It tells you:

How strongly two variables are related

Whether they increase/decrease together

Pearson correlation value is always between -1 to +1.

📌 Meaning of values:

+1 → perfect positive correlation

** 0** → no correlation

-1 → perfect negative correlation
"""



