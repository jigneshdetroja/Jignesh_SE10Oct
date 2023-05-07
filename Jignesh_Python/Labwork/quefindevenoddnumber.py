"""
# que find even odd number
#accept number from user

num = int(input("Enter number : "))
"""
#user defined exeption

#create class which inhariate exeption

#user defined exeption
class OddExeption(Exception):
    pass

#accept number from user
num = int(input("Enter number : "))

try:
    #check cndition
    if num%2==0:
        print("Even number")
    else:
        #raise exeption
        raise OddExeption
except OddExeption:
    print("We can't accept odd number")