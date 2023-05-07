"""
oop : object oriented programing system

class : which is contain data member and member function in single entity its called class

    syntax : 
        class <classname>:
            data member
            member function

object : object is a variable or instance of class


    syntax :

        obj = classname()

"""
# create class of person
class Person:
    #method
    def display(self): #self is represent current class properties
        print("This is person method")

# object creation of person class

obj = Person() #calling class
obj.display() #calling function
