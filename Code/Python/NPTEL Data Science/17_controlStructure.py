import pandas as pd
# -> this is all about may be the loop,if-else,function

car_info = pd.read_excel(r"C:\Users\Dipal\OneDrive\Desktop\Book1.xlsx",index_col=0,sheet_name='Sheet1')

print(car_info)

car_info.insert(3,"PriceClass",'')
# -> Explanation:
#       2 → Insert at position index 2
#       "PriceClass" → Name of new column
#       '' → Initial value of each row is an empty string

print("-------------------After insert new column-----------------------------")
print(car_info)

print("--------------After insert value in new column-------------------------")


# for i in range(1,len(car_info)+1,1):
#     if(car_info['Price'][i] <= 1000):
#         car_info['PriceClass'][i] = "Low"
#     elif(car_info['Price'][i] > 3000):
#         car_info['PriceClass'][i] = "High"
#     else:
#         car_info['PriceClass'][i] = "Medium"

"""
This is loop will give warning so we do with diffarent method :- 
while(i<len(car_info)+1):
    if(car_info['Price'][i] <= 1000):
        car_info['PriceClass'][i] = "Low"
    elif(car_info['Price'][i] > 3000):
        car_info['PriceClass'][i] = "High"
    else:
        car_info['PriceClass'][i] = "Medium"
    i+=1
"""

i=1
while(i<len(car_info)+1):
    if(car_info.at[i,'Price'] <= 1000):
        car_info.at[i,'PriceClass'] = "Low"
    elif(car_info.at[i,'Price'] > 3000):
        car_info.at[i,'PriceClass'] = "High"
    else:
        car_info.at[i,'PriceClass'] = "Medium"
    i+=1

print(car_info)

print("This is total number of car based on PriceClass :- ",car_info['PriceClass'].value_counts())

print("hear we insert a new column for the age of car in year with float number :- ")

print("-------------------before insert new column-----------------------------")
print(car_info)
print("-------------------After insert new column-----------------------------")
car_info.insert(5,"age_year",0)
print(car_info)

print("-------------------After insert value to new column-----------------------------")
#   -> hear we use a function


#<--------------------------making a function------------------------------------->
#<--------------------------making a function------------------------------------->
def c_convert(val) :
    val_converted = val/12
    return val_converted

# -> type convert from string to int
car_info['Age'] = car_info['Age'].astype('float64')
car_info['age_year'] = car_info['age_year'].astype('float64')
#   |-> whne we give by-default 0 then it will take a 'int64' data-type while we are store float value so it will give warning not give error. for remove that error we need this data-type conversion


for i in range(1,len(car_info)+1):
    car_info.at[i,'age_year'] = c_convert(car_info.at[i,'Age'])

# -> without string to float conversion we can't round-up the float value because without conversion our type is object
# car_info['age_year'] = car_info['age_year'].astype('float64')
# -> during the inserting the new column if we pass ''(empty-string) then column type is object and if we pass 0(number) then column type is int64

print("\nafter insert the value in age_year column :- \n",car_info)



for i in range (1,len(car_info)+1):
    car_info.at[i,'age_year'] = round(car_info.at[i,'age_year'],1)
    # -> this will convert the float number to 1 digit after '.'


print("\nAfter roundup the float value :- \n",car_info)

print("-------------------we insert two new column-----------------------------")

car_info.insert(6,"newAge",0)
car_info.insert(7,"Km_per_month",0)

car_info['newAge'] = car_info['newAge'].astype('float64')
car_info['Km_per_month'] = car_info['Km_per_month'].astype('float64')

print(car_info)

print("-------------------we insert value in new column-----------------------------")

# -> creat a new function
def give_value(age,km):
    age_in_year = age / 12
    km_per_month = km / age
    return [age_in_year,km_per_month]

for i in range(1,len(car_info)+1):
    car_info.at[i,'newAge'],car_info.at[i,'Km_per_month'] = give_value(car_info.at[i,'Age'],car_info.at[i,'Totalkm'])
    car_info.at[i,'newAge'] = round(car_info.at[i,'newAge'],1)
    car_info.at[i,'Km_per_month'] = round(car_info.at[i,'Km_per_month'],1)

print(car_info)


