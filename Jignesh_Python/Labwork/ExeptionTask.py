"""Task: accept number from user raise Exception if user enter below zero value
Task2: accept two numbers from user and raise exeption when 1st number smaller than 2nd 
"""

class User(Exception):
   pass
#accept two number from user
num1 = int(input("Enter 1st number: "))
num2 = int(input("Enter 2nd number: "))

try:
    #check cndition
    if num%2==0:
        print("Even number")
    else:
        #raise exeption
        raise User
except User:
    print("We can't accept odd number")