import pandas as pd


data_txt = pd.read_csv(r"C:\Users\Dipal\OneDrive\Desktop\demo2.txt",delimiter='\t',index_col=0)

print("This is demo2.txt file :- \n",data_txt)

print()

print("data_txt.dtypes :- \n",data_txt.dtypes)

# -> at this way we can modify the data-type of specific column
data_txt['TimeTaken'] = data_txt['TimeTaken'].astype('float32')

print("\nCheck the datatyp of TimeTaken column :- ")
print(data_txt.dtypes)


# print("\n\nThe type of Name column :- ",type(data_txt['Name']))
print("total consumed memory of Name column :- ",data_txt['Name'].nbytes)
data_txt['Name'] = data_txt['Name'].astype('category')
#   |-> thia gap will become very large when our table is very large
print("after change the type total consumed memory of Name column :- ",data_txt['Name'].nbytes)

print("<----------Beofre chang the Hello to HHHHH------------->")

print("Check the column of RepeatString :- \n",data_txt.head(10))

data_txt['RepeatString'] = data_txt['RepeatString'].replace('Hello','HHHHH',inplace=False)
#   |-> in the replace function first argument is string which is modify, second argument is new string and third is optional (inplace = true => which make entire column None because it will retunr None value, so it will give warning not give error)
#   |-> inplace = False will change the value in the column


# data_txt.replace({'RepeatString': {'Hello': 'HHHHH'}}, inplace=True)
#   |-> this is also work take from chatGPT

print("<----------After chang the Hello to HHHHH------------->")
print("Check the column of RepeatString :- \n",data_txt.head(10))


print("\nIt will give the sume of all exmtpy cell for each column :- \n")

numCount = data_txt.isnull().sum()
print(numCount)
print()
print()
print()
print()
print()
print()
print()
print()
print()
# print(data_txt.info())
# data_txt.info()
print(data_txt.keys())
# -> hear pandas will convert None to Nan so that cell is consider as empty cell 



