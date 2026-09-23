
import mysql.connector

# this is to print to all the database name

"""
mydb = mysql.connector.connect(host='localhost', user='root', password='')

mycursor = mydb.cursor()    # -> hear cursor will treat as a box in which we can store the values

mycursor.execute("SHOW DATABASES")  # it will return all the database name

# -> what it that function will return, that all information will store in the cursor


for i in mycursor:
    print(i)
"""

mydb = mysql.connector.connect(host='localhost', user='root', password='', database='exam')


mycursor = mydb.cursor()

mycursor.execute('SELECT * FROM carinfo')

# for i in mycursor : 
#     print(i)

result2 = mycursor.fetchone()   # after fatch one line pointer will mover to the second line

print(result2)  

result = mycursor.fetchall()    # pointer is at second line at start so it will print 2nd,3rd,4th line

print(result)


