"""
inheritance : one class derived properties of another class 
    why we use inheritance?

    inheritance provide reusabilities
    using of inheritance we can reduce our code

"""
#single level inheritance
class Parent:
    def home(self):
        print("AHMEDABAD")

class Child(Parent): #inheritance parent in child
    def car(self):
        print("I HAVE A CAR")

# object declaration
obj = Child()
obj.home()
obj.car()


#hybrid inheritance
class GrandParent:
    def home(self):
        print("AHMEDABAD")

class Parent(GrandParent):
    def car(self):
        print("I HAVE A CAR")

class Child1(GrandParent):
    def bike(self):
        print("I HAVE A BIKE")

class Child2(Parent,Child1):
    def land(self):
        print("I HAVE A LAND")

obj = Child2()
obj.Parent()
obj.Child1()
obj.Child2()