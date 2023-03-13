"""
student = {
    "Name" : "Jignesh",
    "Subject" : "Python",
    "Marks" : 86
    }

print(student)
print(student["Subject"])

#for use of print values and keys in list
for k,v in student.items():
     print(f"{k} = {v}")

for k in student.keys():
    print(k)
for v in student.values():
    print(v)
"""
#dictionary in another dictionary ask que from user and is it right or wrong 
quiz = {
    1 :{
        "que" : "Most puplular programng language",
        "ans" : "python"
        },
    2 :{
        "que" : "Prime minister of india",
        "ans" : "narendra modi"
        },
    }

for i in range(1,len(quiz)+1):
    print(quiz[i]['que'])
    ans = input("Enter ans : ")
    if ans == quiz[i]['ans']:
        print("Right answer")
    else:
        print("Wrong Answer")
