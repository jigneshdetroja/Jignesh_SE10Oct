# importing connecting file

import jigneshdatabse
import pymysql

#connect with database
mydb = pymysql.connect(host="localhost",user= "root",password= "")
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