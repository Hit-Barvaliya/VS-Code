
# ==> this is all about the seaborn library
#   |->  that seaborn library has been built on top of the matplotlib
"""
✅ Matplotlib → Base library
✅ Seaborn → High-level library built on top of Matplotlib

So Seaborn depends on Matplotlib internally, but Matplotlib does not depend on Seaborn.
"""

import pandas as pd # -> to work with datafream

import numpy as np  # -> to work with numerical operations

import matplotlib.pyplot as plt # -> 'matplotlib' to do visualization

import seaborn as sns   # -> 'seaborn' to do visualization


car_info = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx",sheet_name='ToyotaCar')

print(car_info)

#<-------------Scatter graph------------------------>

# sns.set(style='darkgrid')
# # |-> this is by-default added in this function
# sns.regplot(x=car_info['Age'],y=car_info['KM'],marker='*')
# #   |-> by default 'fit_reg=True' pass in the function {which give the line relating x and y} if we remove that line then pass 'fit_reg=False'
# #   |-> marker = '*'  -> it will change the style of point. bydefault it is '•'

# plt.show()


#<-------------LM plot graph--------------->

# sns.lmplot(x='Age',y='KM',data=car_info,fit_reg=False,hue='FuelType',legend=True,palette='Set1')
# plt.show()

#<-------------Histogram graph------------------------>

# sns.histplot(car_info['KM'],kde=False,bins=5)
# # -> kde=True is for pass in the function {which give the line relating x and y} bydefault it is false
# plt.show()


#<-------------Bar Plot graph------------------------>
# -> freaquency distrubution of fuel type of the cars

# sns.countplot(x='FuelType',data=car_info)
# plt.show()


#<-------------Gropued Bar Plot graph------------------------>
# -> Grouped bar plot of fuel type and automatic

# sns.countplot(x='FuelType',data=car_info, hue='Automatic')
# plt.show()
# #   |-> this is the visual representation of the crosstab()


#<--------------Box and Whisker Plot - numerical variable--------------->
# -> Box and whiskers plot a price to visually interpret the five-number summary
 
# sns.boxplot(y=car_info['Price'])
# plt.show()


#<--------------Box and whiskers plot graph--------------->

# • Box and whiskers plot for numerical vs categorical variable
# • Price of the cars for various fuel types

# sns. boxplot(x = car_info['FuelType'], y = car_info[ "Price"])
# plt.show()


#<--------------Grouped box and whiskers plot graph--------------->

# • Grouped box and whiskers plot of Price vs FuelType and Automatic
# sns. boxplot (x = "FuelType", y = car_info[ "Price"],hue = "Automatic", data = car_info)
# plt.show()


#<--------------Box-whiskers plot and Histogram graph--------------->
# |-> this is not understand properly

# # • Let's plot box-whiskers plot and histogram on the same window
# # • Split the plotting window into 2 parts

# f, (ax_box, ax_hist) = plt.subplots(2,sharex=True,gridspec_kw={"height_ratios": (.15, .85)})

# sns.boxplot(x=car_info['Price'], ax=ax_box)
# sns.histplot(x=car_info['Price'], ax=ax_hist, kde=False)

# plt.show()



#<--------------Pairwise plots graph--------------->

# • It is used to plot pairwise relationships in a dataset
# • Creates scatterplots for joint relationships and histograms for univariate distributions
sns. pairplot(car_info, kind="scatter", hue="FuelType") 
plt.show()



