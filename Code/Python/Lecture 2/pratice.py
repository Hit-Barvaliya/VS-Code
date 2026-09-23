#pratice code

# name = input("enter your first name : ")
# print("length of your first name is ",len(name))

# str = input("Enter your String for Occurance of '$' :- ")
# print("Occurance are :- ",str.count('$'))

# num = int(input("Enter number for check odd-even :- "))
# ans = None
# if(num%2==0):
#     ans = "Even"
# else: 
#     ans = "Odd"
# print("Give number is :- ",ans)

print("Enter three number for find the greatest number :- ")
num1 = int(input())
num2 = int(input())
num3 = int(input())
ans2 = None
# print("Answer is :- ",max(num1,num2,num3))

if(num1 >= num2):
    if(num1 >= num3):
        ans2 = num1
    else:
        ans2 = num3
else :
    if(num2 >= num3):
        ans2 = num2
    else:
        ans2 = num3

print("Answer is ",ans2)
