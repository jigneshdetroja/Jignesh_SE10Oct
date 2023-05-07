list = [10,20,30,10,40,50]
list1 = []
for x in list:
    if x not in list1:
        list1.append(x)

print(list)
print("Unique Numbers :",list1)