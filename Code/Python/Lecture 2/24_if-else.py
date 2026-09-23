# -> give grade based on the marks

mark = int(input("Enter the marks :- "))

grade = None

# if(mark <= 100 and mark >= 0):
if(0 <= mark <= 100):
    
    if(mark >= 90):
        grade = 'A'
    elif(mark >= 80):
        grade = 'B'
    elif(mark >= 70):
        grade = 'C'
    else:
        grade = 'D'

    print("This is d block")    # -> hear if we put 4 space then this line is consider in the 'else:' block

    print("Your gade is :- ",grade)

else:
    print("enter valid marks :- ")