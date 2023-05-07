class Faculty:
    def setName(self,name):
        self.name = name

    def getName(self):
        return self.name
    
    def setDepartment(self,dept):
        self.dept = dept

    def getDepartment(self):
        return self.dept
    
    def setTechnology(self,tech):
        self.tech = tech

    def getTechnology(self):
        return self.tech
    
obj = Faculty()
# set name using setter method
name = input("Enter name : ")
obj.setName(name)

# get name using getter method
print(obj.getName())

# set department using setter method
dept = input("Enter Departnemt : ")
obj.setDepartment(dept)

# get department using getter method
print(obj.getDepartment())

# set technology using setter method
tech = input("Enter Technologies : ")
obj.setTechnology(tech)

# get technology using getter method
print(obj.getTechnology())
