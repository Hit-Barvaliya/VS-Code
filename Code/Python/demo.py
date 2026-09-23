import pandas as pd

data = pd.read_csv(r"D:\Programming\Code\Python\bank_marketing.csv")

print('First five records of the dataset:')

print(data.head())

print('\nShape of the dataset:', data.shape)

print('\nColumn name in the dataset:')
print(data.columns)

print('\nData types of each column:')
print(data.dtypes)

print("\nAfter remove the duplicate rows if any :- ")
data = data.drop_duplicates()
print(data.shape)

print('\nIdentifier attribute in the dataset:')
print(data.select_dtypes())

print("This is numericcal attribute :- ")
print(data.select_dtypes(include=['int64','float64']).columns)
print("This is categorical attribute :- ")
print(data.select_dtypes(include=['object']).columns)


