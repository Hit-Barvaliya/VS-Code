
# this is used in the socket programming

ls1 = ('Navin','Kiran','Harsh','Navin')
ls2 = ('Dell','Apple','Hp')

zipped = zip(ls1,ls2)

# print(zipped)

for (a,b) in zipped:
    print(a,b)


zipped2 = list(zip(ls1,ls2))    # hear we can also make a set or dictionary
print("\nThis is from list :- \n")
print(zipped2)




