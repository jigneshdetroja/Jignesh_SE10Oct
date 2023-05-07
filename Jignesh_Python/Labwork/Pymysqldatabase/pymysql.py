# need to install xampp server or mysql
# after installation xampp server need to start apache server and mysql
# need to install pymysql -> pip install pymysql
"""
import pymysql

# connection with server
mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

#need to create database
mycursor.execute("create database if not exists 10Feb_db")

# save
mydb.commit()

#connection with DATABASE
mydb = pymysql.connect(host="localhost",user="root",password="",database="10Feb_db")
mycursor = mydb.cursor()

# #table creation query ececutation
# mycursor.execute("create table if not exists student(id int primary key auto_increment,name varchar(20),subject varchar(20))")

# mydb.commit()
"""
import pymysql

mydb = pymysql.connect(host="localhost",user="root",password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists 10Feb_db")

mydb.commit()