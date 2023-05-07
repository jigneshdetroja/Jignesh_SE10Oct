#class creation
class Student:
    #data member in class (variables)
    name = "jignesh"
    subject = "python"
    technology = "programing"

    #member functions in class 
    #self : which is represent current class properties
    def display(self):
        print("name = ",self.name)
        print("subject = ",self.subject)

    #object creation (calling object)
obj = Student()

obj.display()