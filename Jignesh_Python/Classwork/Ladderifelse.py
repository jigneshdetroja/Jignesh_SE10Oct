roll = int(input "Enter Roll No : "))
name = (input "Enter Name : "))
p = int(input "Enter Physics Marks : "))
m = int(input "Enter Maths Marks : "))
c = int(input "Enter Chemistry Marks : "))
total =(p+m+c)
per =(total)

print("*"*80)
print()
print("Roll No : ",roll)
print("Name : ",name)
print("Total : ",total)
print("Percentage : ",per)

if per>=75:
    print("Class is Distinction")
elif per>=60:
    print("Class is First Class")
elif per>=50:
    print("Class is Second Class")
elif per>=40:
    print("Class is Pass Class")
else:
    print("Fail!")
