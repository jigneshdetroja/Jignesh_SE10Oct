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
    
s1 = Student()
status = True
while status:
    # menu
    data = """
                press 1 for student registration
                press 2 for faculty registration
                press 3 for view all students
                press 4 fro exit
    """
    print(data)
    userinput = int(input("Enter your choice : "))
    if userinput == 1:
        s1.input()
    elif userinput == 2:
        #faculty input()
        print("====> faculty input")
    elif userinput == 3:
        #student input()
        print("====> Student input")
        s1.display()
    else:
        status = False
    choice = input("do you want more oprations : ")
    if choice == 'n':
        status = False