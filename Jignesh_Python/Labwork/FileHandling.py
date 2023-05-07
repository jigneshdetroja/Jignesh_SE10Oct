"""
we can create read and write file using of pytjhon

there are 4 modes in python file handling
r : read mode
w : write mode
x : create mode
a : apend mode


#take one variable which open file

f = open("myfile.txt","r")
print(f.read())

with open("myfile.txt","r") as f:
    print(f.read())
"""
f = open("mynew_file.txt","w") #w - write mode

#accept value from user
name = input("Enter name : ")

#using of write() write file
f.write("\n",+name)

#class file
f.close()