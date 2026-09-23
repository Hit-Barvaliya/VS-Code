
class computer:

    def __init__(self):
        self.name = 'Navin'
        self.age = 20

    def update(self):
        self.age = 30

    def compair(self,other):
        if(self.age == other.age):
            return True
        else :
            return False

    

comp1 = computer()
comp2 = computer()

print("This is comp1 :- ",comp1.name,comp1.age)
print("This is comp2 :- ",comp2.name,comp2.age)

comp1.name = 'Rashi'
comp1.age = 12

print("After modify ")

print("This is comp1 :- ",comp1.name,comp1.age)
print("This is comp2 :- ",comp2.name,comp2.age)

comp2.update()

print("\nAfter call update function for comp2 \n")

print("This is comp1 :- ",comp1.name,comp1.age)
print("This is comp2 :- ",comp2.name,comp2.age)


print("This is address of comp1 :- ",id(comp1))

# -> hear we creat a function to compair the age
comp3 = comp1   # -> hear we are not creat a new object but we creat new reference variable of comp1 
if(comp1==comp3):   # -> it will check the address of both obejct
    print("Both object are same ::")
else :
    print("Both object are different ::")


if(comp1.compair(comp2)):   
#   |-> this is mot an in-built function but we creat our own function
    print("Both object are same ::")
else :
    print("Both object are different ::")

