


"""

python will support 5 type of inheritance

1) Single Inheritance           => 1-parent -> 1-child
2) Multiple Inheritance         => more then 1-parent -> 1-child
3) Multilevel Inheritance       => grand-parent -> parent -> child
4) Hierarchical Inheritance     => 1-parent -> more then 1-child
5) Hybrid Inheritance           => A combination of two or more types of inheritance

"""

# -> this is multiple inheritance

class A:
    def future1(self):
        print("This is future 1..")
    def future2(self):
        print("This is future 2..")

class B:
    def future3(self):
        print("This is future 3..")
    def future4(self):
        print("This is future 4..")

class C(A,B):
    def future5(self):
        print("This is future 5..")



obj1 = A()  # -> can call future 1 & 2
obj2 = B()  # -> can call future 3 & 4
obj3 = C()  # -> cal call future 1 to 5

obj1.future1()
obj2.future3()
obj3.future5()

# => this is to understand for working of constructor

class AA:
    def __init__(self):
        print("in AA init")
    def future1(self):
        print("future 1-A is working..")

    def future2(self):
        print("Future 2 is working..")

class BB:
    def __init__(self):
        print("in BB init")

    def future3(self):
        print("Future 2 is working..")
    def future4(self):
        print("future 4-A is working..")

class CC(AA,BB):

    def __init__(self):
        print("in CC init")

    def future4(self):
        print("future 4-B is working..")
    

obj33 = CC()
# -> when we creat a child class object then if child class has it's own constructor then it will execute
#   |-> if the child class has no it's own constructor then it will class parent class constructor and it follows MRO(Method Resolution Order)
# -> MRO means order it inheritance which is in the multipal inheritance

obj33.future4()


class DD(AA):
    def __init__(self):
    # -> we need explicitly call the parent class constructor
        super().__init__()
        print("is DD init")

    # -> with the super keyword we can also call the methods
    def future1(self):
        super().future1()
        print("future 1-B is working..")

    
obj44 = DD()

obj44.future1()



