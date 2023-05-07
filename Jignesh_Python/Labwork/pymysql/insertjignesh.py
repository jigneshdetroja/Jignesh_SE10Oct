# importing connecting file

import jigneshdatabase
import pymysql

#connect with database
mydb = pymysql.connect(host="localhost",user= "root",password= "",database="jignesh")
mycursor = mydb.cursor()

status = True
while status:
    data = """
                            Menu

                    1) store data
                    2) view data
                    3) update data
                    4) search data
                    5) delete data
            """
    print(data)

    choice = int(input("Enter your choice : "))
    if choice==1:
        #to insert data
        name = input("Enter your name : ")
        subject = input("Enter your subject : ")

        # query for store data
        query = "insert into detroja(name,subject) values ('%s','%s')"
        args = (name,subject)
        mycursor.execute(query % args)
        mydb.commit()
    
    elif choice==2:
        #to fetch all data from query
        query = "select * from detroja"
        #execute (query)
        mycursor.execute(query)

        #to fetch all data from query
        data = mycursor.fetchall()

        print(data)
    elif choice == 3:
        # update data
        id = int(input("Enter Id : "))
        name = input("Enter name : ")
        subject = input("Enter subject : ")

        #query
        query = "update detroja set name'%s', subject='%s' where id=%s "
        args = (name,subject,id)

        mycursor.execute(query%args)
        mydb.commit()

        print("Updated Successfully !!")

    elif choice == 4:
        #search data
        id = int(input("Enter Id : "))

        #query
        query = "select * from detroja where id = %s"

        # args
        args = (id)
        mycursor.execute(query%args)
        #retrive all data in row variable
        row = mycursor.fetchone()

        # id = 0 name = 1 subject = 2
        displayname = row[1]
        displaysubject = row[2]

        print("name = ",displayname)
        print("subject = ",displaysubject)

    elif choice == 5:
        #delete data
        id = int(input("Enter Id : "))

        #query
        query = "delete fom detroja where id = %s"

        #args
        args = (id)

        mycursor.execute(query%args)

        mydb.commit()
        print("Deleted Successfully")



    loop_choice = input("Do you want to perform more operations press 'y' for yes and press 'n' for no : ")
    if choice=="n":
        status = False