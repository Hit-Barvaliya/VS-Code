import pandas as pd

# -> this is for changing working directory
# import os
# os.chdir('D:\Programming\Python')


# data = pd.read_csv("demo.csv")    => this is will not work because my working directory is D:\Programming so my file is must be in that folder not in any other inner folder
#   |-> if we do not do that then write a full path of that file like given below

data = pd.read_csv(r"C:\Users\dipal\OneDrive\Desktop\demo.csv")

print("data from demo.csv file :- \n",data)
#   |-> blank cell read as nan
print("\n\ndata from demo.csv file with different column :- \n",pd.read_csv(r'C:\Users\dipal\OneDrive\Desktop\demo.csv',index_col=0))
#   |-> hear pandas use the first column as the index column


# -> hear we convert some junk value as nan value
print("\n\nafter remove junk value from demo.csv :- \n",pd.read_csv(r"C:\Users\dipal\OneDrive\Desktop\demo.csv",index_col=0,na_values=['??',"###"]))


# ->  this is read the data from '.xlsx'(excel file)
data_xlsx = pd.read_excel(r"C:\Users\dipal\OneDrive\Desktop\Book1.xlsx")
print("\n\nRead the data from the Book1.xslx(excel-file) :- \n",data_xlsx)


print("\n\nread data from the Sheet1 of Book1.xlsx :- \n",pd.read_excel(r"C:\Users\dipal\OneDrive\Desktop\Book1.xlsx",sheet_name='Sheet1'))
#   |-> read the data from the specefic steet
#   |-> we can also pass these function :- index_col=0,na_values=['??',"###"]

data_txt = pd.read_table(r"C:\Users\dipal\OneDrive\Desktop\demo2.txt",delimiter="\t")
#   |-> my txt file is tab-sepeated so in delimeter we pass '\t' 
#   |-> if my file is space seperated then i will pass ' ' in the delimeter
print("\n\nread the deta from the demo2.txt :- \n",data_txt)
print("\n\ntype of demo2.txt :- ",type(data_txt))
print("size of demo2.txt :- ",data_txt.shape)

#   |-> we can also use read_csv() function for read the txt file
#   |-> we can also pass these function :- index_col=0,na_values=['??',"###"]


