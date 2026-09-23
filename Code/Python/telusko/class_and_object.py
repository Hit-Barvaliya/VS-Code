
# -> hear we make a calss

class computer:

    # -> in python this is our constructor
    def __init__(self,cpu,ram):
        self.cpu = cpu
        self.ram = ram
        print("__init__ methof is called")

    # by default first argument of any function is object it self
    #   |-> we can also give other name instade of self
    def config(self):
        print("information of computer :- ",self.cpu,self.ram)


# -> hear we creat a object
com1 = computer('i5',16)
com2 = computer('Ryzen',8)

# -> we have two methods to call the functions of class

# -> method 1
computer.config(com1)

# -> method 2
com2.config()

print("type of com1 object is :- ",type(com1))

