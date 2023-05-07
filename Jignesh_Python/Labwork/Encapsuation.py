"""
encapsulation : which is wrap data in single entity 
which protect data from outside the class
getter and setter method
getter method use for get data and setter method use for set data
"""

class Student:
    # setter method
    def setId(self,id):
        self.id = id

    # getter method
    def getId(self):
        return self.id
    
    def setName(self,name):
        self.name =name

    def getName(self):
        return self.name
    
obj = Student()

# set data
id = int(input("Enter id : "))
obj.setId(id)

# get id using getter method
print(obj.getId())

# set name - using setter
name = input("Enter name : ")
obj.setName(name)

# get data
print(obj.getName())