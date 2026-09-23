

a = 10
b = 0



try :
    print("resource open")
    ans = a / b

except IndexError as e:
    print("SOME INDEX ERROE IS CCEURED :- ",e)

except ArithmeticError as e :
    print("SOME ARITHMETIC-ERROR IS OCCURED :- ",e)

except Exception as e:
    print("SOME EXCEPTION IS CCEURED :- ",e)

finally:
    print("resource closed")

# in pthon if we write exception at first then it will not give error like in java


