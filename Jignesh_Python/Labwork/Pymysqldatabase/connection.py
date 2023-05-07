import pymysql

mydb = pymysql.connect(host='localhost',user='root',password="")
mycursor = mydb.cursor()

mycursor.execute("create database if not exists jignesh")

mydb.commit()

mydb = pymysql.connect(host='localhost',user='root',password='',database='jignesh')
mycursor = mydb.cursor()