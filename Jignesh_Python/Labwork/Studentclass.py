#class define for student
class Student:
    #dictionary - we use as a database
    db = {}

    # input method - which accept value from student user
    def input(self): # self keyword which is used to access inside class properties

        email = input("Enter Email : ")
        password = input("Enter Password : ")

        #storing data in db

        #here, email is key and password is a value
        #e.g: a@gmail.com : 123456
        self.db[email] = password

    def display(self):
        #display all students
        for k in self.db.keys():
            print("email = ",k)
    

# object creation of student class
s1 = Student()
status = True
while status:
    s1.input()
    choice = input("do you want to add more student : ")
    if choice== 'n':
        status = False

s1.display()